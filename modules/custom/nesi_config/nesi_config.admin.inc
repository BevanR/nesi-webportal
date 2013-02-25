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

  $form['front_stats']['cpu_cores'] = array(
    '#type' => 'textfield',
    '#title' => t('CPU Cores'),
    '#default_value' => variable_get('stats_cpu_cores', 10),
    '#size' => 10,
  );

  $form['front_stats']['memory'] = array(
    '#type' => 'textfield',
    '#title' => t('Memory'),
    '#default_value' => variable_get('stats_memory', 10),
    '#size' => 10,
  );

  $form['front_stats']['peak_speeds'] = array(
    '#type' => 'textfield',
    '#title' => t('Peak Speeds'),
    '#default_value' => variable_get('stats_peak_speeds', 10),
    '#size' => 10,
  );

  $form['front_stats']['disk_storage'] = array(
    '#type' => 'textfield',
    '#title' => t('Disk Storage'),
    '#default_value' => variable_get('stats_disk_storage', 10),
    '#size' => 10,
  );
  return system_settings_form( $form );
}
