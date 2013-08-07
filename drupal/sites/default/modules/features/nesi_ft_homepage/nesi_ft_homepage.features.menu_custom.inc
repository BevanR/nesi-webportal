<?php
/**
 * @file
 * nesi_ft_homepage.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function nesi_ft_homepage_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'Header menu underneath top banner',
  );
  // Exported menu: secondary-menu.
  $menus['secondary-menu'] = array(
    'menu_name' => 'secondary-menu',
    'title' => 'Secondary menu',
    'description' => 'Secondary navigation menu that contains all information around accessing facilities and support for researchers',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Header menu underneath top banner');
  t('Main menu');
  t('Secondary menu');
  t('Secondary navigation menu that contains all information around accessing facilities and support for researchers');


  return $menus;
}
