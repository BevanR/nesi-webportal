<?php
/**
 * Front stats fieldset
 */
function nesi_config_front_stats($form) {

  $form['front_stats'] = array(
    '#type'   => 'fieldset',
    '#title'  => t('Front page HPC stats'),
  ); 

  $form['front_stats']['stats_cpu_cores'] = array(
    '#type' => 'textfield',
    '#title' => t('CPU Cores'),
    '#default_value' => variable_get('stats_cpu_cores', 10),
    '#size' => 10,
  );

  $form['front_stats']['stats_memory'] = array(
    '#type' => 'textfield',
    '#title' => t('Memory'),
    '#default_value' => variable_get('stats_memory', 10),
    '#size' => 10,
  );

  $form['front_stats']['stats_peak_speeds'] = array(
    '#type' => 'textfield',
    '#title' => t('Peak Speeds'),
    '#default_value' => variable_get('stats_peak_speeds', 10),
    '#size' => 10,
  );

  $form['front_stats']['stats_disk_storage'] = array(
    '#type' => 'textfield',
    '#title' => t('Disk Storage'),
    '#default_value' => variable_get('stats_disk_storage', 10),
    '#size' => 10,
  );

  return system_settings_form($form);
}
