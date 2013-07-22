<?php
/**
 * @file
 * nesi_cs_team.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nesi_cs_team_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-6e46c24f4115d81251f18d75b36af6d8'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '6e46c24f4115d81251f18d75b36af6d8',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/141',
    'roles' => array(),
    'themes' => array(
      'nesi_bootstrap' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'nesi_bootstrap',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-d4b8cad1b1d9ddaeef7ecbfd3fb9e286'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'd4b8cad1b1d9ddaeef7ecbfd3fb9e286',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/141',
    'roles' => array(),
    'themes' => array(
      'nesi_bootstrap' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'nesi_bootstrap',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  return $export;
}
