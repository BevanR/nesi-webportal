Feature: Submit a proposal
  In order to get resource allocation
  As a researcher
  I need to submit proposals
  
  @access-policy
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
      | check      | #edit-pdc-platform-intel      | Check box                                               |
      | check      | #edit-pdc-platform-bluegene   | Check box                                               |
      | text       | Software requirements         | Lisp, Colbalt, Erland and Go                            |
      | text       | Storage requirements          | 2 TB                                                    |
      | check      | #edit-pdc-expert-support-scaling-performance | Check box                                |
      | text       | Further information           | None                                                    | 
    Then I press "Submit Proposal"

  @proposal
  Scenario: Login and as researcher and a submitted proposal
    Given I am logged in as "researcher"
    And I go to "/user/dashboard"
    When I click "Development Proposal - INTEL"
    Then I should see "James Henry Trotter"

  Scenario: Login and as researcher and view all submitted proposals
    Given I am logged in as "researcher"
    And I go to "/user/dashboard"
    Then I should see "Proposals and Projects"
    And I should see the following <texts>
      | texts                      |
      | James and the Giant Peach  |
      | Chocolate Factory          |
    
  @multi
  Scenario: Login and as researcher and are able complete Development Proposal 
    Given I am logged in as "researcher"
    And I go to "/apply"
    When I select the radio button "Research"
    And I press "Start" 
    Then I should see "Part 1 of 3 - Project and Team details"
    And I fill in the following <formdetails>
      | field_type | form_id                                            | value                                 |
      | text       | Proposal Title                                     | Matilda                               |
      ## Not able to use Field name due to date popup on this form element
      | text       | prc-start-date[date]                               | 09-05-2013                            |
      | text       | Scientific goals                                   | To understand Telekinesis             |
      | text       | Benefits from HPC                                  | Data crunching                        |
      | text       | Project deliverables                               | A magic pendant to allow telekinesis  |
      | text       | Name of peer-reviewed research grant provider      | Miss Honey                            |
      | text       | prc-grant-start-date[date]                         | 09-05-2013                            |
      | text       | Duration of the grant                              | As long as it takes                   |
      | text       | Amount                                             | 500 bitcoins                          |
      | text       | Principal's name                                   | Miss Trunchbull                       |
      | text       | Principal's email                                  | tbull@grimalkin.school                |
      | text       | Principal's phone number                           | 021 555 555                           |
      | text       | Project team members requiring access to the NeSI systems  | Miss Honey                    | 
    Then I press "Next: Technical Details"
    And I go to "apply/nojs/create-proposal/step3"
    Then I should see "Part 2 of 3 - Technical details"
    And I fill in the following <formdetails>
      | field_type | form_id                                                          | value                   |
      | text       | Estimated number of runs/simulations.                            | 5000                    |
      | text       | Estimated average number of CPUs per run                         | 30                      |
      | text       | Estimated average length of each run (in wall-clock hours)       | 2hrs                    |
      | text       | Please provide any additional information on usage requirements  | Will need 45 GB of RAM  |
      | text       | CPU core hours required using the Intel cluster                  | 5                       |
      | text       | CPU core hours required using P575/POWER6                        | 5                       |
      | text       | CPU core hours required using P755/POWER7                        | 5                       |
      | text       | CPU core hours required using BlueGene/P                         | 5                       |
      | text       | Storage requirements                                             | 2 TB                    |
      | text       | Software requirements                                            | Python                  |
      | text       | Data transfer                                                    | None                    |
    Then I press "Next: Support Information"
    And I go to "apply/nojs/create-proposal/step4"
    Then I select the radio button "Yes"
    And I fill in the following <formdetails>
      | field_type | form_id                                          | value                                   |
      | text       | Explanatory notes for "Expert support" section   | Will need to work with a clair voyent   |
      | text       | Further information                              | None                                    |
    Then I press "Submit Proposal"
