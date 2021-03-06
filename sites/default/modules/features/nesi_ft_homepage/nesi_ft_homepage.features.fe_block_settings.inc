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

  $export['block-homepage_intro_items'] = array(
    'cache' => -1,
    'custom' => '0',
    'machine_name' => 'homepage_intro_items',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'nesi_bootstrap' => array(
        'region' => 'subheader',
        'status' => '1',
        'theme' => 'nesi_bootstrap',
        'weight' => '-23',
      ),
    ),
    'title' => '',
    'visibility' => '1',
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
