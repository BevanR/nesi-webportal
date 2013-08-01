Feature: Submit a proposal
  In order to get resource allocation
  As a researcher
  I need to submit proposals
  
  @access-policy @nojs
  Scenario: Login and as researcher and download access policy
    Given I am logged in as "researcher"
    And I go to "/access-policy"
    Then I should see "Access Policy"
    And I should see the following <links>
      | links                                   |
      | NeSI Guidelines for Researchers 1.2.pdf |

  @javascript
  Scenario: Login and as researcher and are able complete Development Proposal 
    Given I am logged in through a browser as "researcher"
    And I go to "/apply"
    When I select the radio button "Proposal Development"
    And I press "Start" 
    Then I should see "Development Class: Technical Project Proposal"
    And I fill in the following <formdetails>
      | field_type | form_id                       | value                                                   |
      | text       | Project title                 | Chocolate Factory                                       |
      ## Not able to use Field name due to date popup on this form element
      | text       | Project Description           | This is a description                                   |
      | text       | field-pdc-start-date[date]          | 09-05-2013                                              |
      | text       | Principal's name              | Willy Wonka                                             |
      | text       | Principal's email             | willy@thechocolatefactory.com                           |
      | text       | Principal's phone number      | 021 555 555                                             |
      | text       | Project team members requiring access to the NeSI systems | Charlie Bucket, Veruca Salt |
      | text       | Project team's HPC experience | Ohh yes lots of expereince                              |
      ## Need to use the css id for a check box
      | check      | #edit-field-pdc-proposed-hpc-platform-power7     | Check box                                               |
      | text       | Software Requirements         | Lisp, Colbalt, Erland and Go                            |
      | text       | Storage Requirements          | 2 TB                                                    |
      | check      | #edit-field-pdc-expert-support-scaling-performance | Check box                                |
      | text       | Further Information           | None                                                    | 
    Then I press "Submit Proposal"
    And I should see "Access Policy"
    Then I press "I accept"
    And I should see "Thank you"

  @javascript
  Scenario: Login and as researcher and create a second Development Proposal 
    Given I am logged in through a browser as "researcher"
    And I go to "/apply"
    When I select the radio button "Proposal Development"
    And I press "Start" 
    Then I should see "Development Class: Technical Project Proposal"
    And I fill in the following <formdetails>
      | field_type | form_id                       | value                                                   |
      | text       | Project title                 | The Twits                                               |
      ## Not able to use Field name due to date popup on this form element
      | text       | Project Description           | This is a description                                   |
      | text       | field-pdc-start-date[date]          | 09-05-2013                                              |
      | text       | Principal's name              | Willy Wonka                                             |
      | text       | Principal's email             | willy@thechocolatefactory.com                           |
      | text       | Principal's phone number      | 021 555 555                                             |
      | text       | Project team members requiring access to the NeSI systems | James Henry Trotter, Charlie Bucket, Veruca Salt |
      | text       | Project team's HPC experience | Ohh yes lots of expereince                              |
      ## Need to use the css id for a check box
      | check      | #edit-field-pdc-proposed-hpc-platform-power7     | Check box                                               |
      | text       | Software Requirements         | Lisp, Colbalt, Erland and Go                            |
      | text       | Storage Requirements          | 2 TB                                                    |
      | check      | #edit-field-pdc-expert-support-scaling-performance | Check box                                |
      | text       | Further Information           | None                                                    | 
    Then I press "Submit Proposal"
    And I should see "Access Policy"
    Then I press "I accept"
    And I should see "Thank you"


  @proposal @nojs
  Scenario: Login and as researcher and a submitted proposal
    Given I am logged in as "researcher"
    And I go to "/user/dashboard"
    When I click "Development Proposal -"
    Then I should see "James Henry Trotter"
  
  @javascript
  Scenario: Login and as researcher and are able complete Development Proposal 
    Given I am logged in through a browser as "researcher"
    And I go to "/apply"
    When I select the radio button "Research"
    And I press "Start" 
    Then I should see "Part 1 of 3 - Project and Team details"
    And I fill in the following <formdetails>
      | field_type | form_id                                            | value                                 |
      | text       | Proposal Title                                     | Matilda                               |
      ## Not able to use Field name due to date popup on this form element
      | text       | field-prc-start-date[date]                               | 09-05-2014                            |
      | text       | Scientific Goals                                   | To understand Telekinesis             |
      | text       | Benefits from HPC                                  | Data crunching                        |
      | text       | Project Deliverables                               | A magic pendant to allow telekinesis  |
      | text       | Name of peer-reviewed research grant provider      | Miss Honey                            |
      | text       | Title of research grant                            | Miss Honey                            |
      | text       | field-prc-grant-start-date[date]                         | 09-05-2014                            |
      | text       | Duration of the grant                              | As long as it takes                   |
      | text       | Amount                                             | 500 bitcoins                          |
      | text       | Background                                         | This is the background                |
      | text       | Principal's name                                   | Miss Trunchbull                       |
      | text       | Principal's email                                  | tbull@grimalkin.school                |
      | text       | Principal's phone number                           | 021 555 555                           |
      | text       | Project team members requiring access to the NeSI systems  | Miss Honey                    | 
    And I press "Next: Technical Details"
    Then I should see "Part 2 of 3 - Technical details"
    And I fill in the following <formdetails>
      | field_type | form_id                                                          | value                   |
      | text       | Estimated Run Length                                             | 5000                    |
      | text       | edit-field-prc-estimated-simulations                             | 5000                    |
      | text       | Estimated average number of CPUs per run                         | 30                      |
      | text       | Estimated average length of each run (in wall-clock hours)       | 2hrs                    |
      | text       | Please provide any additional information on usage requirements  | Will need 45 GB of RAM  |
      | text       | CPU core hours required using the Intel cluster                  | 5                       |
      | text       | CPU core hours required using P575/POWER6                        | 5                       |
      | text       | CPU core hours required using P755/POWER7                        | 5                       |
      | text       | CPU core hours required using BlueGene/P                         | 5                       |
      | text       | Storage Requirements                                             | 2 TB                    |
      | text       | Software Requirements                                            | Python                  |
      | text       | Data Transfer                                                    | None                    |
    Then I press "Next: Support Information"
    And I fill in the following <formdetails>
      | field_type | form_id                                          | value                                   |
      | text       | Explanatory notes for "Expert support" section   | Will need to work with a clair voyent   |
      | check      | #edit-field-prc-expert-support-yes               | Check box                               |
      | text       | Further Information                              | None                                    |
    Then I press "Submit Proposal"
    And I should see "Access Policy"
    Then I press "I accept"
    And I should see "Thank you"

  @javascript
  Scenario: Login and as researcher and are able complete Postgraduate Class 
    Given I am logged in through a browser as "researcher"
    And I go to "/apply"
    When I select the radio button "Postgraduate"
    And I press "Start" 
    Then I should see "Part 1 of 3 - Project and Team details"
    And I fill in the following <formdetails>
      | field_type | form_id                                            | value                                 |
      | text       | Proposal Title                                     | Matilda                               |
      ## Not able to use Field name due to date popup on this form element
      | text       | field-pgc-start-date[date]                               | 09-05-2014                            |
      | text       | Scientific Goals                                   | To understand Telekinesis             |
      | text       | Benefits from HPC                                  | Data crunching                        |
      | text       | Project Deliverables                               | A magic pendant to allow telekinesis  |
      | text       | Supervisor email                                   | bert@iamasupervisor.com               |
      | text       | Supervisor name                                    | Bert                                  |
      | text       | Supervisor phone number                            | 021 555 555                           |
      | text       | Amount                                             | 500 bitcoins                          |
      | text       | Background                                         | This is the background                |
      | text       | Principal's name                                   | Miss Trunchbull                       |
      | text       | Principal's email                                  | tbull@grimalkin.school                |
      | text       | Principal's phone number                           | 021 555 555                           |
      | text       | Project team members requiring access to the NeSI systems  | Miss Honey                    | 
    And I press "Next: Technical Details"
    Then I should see "Part 2 of 3 - Technical details"
    And I fill in the following <formdetails>
      | field_type | form_id                                                          | value                   |
      | text       | Estimated Run Length                                             | 5000                    |
      | text       | edit-field-pgc-estimated-simulations                             | 5000                    |
      | text       | Estimated average number of CPUs per run                         | 30                      |
      | text       | Estimated average length of each run (in wall-clock hours)       | 2hrs                    |
      | text       | Please provide any additional information on usage requirements  | Will need 45 GB of RAM  |
      | text       | CPU core hours required using the Intel cluster                  | 5                       |
      | text       | CPU core hours required using P575/POWER6                        | 5                       |
      | text       | CPU core hours required using P755/POWER7                        | 5                       |
      | text       | CPU core hours required using BlueGene/P                         | 5                       |
      | text       | Storage Requirements                                             | 2 TB                    |
      | text       | Software Requirements                                            | Python                  |
      | text       | Data Transfer                                                    | None                    |
    Then I press "Next: Support Information"
    And I fill in the following <formdetails>
      | field_type | form_id                                          | value                                   |
      | text       | Explanatory notes for "Expert support" section   | Will need to work with a clair voyent   |
      | text       | Further Information                              | None                                    |
    When I select the radio button "Yes"
    Then I press "Submit Proposal"
    And I should see "Access Policy"
    Then I press "I accept"
    And I should see "Thank you"

  @nojs
  Scenario: Login and as researcher and view all submitted proposals
    Given I am logged in as "researcher"
    And I go to "/user/dashboard"
    Then I should see "Proposals and Projects"
    And I should see the following <texts>
      | texts                      |
      | The Twits                  |
      | Chocolate Factory          |
      | Matilda                    |
