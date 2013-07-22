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
  $form = nesi_config_manage_open_calls($form);

  return system_settings_form( $form );
}


function nesi_config_manage_open_calls($form) {
/*
  $form['calls']['nesi_call_prc_status'] = array(
    '#title' => t('Enable NeSI Research Proposal submissions).'),
    '#type' => 'checkbox',
    '#default_value' => variable_get( 'nesi_call_prc_status', '0' ), // 1 = enabled
  );
*/
  return $form;
}





