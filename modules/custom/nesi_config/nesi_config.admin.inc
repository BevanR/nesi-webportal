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
  $form['apply']['submission_nesi_admin_email'] = array(
    '#type' => 'textfield',
    '#title' => t('Nesi admin email address.'),
    '#description' => 'Notification of the proposal submission will be sent to this address.',
    '#default_value' => variable_get('submission_nesi_admin_email', 'sam+nesiadmin3@webscope.net.nz'),
    '#size' => 40,
  );
  $form['apply']['submission_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#description' => 'Subject heading for the email.',
    '#default_value' => variable_get('submission_subject', ''),
    '#size' => 40,
  );

  $form['apply']['submission_message'] = array(
    '#type' => 'textarea',
    '#title' => t('Message'),
    '#description' => 'Main message text for the email.',
    '#default_value' => variable_get('submission_message', ''),
    '#size' => 40,
  );

  $form['apply']['submission_attached_pdf'] = array(
    '#title' => 'Access Policy pdf',
    '#type' => 'managed_file',
    '#description' => 'This pdf is automatically attached to the email, sent at the end of a proposal submission.',
    '#default_value' => variable_get('submission_attached_pdf'),
    '#required' => TRUE,
    '#upload_location' => 'public://admin_pdfs',
  );

  $form['#submit'][] = 'nesi_config_admin_submit';
  return $form;
}

/**
 * NOTE: Didn't patch core and seems to be working
 * looks like this patch has been rolled into the latest core.
 * Leaving this note here until testing is over. 
 * (function was ripped from mm)
 *
 * {Need to patch core to get this to work
 * What a load of bollox....
 * http://drupal.org/node/1090198}
 *
 * Custom submit to handle the managed_file fapi element
 * Saves and deletes the files
 */
function nesi_config_admin_submit($form, &$form_state) {

  global $user;
  $save_file = function($fid, $form_id) use($user) {
    $file = file_load($fid);
    if ($file) {
      // Change status to permanent.
      $file->status = FILE_STATUS_PERMANENT;
      file_save($file);
      file_usage_add($file, 'mm_admin', 'user', $user->uid);
      variable_set($form_id, $file->fid);
    } 
  };

  $delete_file = function($fid) {
    $file = file_load($fid);
    if ($file) {
      $success = file_delete($file);
      if(FALSE == $success) {
        drupal_set_message(t('There was a problem deleting the file'), 'error');
      }
    } 
  };

  if(0 != $form_state['values']['submission_attached_pdf']) {
    $fid = $form_state['values']['submission_attach_pdf'];
    $save_file($fid, 'submission_attach_pdf'); 
  }
  elseif(0 == $form_state['values']['submission_attached_pdf']){
    $fid = variable_get('submission_attach_pdf');
    $delete_file($fid); 
  }
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
