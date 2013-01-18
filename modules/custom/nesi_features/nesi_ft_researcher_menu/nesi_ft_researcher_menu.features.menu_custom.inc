<?php
/**
 * @file
 * nesi_ft_researcher_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function nesi_ft_researcher_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-researcher-menu.
  $menus['menu-researcher-menu'] = array(
    'menu_name' => 'menu-researcher-menu',
    'title' => 'Researcher Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Researcher Menu');


  return $menus;
}
