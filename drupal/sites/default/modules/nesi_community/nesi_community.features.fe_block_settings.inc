<?php
/**
 * @file
 * nesi_community.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nesi_community_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-block_community_links'] = array(
    'cache' => -1,
    'custom' => '0',
    'machine_name' => 'block_community_links',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'community
community/*
news
news/*
events
events/*
blogs
blogs/*
news-events
news-events/*',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => '0',
      ),
      'nesi_bootstrap' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'nesi_bootstrap',
        'weight' => '-23',
      ),
    ),
    'title' => 'Find out what\'s happening',
    'visibility' => '1',
  );

  return $export;
}
