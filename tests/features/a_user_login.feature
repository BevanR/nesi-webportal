@user-login
Feature: User login
  In order to start using additional features of the site
  As a user
  I need to be able to login

  @login-page @nojs
  Scenario: View the Login page
    When I go to "/user/login"
    Then I should see "Researcher Access"
    And print last response
    Then break
    And I should see the following <links>
      | links                               |
      | Login using institution credentials |
      | Create a NeSI account               |
      
  @validation @nojs
  Scenario Outline: Username validation: Valid username
    When I go to "/user/login"
    And I fill in "E-mail" with "<name>"
    And I fill in "Password" with random text
    And I press "Log in"
    Then I should see "Sorry, unrecognized username or password."
    Examples:
    | name           |
    | randomname     |
    | 123453         |
    | mail@mail.com  |

  @account-setup @nojs
  Scenario: Login and as researcher and create user profile
    Given I am logged in as "researcher"
    Then I should see "behat-researcher"
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
      ## Select values need to be identified by css id
      | select     | #edit-profile-researcher-profile-field-user-nationality-und  | New Zealand |
    Then I press "Save"

  @nojs
  Scenario: Login and as researcher and view user profile
    Given I am logged in as "researcher"
    And I go to "/user"
    Then I should see "Profile"
    And I should see the following <links>
      | links                 |
      | Edit profile          |
