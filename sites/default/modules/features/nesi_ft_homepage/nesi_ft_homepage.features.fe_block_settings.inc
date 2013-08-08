<?php
/**
 * @file
 * nesi_ft_homepage.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nesi_ft_homepage_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-secondary-menu'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'secondary-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'nesi_bootstrap' => array(
        'region' => 'directory',
        'status' => '1',
        'theme' => 'nesi_bootstrap',
        'weight' => '-30',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['nesi_stats-front_stats'] = array(
    'cache' => '8',
    'custom' => '0',
    'delta' => 'front_stats',
    'module' => 'nesi_stats',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'nesi_bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'nesi_bootstrap',
        'weight' => '-22',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  return $export;
}
