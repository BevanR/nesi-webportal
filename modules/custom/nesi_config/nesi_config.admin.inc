<?php

/**
 * @file
 * Administration page form fields for the configuration of nesi_config module
 */

function nesi_config_admin_settings() {
  $form['front_stats'] = array(
    '#type'   => 'fieldset',
    '#title'  => t('Front page HPC stats'),
  ); 

  $form['front_stats']['available_cpus'] = array(
    '#type' => 'textfield',
    '#title' => t('Available CPUs'),
    '#default_value' => variable_get('available_cpus', 10),
    '#size' => 10,
    '#description' => t('A text field will be available on these content types to make user-specific notes.'),
  );

  $form['front_stats']['available_ram'] = array(
    '#type' => 'textfield',
    '#title' => t('Available RAM'),
    '#default_value' => variable_get('available_ram', 10),
    '#size' => 10,
    '#description' => t('A text field will be available on these content types to make user-specific notes.'),
  );

  
  return system_settings_form( $form );
}
