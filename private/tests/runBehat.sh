#!/bin/bash
drush sql-dump > nesi-behat.mysql

# Create Drupal user with researcher role for testing
drush user-create behat-researcher --mail="willyWonka@chocolatefactory.com" --password="password"
drush user-add-role "researcher" behat-researcher

# Run BDD tests
bin/behat

# If you only what to run tagged tests
#bin/behat --tags="@account-setup,@multi"

echo "Do you wish to reset the DB to it's orginal state?"
select yn in "Yes" "No"; do
    case $yn in
        Yes ) drush sqlc < nesi-behat.mysql; break;;
        No ) exit;;
    esac
done


