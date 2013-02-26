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
  // Translatables
  // Included for use with string extractors like potx.
  t('Header menu underneath top banner');
  t('Main menu');


  return $menus;
}
