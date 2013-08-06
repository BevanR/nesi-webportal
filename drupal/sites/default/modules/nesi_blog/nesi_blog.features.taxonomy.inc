<?php
/**
 * @file
 * nesi_blog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nesi_blog_taxonomy_default_vocabularies() {
  return array(
    'blog_topics' => array(
      'name' => 'Blog Topics',
      'machine_name' => 'blog_topics',
      'description' => 'Blog Topics',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
