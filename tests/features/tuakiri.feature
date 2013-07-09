# Tuakiri login tests. Currently only tested with UoA IDP
Feature: Login via Tuakiri
  In order to access my account
  As a researcher
  I need to authenticate via Tuakiri

  # Basic test to ensure Tuakiri login accessible
  @tuakiri
  Scenario: Ensure Tuakiri is available as an authentication option
    When I go to "/user/login"
    And I click "Login using institution credentials"
    Then I should see "Login with Tuakiri"

  # Tests to ensure shibauth module correctly integrated with Tuakiri
  @tuakiri
  Scenario: Verify shibauth redirects user to Tuakiri home selection
    When I go to "/user/tuakiri"
    And I click "Login with Tuakiri"
    Then I should see "Select your Home Organisation"

  # Test to check that Home Institution correctly redirects to associated IdP
  # We may want to reuse this test for iteratively testing iDP integration on Tuakiri
  @tuakiri
  Scenario: Login as a researcher with my institution credentials to view my account
    When I go to "/user/tuakiri"
    And I click "Login with Tuakiri"
    Then I should see "Select your Home Organisation"
    And I select "Tuakiri New Zealand Access Federation" from "FedSelect"
    Then I select "The University of Auckland" from "originIdp"
    And I press "Select"
    Then I should see "The University of Auckland"

  @tuakiri @tuakirilogin @javascript
  Scenario: Login as a researcher with my institution credentials to view my account
    When I go to "/user/tuakiri"
    And I click "Login with Tuakiri"
    Then I should see "Select your Home Organisation"
    And I select "Tuakiri New Zealand Access Federation" from "FedSelect"
    Then I select "The University of Auckland" from "originIdp"
    And I press "Select"
    Then I should see "The University of Auckland"
    And I fill in my IDP credentials as "idp_researcher"
    And I click "Sign in"
    Then I should see "Proposals and Projects"

