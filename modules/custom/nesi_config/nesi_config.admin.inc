<?php

/**
 * @file
 * Administration page form fields for the configuration of nesi_config module
 */

include_once 'forms/nesi_config.faq_form.inc';


function nesi_config_admin_settings($form, &$form_state) {
  $form = nesi_config_proposal_submission_email($form);
  $form = nesi_config_front_stats($form);
  $form = nesi_config_add_more($form, $form_state);

  return system_settings_form( $form );
}

/**
 * Configuration for email that get sent on submission
 */
function nesi_config_proposal_submission_email($form) {

  $form['apply'] = array(
    '#type'   => 'fieldset',
    '#title'  => t('Proposal submission email'),
  ); 
  $form['apply']['destination_email'] = array(
    '#type' => 'textfield',
    '#title' => t('Nesi admin email address. Notification of submission will be sent to this address'),
    '#default_value' => variable_get('destination_email', ''),
    '#size' => 40,
  );
  $form['apply']['submission_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#default_value' => variable_get('submission_subject', ''),
    '#size' => 40,
  );

  $form['apply']['submission_message'] = array(
    '#type' => 'textarea',
    '#title' => t('Message'),
    '#default_value' => variable_get('submission_message', ''),
    '#size' => 40,
  );
  $form['apply']['submission_file_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Path to Access Policy pdf file'),
    '#default_value' => variable_get('submission_file_path', ''),
    '#size' => 40,
  );

  return $form;
}

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

  return $form;
}
