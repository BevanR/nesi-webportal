@user @login
Feature: Login Commerce Kickstart
  In order to start using additional features of the site
  As an anonymous user
  I should be able to Login

  Scenario: View the Login page
    When I go to "/user/login"
    Then I should see "Researcher Access"
    And I should see the following <links>
      | links                               |
      | Login using institution credentials |
      | Create a NeSI account               |

  #@validation
  #Scenario Outline: Username validation: Valid username
    #When I go to "/user/login"
    #And I fill in "Username" with "<name>"
    #And I fill in "Password" with random text
    #And I press "Log in"
    #Then I should see "Sorry, unrecognized username or password."
    #And the field "Username" should be outlined in red
  #Examples:
    #| name           |
    #| randomname     |
    #| 123453         |
    #| mail@mail.com  |

  Scenario: Login and as researcher and view user profile
    Given I am logged in as "researcher"
    And I go to "/user"
    Then I should see "Profile"
    And I should see the following <links>
      | links                 |
      | Edit profile          |

  Scenario: Login and as researcher and download access policy
    Given I am logged in as "researcher"
    And I go to "/access-policy"
    Then I should see "Access Policy"
    And I should see the following <links>
      | links                                   |
      | NeSI Guidelines for Researchers 1.1.pdf |

