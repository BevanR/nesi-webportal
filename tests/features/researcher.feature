@user @login
Feature: Login to www.nesi.org as a researcher
  In order to start using additional features of the site

  Scenario: View the Login page
    When I go to "/user/login"
    Then I should see "Researcher Access"
    And I should see the following <links>
      | links                               |
      | Login using institution credentials |
      | Create a NeSI account               |
      
  #@validation
  Scenario Outline: Username validation: Valid username
    When I go to "/user/login"
    And I fill in "E-mail" with "<name>"
    And I fill in "Password" with random text
    And I press "Log in"
    Then I should see "Sorry, unrecognized username or password."
    And the field "E-mail" should be outlined in red
  Examples:
    | name           |
    | randomname     |
    | 123453         |
    | mail@mail.com  |

  @account-setup
  Scenario: Login and as researcher and create user profile
    Given I am logged in as "researcher"
    Then I should see "behat-researcher"
    And I fill contact "form"
    Given I fill in the following <formdetails>
      | field_type | form_id              | value             |
      | text       | First Name           |  Big              |
      | text       | Middle Name          | Friendly          |
      | text       | Last Name            | Giant             |
      | text       | Institution          | Dream Country     |
      | text       | Department / Group   | Whizzpoppers      |
      | text       | Position / Job Title | Dream Catcher     |
      | text       | Contact Phone        | Frobscottle       |
      | text       | Contact Address      | Giant Land        |
      | text       | Alternate Email      | bfg@giantland.com |
      # Select values need to be identified by css id
      | select     | #edit-profile-researcher-profile-field-user-nationality-und  | New Zealand |
    Then I press "Save"

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

  Scenario: Login and as researcher and are able complete Development Proposal 
    Given I am logged in as "researcher"
    And I go to "/apply"
    When I select the radio button "Proposal Development"
    And I press "Start" 
    Then I should see "Development Class: Technical Project Proposal"
    And I fill in the following <formdetails>
      | field_type | form_id                       | value                                                   |
      | text       | Project Title                 | Chocolate Factory                                       |
      ## Not able to use Field name due to date popup on this form element
      | text       | pdc-start-date[date]          | 09-05-2013                                              |
      | text       | Project description           | This is a description                                   |
      | text       | Principal's name              | Willy Wonka                                             |
      | text       | Principal's email             | willy@thechocolatefactory.com                           |
      | text       | Principal's phone number      | 021 555 555                                             |
      | text       | Project team members requiring access to the NeSI systems | Charlie Bucket, Veruca Salt |
      | text       | Project team's HPC experience | Ohh yes lots of expereince                              |
      ## Need to use the css id for a check box
      | check      | #edit-pdc-platform-power7     | Check box                                               |
      | text       | Software requirements         | Lisp, Colbalt, Erland and Go                            |
      | text       | Storage requirements          | 2 TB                                                    |
      | check      | #edit-pdc-expert-support-scaling-performance | Check box                                |
      | text       | Further information           | None                                                    | 
    Then I press "Submit Proposal"

  Scenario: Login and as researcher and create a second Development Proposal 
    Given I am logged in as "researcher"
    And I go to "/apply"
    When I select the radio button "Proposal Development"
    And I press "Start" 
    Then I should see "Development Class: Technical Project Proposal"
    And I fill in the following <formdetails>
      | field_type | form_id                       | value                                                   |
      | text       | Project Title                 | James and the Giant Peach                               |
      ## Not able to use Field name due to date popup on this form element
      | text       | pdc-start-date[date]          | 09-05-2013                                              |
      | text       | Project description           | This is a description                                   |
      | text       | Principal's name              | James Henry Trotter                                     |
      | text       | Principal's email             | james@thegiantpeach.com                                 |
      | text       | Principal's phone number      | 021 555 555                                             |
      | text       | Project team members requiring access to the NeSI systems | The Earthworm, Miss Spider  |
      | text       | Project team's HPC experience | Ohh yes lots of expereince                              |
      ## Need to use the css id for a check box
      | check      | #edit-pdc-platform-power7     | Check box                                               |
      | text       | Software requirements         | Lisp, Colbalt, Erland and Go                            |
      | text       | Storage requirements          | 2 TB                                                    |
      | check      | #edit-pdc-expert-support-scaling-performance | Check box                                |
      | text       | Further information           | None                                                    | 
    Then I press "Submit Proposal"

  @proposal
  Scenario: Login and as researcher and a submitted proposal
    Given I am logged in as "researcher"
    And I go to "/user/dashboard"
    When I click "Development Proposal - POWER7"
    Then I should see "James Henry Trotter"

  Scenario: Login and as researcher and view all submitted proposals
    Given I am logged in as "researcher"
    And I go to "/user/dashboard"
    Then I should see "Proposals and Projects"
    And I should see the following <texts>
      | texts                      |
      | James and the Giant Peach  |
      | Chocolate Factory          |

   
