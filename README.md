Setting up Beat Tests
======================

Base Setup
----------

* To start running the tests the only outside dependancy is **Composer**. Check [composer installation instructions](http://getcomposer.org/doc/00-intro.md).
* Download additional dependancies by running: **composer install** from the **tests** dir.

Local Configuration
-------------------
* **behat.local.yml** needs to have base url of the site being tested, and account details username and password details for **admin** and **researcher** test roles.

Running Tests
------------
* Run **bin/behat** from the **tests** dir.

Useful links:

* [behat.org](http://behat.org)
* [getcomposer.org](http://composer.org)
* [Behat Cheat Sheet](http://blog.lepine.pro/wp-content/uploads/2012/03/behat-cheat-sheet-en.pdf)
