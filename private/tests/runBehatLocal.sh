#!/bin/bash
ssh soscar 'cd /var/aegir/nesi-platforms/nesi-webportal-sam/drupal/sites/nesidev-sam.webscope.net.nz; drush sql-dump > nesi-behat.mysql'

ssh soscar 'cd /var/aegir/nesi-platforms/nesi-webportal-sam/drupal/sites/nesidev-sam.webscope.net.nz; drush user-create behat-researcher --mail="willyWonka@chocolatefactory.com" --password="password"'

ssh soscar 'cd /var/aegir/nesi-platforms/nesi-webportal-sam/drupal/sites/nesidev-sam.webscope.net.nz; drush user-add-role "researcher" behat-researcher'


# Run BDD tests
#bin/behat

# If you only what to run tagged tests
bin/behat --tags @account-setup
#bin/behat --tags @pitchmaster
#bin/behat --tags @edit-pitchmaster

echo "Do you wish to reset the DB to it's orginal state?"
select yn in "Yes" "No"; do
    case $yn in
        Yes ) ssh soscar 'cd /var/aegir/nesi-platforms/nesi-webportal-sam/drupal/sites/nesidev-sam.webscope.net.nz; drush sqlc < nesi-behat.mysql'; break;;
        No ) exit;;
    esac
done


