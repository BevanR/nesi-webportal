<?php
/**
 * @file
 * nesi_ft_gold_sync.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function nesi_ft_gold_sync_field_default_fields() {
  $fields = array();

  // Exported field: 'node-project-gold_sync'.
  $fields['node-project-gold_sync'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'gold_sync',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '1',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'project',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'gold_sync',
      'label' => 'Synchronised in GOLD',
      'required' => FALSE,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '0',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Synchronised in GOLD');

  return $fields;
}
