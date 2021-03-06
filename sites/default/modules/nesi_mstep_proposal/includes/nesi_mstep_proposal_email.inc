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
function nesi_mstep_proposal_pdf_theme_page() {
  $to = variable_get('submission_nesi_admin_email', 999); 
  //nesi_mstep_proposal_email();
  $the_time = date('l G:i:s A' , time());
  //dsm("The time : $the_time");
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
  $send_email = nesi_mstep_proposal_send_attachment_email($to, $from, $subject, $message, $attachments);
 
  // Watchdog any errors
  if(!$send_email) {
    watchdog('nesi_mstep_proposal', 'Problem sending confirmation email." '.$to , NULL , WATCHDOG_ERROR, $link = NULL);
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
  $send_email = nesi_mstep_proposal_send_attachment_email($to, $from, $subject, $message, $attachments);
  
  // Watchdog any errors
  if(!$send_email) {
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

function nesi_mstep_proposal_send_attachment_email($to, $from, $subject, $message, $attachments = array()) {

  require_once('class.phpmailer.php');

  $mail = new PHPMailer();
  $mail->IsSMTP(); // telling the class to use SMTP
  $mail->Host = "mailhost.auckland.ac.nz"; // SMTP server

  $mail->SetFrom($from, "NeSI");
  $mail->Subject = $subject;
  $mail->MsgHTML(nl2br($message));

  $mail->AddAddress($to, "");

  // Process attachments
  if (!empty($attachments)) {

    foreach($attachments as $attachment) {
      if(empty($attachment['isStringAttachment'])) {
        $mail->AddAttachment($attachment['path']);      // attachment
      }
      else {
        $mail->AddStringAttachment($attachment['data'], $attachment['name']);
      }
    }
  }

  if(!$mail->Send()) {
    //echo "Mailer Error: " . $mail->ErrorInfo;
    $errorMsg = $mail->ErrorInfo;
    return false;
  } 
  else {
    return true;
  }
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

  $map = array();
  if ($form_data->data['proposal-type'] == 'proposal_development_class') {
    $map = _nesi_mstep_proposal_pdc_map();
  }
  if ($form_data->data['proposal-type'] == 'research_proposal_class') {
    $map = _nesi_mstep_proposal_prc_map();
  }
  if ($form_data->data['proposal-type'] == 'proposal_postgrad_class') {
    $map = _nesi_mstep_proposal_pgc_map();
  }

  $output .= _nesi_mstep_proposal_map_proposal_data($map['fields'], $form_data->data['form_data']);  

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

      if(isset($map[$key])) {
        $title = $map[$key];

        // Check if response value is an array, if so reduce selections to string
        $response = '';
        if (is_array($val)) {
          foreach($val as $val_item) {
            if(!empty($val_item)) {
              $response .= $val_item.' ';
            }
          }  
        }
        else {
          $response = $val;
        }

        // Clean line breaks 
        $order   = array("\r\n", "\n", "\r");
        $replace = ' ';
        
        if (!empty($title)) {
          $clean_title = str_replace($order, $replace, $title);
          $clean_val = str_replace($order, $replace, $response);

          $output .= '| '.$clean_title;
          $output .= ' | '.$clean_val;
          $output .= ' | |'."\n";
        }
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

  $title = $form_data->data['form_data']['node-title'];
  if ($proposal_type == 'proposal_development_class') {
    $output = '***Notification of Proposal Development submission to NeSI***'."\n\n\n";
  }
  if ($proposal_type == 'research_proposal_class') {
    $output = '***Notification of Research Proposal submission to NeSI***'."\n\n\n";
  }
  if ($proposal_type == 'proposal_postgrad_class') {
    $output = '***Notification of Postgraduate Proposal submission to NeSI***'."\n\n\n";
  }
 
  $output .= 'Title: '.$title."\n\n\n";

  $output .= "\n\n\n\n Thank you\n\n";
 
  return $output;
}

function _nesi_mstep_proposal_pdc_map() {
  $pdc_map['fields'] = array(
    'node-title' => 'Proposal Title', 
    'field-pdc-start-date' => 'Estimated project start date', 
    'field-pdc-description' => 'Project Description',
    'field-pdc-pi-name' => 'Principal\'s name',
    'field-pdc-pi-email' => 'Principal\'s email',
    'field-pdc-pi-phone' => 'Principal\'s phone',
    'field-pdc-team-access' => 'Project team members requiring access to the NeSI systems',
    'field-pdc-team-experience' => 'Project team\'s HPC experience',
    'field-pdc-proposed-hpc-platform' => 'Desired HPC Platform',
    'field-pdc-software-requirements' => 'Software requirements',
    'field-pdc-storage-requirements' => 'Storage requirements',
    'field-pdc-expert-support' => 'Expert support',
    'field-pdc-additional-information' => 'Further Information',
  );
  
  return $pdc_map;
}

function _nesi_mstep_proposal_prc_map() {

  $prc_map['fields'] = array(
    'node-title' => 'Proposal Title', 
    'field-prc-start-date' => 'Estimated project start date', 
    'field-prc-scientific-goals' => 'Scientific Goals',
    'field-prc-hpc-benefits' => 'Benefits from HPC',
    'field-prc-project-deliverables' => 'Project deliverables',
    'field-prc-funding-provider' => 'Name of peer-reviewed research grant provider',
    'field-prc-grant-title' => 'Title of research grant',
    'field-prc-grant-start-date' => 'Start date of the grant',
    'field-prc-grant-duration' => 'Duration of the grant',
    'field-prc-funding-amount' => 'The amount of funding approved for HPC',
    'field-prc-pi-name' => 'Principal\'s name',
    'field-prc-pi-email' => 'Principal\'s email',
    'field-prc-pi-phone' => 'Principal\'s phone number',
    'field-prc-team-access' => 'Project team members requiring access to the NeSI systems',
    'field-prc-hpc-background' => 'Project team\'s HPC experience',
    'field-prc-estimated-simulations' => 'Estimated number of runs/simulations.', 
    'field-prc-estimated-cpus' => 'Estimated average number of CPUs per run.', 
    'field-prc-estimated-wc-hours' => 'Estimated average length of each run (in wall-clock hours).', 
    'field-prc-allocation-profile' => 'Please provide any additional information on usage requirements.', 
    'field-prc-cpu-hours-intel' => 'CPU core hours required using the Intel cluster', 
    'field-prc-cpu-hours-power6' => 'CPU core hours required using P575/POWER6', 
    'field-prc-cpu-hours-power7' => 'CPU core hours required using P755/POWER7', 
    'field-prc-cpu-hours-bluegene' => 'CPU core hours required using BlueGene/P',
    'field-prc-storage-requirements' => 'Storage requirements',
    'field-prc-software-requirements' => 'Software requirements',
    'field-prc-data-transfer' => 'Data transfer',
    'field-prc-expert-support' => 'Expert support',
    'field-prc-expert-support-notes' => 'Explanatory notes for "Expert support" section',
    'field-prc-additional-information' => 'Further information',
  );
  
  return $prc_map;
}

function _nesi_mstep_proposal_pgc_map() {

  $pgc_map['fields'] = array(
    'node-title' => 'Proposal Title', 
    'field-pgc-start-date' => 'Estimated project start date', 
    'field-pgc-scientific-goals' => 'Scientific Goals',
    'field-pgc-hpc-benefits' => 'Benefits from HPC',
    'field-pgc-project-deliverables' => 'Project deliverables',
    'field-pgc-supervisor-name' => 'Name of supervisor',
    'field-pgc-supervisor-phone' => 'Phone number of supervisor',
    'field-pgc-supervisor-email' => 'Email of supervisor',
    'field-pgc-funding-amount' => 'The amount of funding approved for HPC',
    'field-pgc-pi-name' => 'Principal\'s name',
    'field-pgc-pi-email' => 'Principal\'s email',
    'field-pgc-pi-phone' => 'Principal\'s phone number',
    'field-pgc-team-access' => 'Project team members requiring access to the NeSI systems',
    'field-pgc-hpc-background' => 'Project team\'s HPC experience',
    'field-pgc-estimated-simulations' => 'Estimated number of runs/simulations.', 
    'field-pgc-estimated-cpus' => 'Estimated average number of CPUs per run.', 
    'field-pgc-estimated-wc-hours' => 'Estimated average length of each run (in wall-clock hours).', 
    'field-pgc-allocation-profile' => 'Please provide any additional information on usage requirements.', 
    'field-pgc-cpu-hours-intel' => 'CPU core hours required using the Intel cluster', 
    'field-pgc-cpu-hours-power6' => 'CPU core hours required using P575/POWER6', 
    'field-pgc-cpu-hours-power7' => 'CPU core hours required using P755/POWER7', 
    'field-pgc-cpu-hours-bluegene' => 'CPU core hours required using BlueGene/P',
    'field-pgc-storage-requirements' => 'Storage requirements',
    'field-pgc-software-requirements' => 'Software requirements',
    'field-pgc-data-transfer' => 'Data transfer',
    'field-pgc-expert-support' => 'Expert support',
    'field-pgc-expert-support-notes' => 'Explanatory notes for "Expert support" section',
    'field-pgc-additional-information' => 'Further information',
  );

  return $pgc_map;
}

