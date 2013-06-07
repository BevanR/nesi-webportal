<?php
/**
 * @file
 * nesi_cs_team.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function nesi_cs_team_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Power 7',
    'description' => '',
    'format' => '2',
    'weight' => '2',
    'uuid' => '3ea724da-1fc7-4d81-aed7-aa3b77d35968',
    'vocabulary_machine_name' => 'hpc_architectures',
  );
  $terms[] = array(
    'name' => 'Power 6',
    'description' => '',
    'format' => '2',
    'weight' => '1',
    'uuid' => '5823e471-c8bb-4d6d-b3c7-81e17ca21f89',
    'vocabulary_machine_name' => 'hpc_architectures',
  );
  $terms[] = array(
    'name' => 'BlueGeneP',
    'description' => '',
    'format' => '2',
    'weight' => '3',
    'uuid' => '6b171a54-f97c-48c8-a314-39c2251f266f',
    'vocabulary_machine_name' => 'hpc_architectures',
  );
  $terms[] = array(
    'name' => 'Intel',
    'description' => '',
    'format' => '2',
    'weight' => '0',
    'uuid' => 'ffdec1ef-6452-4525-982a-e804f51b1104',
    'vocabulary_machine_name' => 'hpc_architectures',
  );
  return $terms;
}
