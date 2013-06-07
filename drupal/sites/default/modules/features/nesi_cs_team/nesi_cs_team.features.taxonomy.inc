<?php
/**
 * @file
 * nesi_cs_team.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nesi_cs_team_taxonomy_default_vocabularies() {
  return array(
    'app_dev_expertise' => array(
      'name' => 'Application Development Expertise',
      'machine_name' => 'app_dev_expertise',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-8',
    ),
    'hpc_architectures' => array(
      'name' => 'HPC Architectures',
      'machine_name' => 'hpc_architectures',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-10',
    ),
    'hpc_software' => array(
      'name' => 'HPC Software & Applications',
      'machine_name' => 'hpc_software',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-7',
    ),
    'interests' => array(
      'name' => 'Interests',
      'machine_name' => 'interests',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-6',
    ),
    'programming_languages' => array(
      'name' => 'Programming Languages',
      'machine_name' => 'programming_languages',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-9',
    ),
    'science_domains' => array(
      'name' => 'Science Domains',
      'machine_name' => 'science_domains',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-5',
    ),
  );
}
