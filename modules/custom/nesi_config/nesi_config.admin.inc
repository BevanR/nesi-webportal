<?php

/**
 * @file
 * Administration page form fields for the configuration of nesi_config module
 */

function nesi_config_admin_settings() {
  $form['available_cpus'] = array(
    '#type' => 'textfield',
    '#title' => t('Available CPUs'),
    #'#default_value' => variable_get('annotate_node_types', array('page')),
    '#description' => t('A text field will be available on these content types to make user-specific notes.'),
  );
  $form['#submit'][] = 'nesi_config_admin_settings';

  return system_settings_form( $form );
}
