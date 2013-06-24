<?php
/**
 * @file
 * nesi_custom_tags.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nesi_custom_tags_taxonomy_default_vocabularies() {
  return array(
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
