<?php

//
// Require 3rd-party libraries here:
//
   require_once 'PHPUnit/Autoload.php';
   require_once 'PHPUnit/Framework/Assert/Functions.php';
//

use Behat\Behat\Exception\PendingException,
  Behat\Gherkin\Node\TableNode;
use Drupal\DrupalExtension\Context\DrupalContext;
use Symfony\Component\Process\Process;

use Behat\Behat\Context\Step\Given;
use Behat\Behat\Context\Step\When;
use Behat\Behat\Context\Step\Then;
use Behat\Behat\Event\ScenarioEvent;
use Behat\Behat\Event\StepEvent;

use Behat\Mink\Exception\ElementNotFoundException;

//require 'vendor/autoload.php';

/**
 * Features context.
 */
class FeatureContext extends DrupalContext {

  /**
   * Initializes context.
   * Every scenario gets it's own context object.
   *
   * @param array $parameters context parameters (set them up through behat.yml)
   */
  public function __construct(array $parameters) {
    $this->default_browser = $parameters['default_browser'];
    if (isset($parameters['drupal_users'])) {
      $this->drupal_users = $parameters['drupal_users'];
    }
  }

  /**
   * @Given /^I (?:should |)see the following <links>$/
   */
  public function iShouldSeeTheFollowingLinks(TableNode $table) {
    $page = $this->getSession()->getPage();
    $table = $table->getHash();
    foreach ($table as $key => $value) {
      $link = $table[$key]['links'];
      $result = $page->findLink($link);
      if(empty($result)) {
        throw new Exception("The link '" . $link . "' was not found");
      }
    }
  }

  /**
   * @Given /^I should not see the following <links>$/
   */
  public function iShouldNotSeeTheFollowingLinks(TableNode $table) {
    $page = $this->getSession()->getPage();
    $table = $table->getHash();
    foreach ($table as $key => $value) {
      $link = $table[$key]['links'];
      $result = $page->findLink($link);
      if(!empty($result)) {
        throw new Exception("The link '" . $link . "' was found");
      }
    }
  }

  /**
   * Function to check if the field specified is outlined in red or not
   *
   * @Given /^the field "([^"]*)" should be outlined in red$/
   *
   * @param string $field
   *   The form field label to be checked.
   */
  public function theFieldShouldBeOutlinedInRed($field) {
    $page = $this->getSession()->getPage();
    // get the object of the field
    $formField = $page->findField($field);
    if (empty($formField)) {
      throw new Exception('The page does not have the field with label "' . $field . '"');
    }
    // get the 'class' attribute of the field
    $class = $formField->getAttribute("class");
    // we get one or more classes with space separated. Split them using space
    $class = explode(" ", $class);
    // if the field has 'error' class, then the field will be outlined with red
    if (!in_array("error", $class)) {
      throw new Exception('The field "' . $field . '" is not outlined with red');
    }
  }

  /**
   * @Given /^I fill in "([^"]*)" with random text$/
   */
  public function iFillInWithRandomText($label) {
    $step = "I fill in \"$label\" with \"SJ8CMPkFFO\"";
    return new Then($step);
  }

  /**
   * Helper function to fetch user details stored in behat.local.yml.
   *
   * @param string $type
   *   The user type, e.g. drupal.
   *
   * @param string $name
   *   The username to fetch the password for.
   *
   * @return string
   *   The matching password or FALSE on error.
   */
  public function fetchUserDetails($type, $name) {
    $property_name = $type . '_users';
    try {
      $property = $this->$property_name;
      $details = $property[$name];
      return $details;
    } catch (Exception $e) {
      throw new Exception("Non-existant user/password for $property_name:$name please check behat.local.yml.");
    }
  }

  /**
   * @Given /^I (?:should |)see the following <texts>$/
   */
  public function iShouldSeeTheFollowingTexts(TableNode $table) {
    $page = $this->getSession()->getPage();
    $table = $table->getHash();
    foreach ($table as $key => $value) {
      $text = $table[$key]['texts'];
      if($page->hasContent($text) === FALSE) {
        throw new Exception("The text '" . $text . "' was not found");
      }
    }
  }

  /**
   * Authenticates a user.
   *
   * @todo Refactor iAmLoggedInAsWithThePasswordUsingSelenium() for code re-use.
   *
   * @Given /^I am logged in as "([^"]*)" with the password "([^"]*)"$/
   */
  public function iAmLoggedInAsWithThePassword($username, $passwd) {
    $user = $this->whoami();

    if (strtolower($user) == strtolower($username)) {
      // Already logged in.
      // echo "Already logged in \n";
      return;
    }

    $element = $this->getSession()->getPage();
    if (empty($element)) {
      throw new Exception('Page not found');
    }

    // Go to the user login page.
    $this->getSession()->visit($this->locatePath('/user/login'));

    // If I see this, I'm not logged in at all so log the user in.
    $element->fillField('edit-name', $username);
    $element->fillField('edit-pass', $passwd);
    
    // echo "Filling password fields \n";
    $submit = $element->findButton('edit-submit');
    if (empty($submit)) {
      throw new Exception('No submit button at ' . $this->getSession()->getCurrentUrl());
    }

    // Log in.
    $submit->click();
    // TODO this function doesn't work when using selenium
    // Might need to stick a 'wait' in here 
    //$user = $this->whoami();
    //if (strtolower($user) != strtolower($username)) {
      //throw new Exception('Could not log user in.');
    //}

    // Successfully logged in.
    return;
  }

 /**
   * @Given /^I am logged in through a browser as "([^"]*)"$/
   */
  public function iAmLoggedInThroughABrowserAs($username) {
    $details = $this->fetchUserDetails('drupal', $username);
    $username = $details['username'];
    $password = $details['password'];
    $this->iAmLoggedInAsWithThePasswordUsingSelenium($username, $password);
  }

  /**
   * Authenticates a user.
   *
   * @todo Refactor iAmLoggedInAsWithThePassword() for code re-use.
   *
   * @Given /^I am logged in as "([^"]*)" with the password "([^"]*)" using selenium$/
   */
  public function iAmLoggedInAsWithThePasswordUsingSelenium($username, $passwd) {
    $user = $this->whoami();

    if (strtolower($user) == strtolower($username)) {
      // Already logged in.
      // echo "Already logged in \n";
      return;
    }

    $element = $this->getSession()->getPage();
    if (empty($element)) {
      throw new Exception('Page not found');
    }

    // Go to the user login page.
    $this->getSession()->visit($this->locatePath('/user/login'));

    // If I see this, I'm not logged in at all so log the user in.
    $element->fillField('edit-name', $username);
    $element->fillField('edit-pass', $passwd);
    
    // echo "Filling password fields \n";
    $submit = $element->findButton('edit-submit');
    if (empty($submit)) {
      throw new Exception('No submit button at ' . $this->getSession()->getCurrentUrl());
    }

    // Log in.
    $submit->click();
    // Wait for the AJAX login to complete.
    // @todo Look for an event to bind to instead.
    $this->getSession()->wait(10000);

    // Successfully logged in.
    return;
  }


  /**
   * Authenticates a user with password from configuration.                                                ]
   *
   * @Given /^I am logged in as "([^"]*)"$/
   */
  public function iAmLoggedInAs($username) {
    $details = $this->fetchUserDetails('drupal', $username);
    $username = $details['username'];
    $password = $details['password'];
    $this->iAmLoggedInAsWithThePassword($username, $password);
  }

  /**
   * Private function for the whoami step.
   */
  private function whoami() {
    $element = $this->getSession()->getPage();
    // Go to the user page.
    $this->getSession()->visit($this->locatePath('/user'));
    if ($find = $element->find('css', 'h1')) {
      $page_title = $find->getText();
      if ($page_title) {
        return strtolower($page_title);
      }
    }
    return FALSE;
  }

  /**
   * @Given /^I fill in the following <formdetails>$/
   *
   * http://www.whiteoctober.co.uk/blog/2012/09/12/behat-tablenodes-the-missing-manual/
   */
  public function iFillInTheFollowingFormdetails(TableNode $table) {
    
    $tableValues = $table->getHash();
    //throw new PendingException();
    $element = $this->getSession()->getPage();
    if (empty($element)) {
      throw new Exception('Page not found');
    }

    foreach($tableValues as $formData) {
      
      switch($formData['field_type']) {
      
        case 'text':
            $element->fillField($formData['form_id'], $formData['value']);
          break;

        case 'check':
            $checkElement = $element->find('css' ,$formData['form_id']);
            $checkElement->check();
          break;

      case 'select':
            $selectElement = $element->find('css' , $formData['form_id'] );
            $selectElement->selectOption($formData['value']);

          break;

        }

      }
    // If I see this, I'm not logged in at all so log the user in.
    //$element->fillField('Password', $passwd);
    //$submit = $element->findButton('Log in');
    //if (empty($submit)) {
      //throw new Exception('No submit button at ' . $this->getSession()->getCurrentUrl());
    //}

    }

    /**
     * Pauses the scenario until the user presses a key. Useful when debugging a scenario.
     *
     * @Then /^break$/
     */
    public function iPutABreakpoint()
    {
        fwrite(STDOUT, "\033[s    \033[93m[Breakpoint] Press \033[1;93m[RETURN]\033[0;93m to continue...\033[0m");
        while (fgets(STDIN, 1024) == '') {}
        fwrite(STDOUT, "\033[u");

        return;
    }
}
