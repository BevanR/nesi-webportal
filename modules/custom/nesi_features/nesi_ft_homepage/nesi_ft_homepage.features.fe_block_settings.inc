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

  $export['nesi_stats-front_stats'] = array(
    'cache' => '8',
    'custom' => '0',
    'delta' => 'front_stats',
    'module' => 'nesi_stats',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'garland',
        'weight' => '0',
      ),
      'nesi_bootstrap' => array(
        'region' => 'subheader',
        'status' => '1',
        'theme' => 'nesi_bootstrap',
        'weight' => '-22',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  return $export;
}
