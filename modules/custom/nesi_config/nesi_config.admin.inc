<?php

/**
 * @file
 * Administration page form fields for the configuration of nesi_config module
 */

include_once 'forms/nesi_config.faq_form.inc';


function nesi_config_admin_settings($form, &$form_state) {

  $form['apply'] = array(
    '#type'   => 'fieldset',
    '#title'  => t('Admin email address for multistep form'),
  ); 

  $form['apply']['destination_email'] = array(
    '#type' => 'textfield',
    '#title' => t('Destination email address for proposals'),
    '#default_value' => variable_get('destination_email', ''),
    '#size' => 60,
  );

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

  $form = nesi_config_add_more($form, $form_state);
  //dsm($form);
  //dsm($form_state);
  return system_settings_form( $form );
}


