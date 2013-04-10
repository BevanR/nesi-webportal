# NeSI Website Code Repository

This repository version-controls custom code for the website of NeSI, New Zealand eScience Infrastructure: [www.nesi.org.nz](http://www.nesi.org.nz/)

This article documents how use this repository, deploy, maintain and manage a website hosting environment—an instance of the website used for production, staging, development or sandbox.

## Third Party Code

The root of the repository is a Drupal `sites/` sub-directory.  E.g. `sites/default/`.

Third party code is excluded from this repository:

* Drupal core
* Anything from Drupal.org such as modules or themes
* Javascript and jQuery libraries, unless they are custom libraries for NeSI
* Patches for any of the above

Third party code (along with version numbers and patches) is referenced in `nesi.drush.make` instead of being added to the repository. Drush make can then include Drupal core, contrib and any other dependent third party code as well as apply patches to it.

## Requirements

* Unix operating system such as Linux or Mac OS X
* Apache, PHP and MySQL installed and configured as per [Drupal 7's requirements](http://drupal.org/requirements)
* Bash command line
* [Git](http://git-scm.com/) version 1.7+ installed
* [Drush](http://drupal.org/project/drush) version 5.8+ installed
* Some familiarity with all of the above
* [GitHub](https://github.com/) account with SSH key-pair access.
* [Membership of NeSI organization on GitHub](https://github.com/nesi?tab=members) is only required to push git commits

## Setup New Environment

Use this process to create a new environment of the website.

This process is automated in a puppet script.  The puppet script is used for staging and production environments: https://github.com/nesi/puppet-drupal

1. `cd` to the web document root
1. Check it is empty
1. `git clone git@github.com:nesi/nesi-webportal.git default`
1. `mkdir sites`
1. `mv default sites/`
1. `drush make sites/default/nesi.drush.make`
1. `cp sites/default/default.settings.php sites/default/settings.php`
1. Configure `$databases` in `sites/default/settings.php` with mysql database and credentials
1. Import database and files. See *Import Content*.

## Update Existing Environment

Use this process to update an existing environment with latest code.

1. `cd` to the web document root.
1. `cd sites/default/`
1. `git pull` or if switching git branches; `git fetch` and `git checkout BRANCH`
1. `cd ../..`
1. `drush make sites/default/nesi.drush.make`
1. Update the database.  See *Update Database*.

## Additional Assumptions

These additional requirements and assumptions apply to the *Import Content*, *Update Database* and *Import & Update Content* processes below.

* Linux user account on `web.dev.nesi.org.nz` with SSH key-pair access configured. (Required)
* The only directories in `sites/` are `default` and `all`.
* This [patch for Drush sql-sync](http://drupal.org/node/1730758#comment-7274314) so that it uses `$options['dump-dir']` as documented.  [How to apply Drupal.org patches](http://drupal.org/patch/apply).
* The following changes to `~/.drush/drushrc.php`;
  * Add or uncomment `$options['structure-tables']['common'] = array('cache', 'cache_filter', 'cache_menu', 'cache_page', 'cache_views', 'history', 'sessions', 'watchdog');`
  * Configure `$options['result-file']` so that `drush sql-dump` dumps to file instead of STDOUT.  E.g.  
      Linux: `$options['result-file'] = '/home/brud046/sql-dumps/@DATABASE_@DATE.sql';`  
      Mac OS X: `$options['result-file'] = '/Users/brud046/sql-dumps/@DATABASE_@DATE.sql';`
  * Configure `$options['dump-dir']` to optimise `drush sql-sync` through it's use of `rsync`.  E.g.  
      Linux: `$options['dump-dir'] = '/home/brud046/sql-dumps';`  
      Mac OS X: `$options['dump-dir'] = '/Users/brud046/sql-dumps';`

## Import Content

Use this process to pull the website's content (non version-controlled dynamic data: database & files directory) into a staging or development environment.  Do not run it in the production environment.

`@prod` or `@test` can be used instead of `@dev` to pull content from the corresponding environments.

> These aliases are version-controlled in `aliases.drushrc.php`.  They are available when Drush executes in the Drupal root directory or any sub-directory.  To use these aliases from any directory on the filesystem in the form `@nesi.dev` instead of shorthand `@dev`, create a symlink to the file from `~/.drush/nesi.aliases.drushrc.php`.

1. `cd` to the web document root.
1. `cd sites/default/`
1. `drush sql-dump`
1. `drush sql-drop`
1. `drush sql-sync @dev`
1. `drush rsync @dev:%files %files`
1. Update the database if it was running on an older code base.  See *Update Database*.

## Update Database

This process is necessary when:

* An environment's code base is updated.  E.g. A newer code base is deployed to production.
* A database is copied from an environment with an older code base.  E.g. Content is pulled from production to a staging or sandbox environment.

This process updates the database schema, rebuilds registries, clears caches and makes any other changes that are required for the database to be consistent with the code base.  It is can not be undone.

1. If the database was not recently backed up as part of a preceding process: `drush sql-dump`
1. `drush registry-rebuild`
1. `drush cache-clear all`
1. `drush updb`
1. `drush features-revert-all`
1. Using a web browser, login to the website at `user/login`
1. Check `admin/reports/status` and `admin/reports/dblog`
1. If not production: `drush sql-query 'UPDATE users SET mail = "user@example.com" WHERE uid > 1'`  
  This prevents email notifications being sent from staging and sandbox environments.  It may be useful to use a real email address instead of `user@example.com`.  

> Some email providers support [address tags](http://en.wikipedia.org/wiki/Email_address#Address_tags).  E.g. `brud046+foobar@nesi.org.nz`.  Gmail, Google Apps and `@nesi.org.nz` support this feature.  `@auckland.ac.nz` does not.  To take advantage of this feature, consider `SET mail = CONCAT("bevan.rudge+", name, "@nesi.org.nz")`.

## Import & Update Content

The Drush shell alias `drush pull-data` combines the *Import Content* process and most of the *Update Database* process into one simple step.

Add the following to `~/.drush/drushrc.php`:

    $options['shell-aliases']['pull-data'] = '!drush sql-dump && drush sql-drop && drush sql-sync @dev && drush sql-query \'UPDATE users SET mail = "user@example.com" WHERE uid > 1\' && drush registry-rebuild && drush cache-clear all && drush updb && drush features-revert-all && drush rsync @dev:%files %files';

This alias is especially useful when testing database update code (implementations of [`hook_update_N()`](http://api.drupal.org/api/drupal/7/search/hook_update_N) in a development sandbox, but can also be used on staging environments with some tweaks; at least `@dev` will need to be changed.

Do not use this alias on production.
