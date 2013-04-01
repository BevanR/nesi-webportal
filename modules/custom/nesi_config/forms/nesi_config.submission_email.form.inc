<?php
/**
 *
 */ 
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

  $form['#submit'][] = 'nesi_config_proposal_submission_email_submit';
  return system_settings_form($form);
}

/**
 * Custom submit to handle the managed_file fapi element
 * Saves and deletes the files
 */
function nesi_config_proposal_submission_email_submit($form, &$form_state) {

  global $user;

  if(0 != $form_state['values']['submission_attached_pdf']) {
    $fid = $form_state['values']['submission_attached_pdf'];
    $file = file_load($fid);
    if ($file) {
      // Change status to permanent.
      $file->status = FILE_STATUS_PERMANENT;
      file_save($file);
      file_usage_add($file, 'nesi_config', 'user', $user->uid);
    } 
  }
}

