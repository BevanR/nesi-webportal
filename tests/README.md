Setting up BeHat Tests
======================

Base Setup
----------

* To start running the tests the only outside dependancy is **Composer**. Check [composer installation instructions](http://getcomposer.org/doc/00-intro.md).
* Download additional dependancies by running: **composer install** from the **tests** dir.

Local Configuration
-------------------
* **behat.yml** needs to have valid Drupal admin user details added.
* **behat.local.yml** needs to have base url of the site added.

Running Tests
------------
* Run **bin/behat** from the **tests** dir.

Useful links:

* [behat.org](http://behat.org)
* [getcomposer.org](http://composer.org)
