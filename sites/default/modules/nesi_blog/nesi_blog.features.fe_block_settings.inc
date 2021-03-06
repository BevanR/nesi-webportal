<?php
/**
 * @file
 * nesi_blog.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nesi_blog_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-areas_of_research-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'areas_of_research-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'community/blogs
community/blogs/*',
    'roles' => array(),
    'themes' => array(
      'nesi_bootstrap' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'nesi_bootstrap',
        'weight' => '-30',
      ),
    ),
    'title' => 'What would you like to read about',
    'visibility' => '1',
  );

  $export['views-blog-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'blog-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'community/blogs
community/blogs/*',
    'roles' => array(),
    'themes' => array(
      'nesi_bootstrap' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'nesi_bootstrap',
        'weight' => '-29',
      ),
    ),
    'title' => 'Latest Posts',
    'visibility' => '1',
  );

  $export['views-blog_authors-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'blog_authors-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'community/blogs
community/blogs/*',
    'roles' => array(),
    'themes' => array(
      'nesi_bootstrap' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'nesi_bootstrap',
        'weight' => '-28',
      ),
    ),
    'title' => 'More Authors',
    'visibility' => '1',
  );

  $export['views-comments_recent-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'comments_recent-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'nesi_bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'nesi_bootstrap',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
