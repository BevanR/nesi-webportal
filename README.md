## Automated Testing

Automated tests are implemented using the Behat framework.

### Dependencies

* php 5.3.2+
* php5-curl
* [Composer](http://getcomposer.org/doc/00-intro.md)
* Composer manages further dependencies: `composer install` from `tests/`.

### Configure

* `cp behat.local.example.yml behat.local.yml`
* Set base URL and user credentials in `behat.local.yml`.

### Run Tests

* `bin/behat` from `tests/`.

### Write Tests

@todo

### Useful links

* [behat.org](http://behat.org)
* [getcomposer.org](http://getcomposer.org)
* [Behat cheat sheet](http://blog.lepine.pro/wp-content/uploads/2012/03/behat-cheat-sheet-en.pdf)
