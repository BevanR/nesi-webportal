# This feature is used for operational requirement tests checked by an administrator
# E.g. 
# * https is enabled
# * shib is configured
Feature: Check general website operational requirements
  In order for the website to be considered operational
  As an administrator
  I need confirm the website is configured correctly

@operational
Scenario: Redirect to http to https
  Given I am on the homepage
  Then I should be on a secure URI

