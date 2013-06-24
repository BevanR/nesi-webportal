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
    'areas_of_research' => array(
      'name' => 'Areas of Research',
      'machine_name' => 'areas_of_research',
      'description' => 'Areas of Research',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'custom_tags' => array(
      'name' => 'Custom Tags',
      'machine_name' => 'custom_tags',
      'description' => 'Tags',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
