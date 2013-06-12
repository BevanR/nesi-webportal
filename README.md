# NeSI Website Code Repository

This repository version-controls custom code for the website of NeSI, New Zealand eScience Infrastructure: [www.nesi.org.nz](http://www.nesi.org.nz/)

This article documents how use this repository, test, deploy, maintain and manage a website hosting environment—an instance of the website used for production, staging, development or sandbox.

## Third Party Code

Third party code is excluded from this repository:

* Drupal core
* Anything from Drupal.org such as modules or themes
* Javascript and jQuery libraries, unless they are custom libraries for NeSI
* Patches for any of the above

Third party code (along with version numbers and patches) is referenced in `nesi.drush.make` instead of being added to the repository. Drush make can then include Drupal core, contrib and any other dependent third party code as well as apply patches to it.

Drush make adds contrib modules to `sites/all/modules`.  Custom modules go in `sites/default/modules`.

## Requirements

* Unix operating system such as Linux or Mac OS X
* Apache, PHP and MySQL installed and configured as per [Drupal 7's requirements](http://drupal.org/requirements)
* Bash command line
* [Git](http://git-scm.com/) version 1.7+ installed
* [Drush](http://drupal.org/project/drush) version 5.8+ installed
* Some familiarity with all of the above
* [GitHub](https://github.com/) account with SSH key-pair access.
* [Membership of NeSI organization on GitHub](https://github.com/nesi?tab=members) is only required to push git commits

## Installing and Managing Environments

### Setup New Environment

Use this process to create a new environment of the website.

This process is automated in a puppet script.  The puppet script is used for staging and production environments: https://github.com/nesi/puppet-drupal

1. `git clone git@github.com:nesi/nesi-webportal.git nesi-website`
1. Configure `nesi-website/drupal/` as the apache web document root.
1. `cd nesi-website/drupal/`
1. `drush make nesi.drush.make`
1. `cd sites/default/`
1. `cp default.settings.php settings.php`
1. Configure `$databases` in `settings.php` with mysql database and credentials
1. Run `echo "require 'settings.inc';" | cat >> settings.php` to add additional system settings
1. Import database and files. See *Import Content*.

### Update Existing Environment

Use this process to update an existing environment with latest code.

1. `cd` to the root of the git repository.
1. `git pull` or if switching git branches; `git fetch` and `git checkout BRANCH`
1. `cd drupal`
1. `rm -rf sites/all`
1. `drush make nesi.drush.make`
1. Update the database.  See *Update Database*.

### Additional Assumptions

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
  * The directories must exist.  Drush will not create them.

### Import Content

Use this process to pull the website's content (non version-controlled dynamic data: database & files directory) into a staging or development environment.  Do not run it in the production environment.

`@prod` or `@test` can be used instead of `@dev` to pull content from the corresponding environments.

> These aliases are version-controlled in `aliases.drushrc.php`.  They are available when Drush executes in the Drupal root directory or any sub-directory.  To use these aliases from any directory on the filesystem in the form `@nesi.dev` instead of shorthand `@dev`, create a symlink to the file from `~/.drush/nesi.aliases.drushrc.php`. Note however that this breaks `sql-sync` from inside the doc root.  See [this issue in the drush issue queue](http://drupal.org/node/1966160#comment-7279594).

1. `cd` to the web document root.
1. `drush sql-dump`
1. `drush sql-drop`
1. `drush sql-sync @dev`
1. `drush rsync @dev:%files %files`
1. Update the database if it was running on an older code base.  See *Update Database*.

### Update Database

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

> Some email providers support [address tags](http://en.wikipedia.org/wiki/Email_address#Address_tags).  E.g. `bevan.rudge+foobar@nesi.org.nz`.  Gmail, Google Apps and `@nesi.org.nz` support this feature.  `@auckland.ac.nz` does not.  To take advantage of this feature, consider `SET mail = CONCAT("bevan.rudge+", name, "@nesi.org.nz")`.

### Import & Update Content

The Drush shell alias `drush pull-data` combines the *Import Content* process and most of the *Update Database* process into one simple step.

Add the following to `~/.drush/drushrc.php`:

    $options['shell-aliases']['pull-data'] = '!drush sql-dump && drush sql-drop && drush sql-sync @dev && drush registry-rebuild && drush cache-clear all && drush updb && drush features-revert-all && drush rsync @dev:%files %files';

This alias is especially useful when testing database update code (implementations of [`hook_update_N()`](http://api.drupal.org/api/drupal/7/search/hook_update_N) in a development sandbox, but can also be used on staging environments with some tweaks; at least `@dev` will need to be changed.

This alias excludes the `drush sql-query` command because of [a bug in drush](http://drupal.org/node/1967346).

Do not use this alias on production.
## Automated Testing

Automated tests are implemented using the Behat framework.

### Dependencies

* php 5.3.2+
* php5-curl
* [Selenium](https://code.google.com/p/selenium/downloads/list)?
* Java runtime
* [Composer](http://getcomposer.org/doc/00-intro.md)
* `cd tests/`
* Composer manages further dependencies: `composer install`

### Configure

From the repository root;

* `cd tests/`
* `cp behat.local.example.yml behat.local.yml`
* Set base URL and user credentials in `behat.local.yml`.

### Run Tests

From the repository root;

* `cd tests/`
* `bin/behat`

### Write Tests

The quickest way to get familiar with BDD and Behat is to purchase the [knpuniversity.com behat screencast](https://knpuniversity.com/screencast/behat) an excellent and informative tutorial.

### Useful links

* [behat.org](http://behat.org)
* [getcomposer.org](http://getcomposer.org)
* [Behat cheat sheet](http://blog.lepine.pro/wp-content/uploads/2012/03/behat-cheat-sheet-en.pdf)
* [Blog post on using tags](http://everzet.com/post/1461842003/behat-v03)

## Theme Information

The NeSI website theme is based on the Bootstrap theme [Bootstrap theme - drupal.org](https://drupal.org/project/bootstrap).

Theme files are contained within `nesi-webportal/drupal/sites/default/themes/nesi_bootstrap`

The Bootstrap theme leverages the Bootstrap frontend framework [Bootstrap frontend framework](http://getbootstrap.com). Bootstrap provides a flexible standardised approach to build responsive websites.

### Modifying CSS for nesi_bootstrap

It is recommended to update `nesi_bootstrap/css/style.css` file with any style overrides.

NOTE: This process will change soon as css structures are being migrated to [LESS](http://lesscss.org/) to allow for all css to be managed by the `lessc` compiler. 

### LESS source for nesi_bootstrap

The nesi_bootstrap theme currently has it's source .less files in `nesi_bootstrap/assets/css/less`

`nesibootstrap.less` can be compiled to recreate the bootstrap css as included within `nesi_bootstrap/nesi_bootstrap.info`.

### Compiling LESS from source

To compile .less source into .css you will need a `LESS` compiler. Bootstrap has a guide on getting started with .less and the bootstrap project structure [Extending Bootstrap](http://twitter.github.io/bootstrap/extend.html). More documentation to come.

