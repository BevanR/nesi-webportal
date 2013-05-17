<?php
/**
 * Emails need to be sent at the end of the mstep form.
 * An external email lib is being used and not the Drupal api.
 * External libs to be found in includes/attachement_emaig
 *
 * @file nesi_mstep_proposal_email.inc
 */

/**
 * Testing page to call email function when building
 *
 * The menu hook testing item can be commented out
 * when development is finished
 *
 * apply/email-testing
 */
function nesi_mstep_proposal_email_test_page() {
  $to = variable_get('submission_nesi_admin_email', 999); 
  //nesi_mstep_proposal_email();
  $the_time = date('l G:i:s A' , time());
  dsm("The time : $the_time");
  //nesi_mstep_admin_email($to);
  //nesi_mstep_proposal_pdf_attachement($nid = 121);
  //nesi_mstep_proposal_data();
  $nid = 125;
  nesi_mstep_proposal_email($to = 'sam+nesitesting@webscope.co.nz',$nid);
  return "Email testing page";
}

/**
 * Sends email to the applicant on completion of the
 * multi step form.
 *
 * Using third party lib to send emails with attachments
 */
function nesi_mstep_proposal_email($to = 'sam+nesitesting@webscope.co.nz',$nid) {

  // Notify submitter via email
  include_once 'attachment_email/attachment_email.php';

  // These are set in the website config admin page
  $from    = variable_get('submission_nesi_admin_email', '');
  $subject = variable_get('submission_subject', '');
  $message = variable_get('submission_message', '');
  $fid     = variable_get('submission_attached_pdf', 999); 

  $file = file_load($fid);
  // Needs to be some testing around this
  if(FALSE === $file) {
    drupal_set_message(t('A copy of the Access Policy was not attached to the email, please contact support'), 'warning');
    watchdog('nesi_mstep_proposal', 'There are no attachments going out on emails. There maybe no Access Policy PDF uploaded to the nesi config admin page' , NULL , WATCHDOG_ERROR);

    $attachments[] = array() ;
  } 
  else {
    $attachment = array(
      'name' => $file->filename, 
      'path' => drupal_realpath($file->uri), 
      'type' => file_get_mimetype($file->uri), 
    );
    $attachments[] = $attachment;
    $attachments[] = nesi_mstep_proposal_pdf_attachement($nid);
  }
 
  //Send Email!
  $email = new AttachmentEmail($to, $from, $subject, $message, $attachments);
 
  // Watchdog any errors
  if(!$email->send()) {
    watchdog('nesi_mstep_proposal', 'Problem sending confirmation email." '.$to.' .Debug message ' . $email->errorMsg , NULL , WATCHDOG_ERROR, $link = NULL);
  } 
  else {
    watchdog('nesi_mstep_proposal', 'Confirmation email sent - " '.$to.' " ', NULL , WATCHDOG_INFO, $link = NULL);
  }
}

/**
 * Sends notification to Nesi admin that a new proposal
 * has been submitted
 */
function nesi_mstep_admin_email($to = 'sam+nesitesting@webscope.co.nz', $node_id, $form_data = NULL) {
  
  global $base_url;
  // Notify submitter via email
  include_once 'includes/attachment_email/attachment_email.php';
  $proposal_url = $base_url . '/node/' . $node_id;
  // These are set in the website config admin page
  $from    = 'support@nesi.org.nz';
  $subject = 'A new proposal has been submitted'; 
  $message = 'View the submission <a href="' . $proposal_url . '">here</a>.'."\n\n\n"; 

  $message .= _nesi_mstep_proposal_generate_email_body($form_data); 

  // Generate attachments
  $attachments[] = _nesi_mstep_proposal_generate_submission_file($form_data); 
  $attachments[] = nesi_mstep_proposal_pdf_attachement($node_id); 

   //Send Email!
  $email = new AttachmentEmail($to, $from, $subject, $message, $attachments);
  
  // Watchdog any errors
  if(!$email->send()) {
    watchdog('nesi_mstep_proposal', 'Problem sending confirmation email - " '.$to.' " ', NULL , WATCHDOG_WARNING, $link = NULL);
  } 
  else {
    watchdog('nesi_mstep_proposal', 'Confirmation email sent - " '.$to.' " ', NULL , WATCHDOG_INFO, $link = NULL);
  } 
}

/**
 *
 */
function nesi_mstep_proposal_pdf_attachement($nid) {
  // For testing
  //$nid = 121;
  $file = nesi_mstep_generate_proposal_pdf($nid);
  $attachment = array(
    'name' => $file->filename, 
    'path' => drupal_realpath($file->uri), 
    'type' => file_get_mimetype($file->uri), 
  );
  return $attachment; 
}

/**
 * Include attachment file to be sent to administrator
 */
function _nesi_mstep_proposal_generate_submission_file($form_data) {

  $attachment_filename = 'submission.txt';

  // File content header
  $header = '|| Field || Value || Comments ||'."\n"; 

  // Proposal
  $output = '';
  $output .= $header;

  if ($form_data->data['proposal-type'] == 'proposal_development_class') {
    $map = _nesi_mstep_proposal_pdc_map();
  }
  else {
    $map = _nesi_mstep_proposal_prc_map();
  }

  $output .= _nesi_mstep_proposal_map_proposal_data($map['p1'], $form_data->data['p1']);  

  if ($form_data->data['proposal-type'] == 'research_proposal_class') {
    // Get additional response information   
    $output .= _nesi_mstep_proposal_map_proposal_data($map['p2'], $form_data->data['p2']);  
    $output .= _nesi_mstep_proposal_map_proposal_data($map['p3'], $form_data->data['p3']);  
  }

  return array(
    'name' => $attachment_filename,
    'data' => $output,
    'isStringAttachment' => TRUE,
  );
}

/**
 * Maps proposal data into separator format
 */
function _nesi_mstep_proposal_map_proposal_data($map = array(), $data = NULL) {
  
  $output = '';
  if (!empty($data)) {
    foreach($data as $key=>$val) {
      $title = $map[$key];

      // Clean line breaks 
      $order   = array("\r\n", "\n", "\r");
      $replace = ' ';
      
      if (!empty($title)) {

        $clean_title = str_replace($order, $replace, $title);
        $clean_val = str_replace($order, $replace, $val);

        $output .= '| '.$clean_title;
        $output .= ' | '.$clean_val;
        $output .= ' | |'."\n";
      }
    }
  }

  return $output;
}

/**
 * Include proposal data in body of admin email
 */
function _nesi_mstep_proposal_generate_email_body($form_data) {

  $output = '';

  $proposal_type = $form_data->data['proposal-type'];

  $title = '';
  if ($proposal_type == 'proposal_development_class') {
    $title = $form_data->data['p1']['pdc-title'];
    $output = '***Notification of Proposal Development submission to NeSI***'."\n\n\n";
  }
  
  if ($proposal_type == 'research_proposal_class') {
    $title = $form_data->data['p1']['prc-title'];
    $output = '***Notification of Research Proposal submission to NeSI***'."\n\n\n";
  }
 
  $output .= 'Title: '.$title."\n\n\n";

  $output .= "\n\n\n\n Thank you\n\n";
 
  return $output;
}


