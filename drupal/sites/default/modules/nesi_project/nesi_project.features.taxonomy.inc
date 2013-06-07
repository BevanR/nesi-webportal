<?php
/**
 * @file
 * nesi_project.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nesi_project_taxonomy_default_vocabularies() {
  return array(
    'hpc_platforms' => array(
      'name' => 'HPC Platforms',
      'machine_name' => 'hpc_platforms',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
