## Automated Testing

Automated tests are implemented using the Behat framework.

### Dependencies

* php 5.3.2+
* php5-curl
* [Composer](http://getcomposer.org/doc/00-intro.md)
* Composer manages further dependencies:
* Download additional dependancies `composer install` from `tests/`.

### Configure

* `behat.local.yml` needs to have base url of the site being tested, and account details username and password details for **admin** and **researcher** test roles.  See `behat.local.example.yml`.

### Run Tests

* Run **bin/behat** from the **tests** dir.

### Write Tests

@todo

### Useful links

* [behat.org](http://behat.org)
* [getcomposer.org](http://getcomposer.org)
* [Behat cheat sheet](http://blog.lepine.pro/wp-content/uploads/2012/03/behat-cheat-sheet-en.pdf)
