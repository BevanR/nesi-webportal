<?php

function nesi_user_dashboard_callback() {
  // Dashboard
  // Needs to be switched to a themeable template 

  $output = '';

  // Submit a proposal button
  $output .= l('Submit a proposal', 'apply/nojs/create-proposal', array('attributes' => array('id' => 'submit-proposal', 'class' => 'btn')));

  // Activity section
  $output .= '
    <h2>Activity</h2>
    <div class="module" id="dashboard-activity">
      <div id="dashboard-projects"><strong>X</strong> Projects submitted</div>
      <div id="dashboard-active-members"><strong>XX</strong> active members from your institution</div>
      <div id="dashboard-cpu-hours"><strong>X,XXX</strong> CPU hours used</div>
    </div>
  ';

  $view = views_get_view('researcher_my_proposals');
  $view->execute();
  $response = $view->result; 
  
  $in_progress = FALSE;
  if (!empty($response)) {
    $output .= '<h2>Submitted Proposals</h2>';
    $output .= '<div class="module">';
      $output .= '<div class="module-inner">';
      // Display all proposals
      foreach ($response as $item) {
        // Need to get link to the exact proposal for this user...
        if (!empty($item->nid)) { 
          $in_progress = TRUE;
          $current_proposal = node_load($item->nid);
          dpm($current_proposal);
          $options = array('absolute' => TRUE);
          $nodeurl = url('node/'. $current_proposal->nid, $options);
  
          $proposal_state = 'Draft';
          $is_flagged = FALSE;
          // Get status for display
          if (($current_proposal->type == 'proposal_development_class') || ($current_proposal->type == 'proposal_research_class')) {
            $flag = flag_get_flag('p_submit_proposal');
        
            if ($flag->is_flagged($current_proposal->nid)) {
              $proposal_state = 'Pending';
              $is_flagged = TRUE;
            }
          }
  
          $proposal_operations = '';
          $access = node_access('update', $current_proposal);
          if ($access) {
            $proposal_operations = '<a href="'.$base_url.'/node/'.$current_proposal->nid.'/edit" class="btn">Edit</a>';
            if (!$is_flagged) {
              $temp_link = flag_create_link('p_submit_proposal', $current_proposal->nid);
              $proposal_operations .= $temp_link;
            }
          }
  
          $proposal_platform = '';
          if ($current_proposal->type == 'proposal_development_class') {
            $proposal_platform = $current_proposal->field_pdc_proposed_hpc_platform['und'][0]['value'];
          }
          elseif ($current_proposal->type == 'proposal_research_class') {
            $proposal_platform = $current_proposal->field_prc_proposed_hpc_platform['und'][0]['value'];
          }

          $proposal_start_date = '';
          if ($current_proposal->type == 'proposal_development_class') {
            $proposal_start_date = $current_proposal->field_pdc_start_date['und'][0]['value'];
          }
          elseif ($current_proposal->type == 'proposal_research_class') {
            $proposal_start_date = $current_proposal->field_prc_start_date['und'][0]['value'];
          }
  
          $proposal_variables = array(
            'proposal_title' => $current_proposal->title,
            'proposal_link' => $nodeurl,
            'proposal_state' => $proposal_state,
            'proposal_operations' => $proposal_operations,
            'proposal_type' => $current_proposal->type,
            'proposal_platform' => $proposal_platform,
            'proposal_start_date' => $proposal_start_date,
            'proposal_cpu_hours' => $current_proposal->field_prc_cpu_core_hours['und'][0]['value'],
          );
  
          $output .= theme('nesi_user_dashboard_proposals', $proposal_variables);
        }
      }
      $output .= '</div>';
    $output .= '</div>';
  }

  // Show message if no proposals
  if (!$in_progress) {
    drupal_set_message(t('It doesn\'t look like you have any saved or pending proposals yet, get started by creating one.'), 'info');
  }

  // Show create options
  //$create_variables = array();
  //$output .= theme('nesi_user_dashboard_create_proposal', $create_variables);

  return $output;
}

function nesi_user_dashboard_name_callback() {
  global $user;
  $uid = user_load($user->uid);
  $profile = profile2_load_by_user($uid, 'researcher_profile');
  return 'Dashboard - ' . $profile->field_user_firstname['und'][0]['safe_value'] . ' ' . $profile->field_user_lastname['und'][0]['safe_value'];
}

function nesi_user_tuakiri_vho_callback() {

  $output = '
    <article class="modal-message" role="main">
      <header>
        <h1>Thanks, your request has been sent.</h1>
      </header>
      <p>Thanks for applying for an account to access our services. We will process your application and be in touch within 48 hours. </p>
    </article>';

  return $output;
}

function nesi_user_tuakiri_tab_callback() {
  global $base_url;
  $asset_path = drupal_get_path('theme', variable_get('theme_default', NULL));
  $output = '<article class="modal-message" role="main">

		<h1><img alt="Tuakiri Logo" src="/'.$asset_path.'/assets/img/tuakiri.png"> &nbsp;</h1>
    <div class="tuakiri">
      <p>Tuakiri enables students, academics, alumni and researchers to get secure and seamless access to their computing resources and collaboration environments using one set of credentials granted by their home organisation.</p>
      <p><a class="btn btn-primary" href="'.shib_auth_generate_login_url().'">Login with Tuakiri</a></p>
    </div>
    <p>Dont have a Tuakiri account,
      <a href="#collapseOne" data-parent="#accordion2" data-toggle="collapse" class="accordion-toggle">apply for access</a>
    </p>

    <div id="collapseOne" class="accordion-body collapse">
      <div class="accordion-inner">
        <div id="login-application-form">
          <form accept-charset="UTF-8" id="user-register-form" method="post" action="/user/register" enctype="multipart/form-data" class="user-info-from-cookie user-info-from-cookie-processed">
            <fieldset id="edit-profile-researcher-profile" class="form-wrapper">
            <legend><span class="fieldset-legend">Request Tuakiri VHO account</span></legend>
            <div class="fieldset-wrapper">
              <div id="edit-profile-researcher-profile-field-user-firstname" class="field-type-text field-name-field-user-firstname field-widget-text-textfield form-wrapper">
                <div id="profile-researcher-profile-field-user-firstname-add-more-wrapper">
                  <div class="control-group form-type-textfield form-item-profile-researcher-profile-field-user-firstname-und-0-value form-item">
                      <label class="control-label" for="edit-profile-researcher-profile-field-user-firstname-und-0-value">First Name <span title="This field is required." class="form-required">*</span></label>
                    <div class="controls">
                      <input type="text" maxlength="255" size="60" value="" name="profile_researcher_profile[field_user_firstname][und][0][value]" id="edit-profile-researcher-profile-field-user-firstname-und-0-value" class="text-full form-text required">
                    </div>
                  </div>
                </div>
              </div>

              <div id="edit-profile-researcher-profile-field-user-lastname" class="field-type-text field-name-field-user-lastname field-widget-text-textfield form-wrapper">
                <div id="profile-researcher-profile-field-user-lastname-add-more-wrapper">
                  <div class="control-group form-type-textfield form-item-profile-researcher-profile-field-user-lastname-und-0-value form-item">
                      <label class="control-label" for="edit-profile-researcher-profile-field-user-lastname-und-0-value">Last Name <span title="This field is required." class="form-required">*</span></label>
                    <div class="controls">
                      <input type="text" maxlength="255" size="60" value="" name="profile_researcher_profile[field_user_lastname][und][0][value]" id="edit-profile-researcher-profile-field-user-lastname-und-0-value" class="text-full form-text required">
                    </div>
                  </div>
                </div>
              </div>

              <div id="edit-profile-researcher-profile-field-user-institution" class="field-type-text field-name-field-user-institution field-widget-text-textfield form-wrapper">
                <div id="profile-researcher-profile-field-user-institution-add-more-wrapper">
                  <div class="control-group form-type-textfield form-item-profile-researcher-profile-field-user-institution-und-0-value form-item">
                      <label class="control-label" for="edit-profile-researcher-profile-field-user-institution-und-0-value">Institution <span title="This field is required." class="form-required">*</span></label>
                    <div class="controls">
                      <input type="text" maxlength="255" size="60" value="" name="profile_researcher_profile[field_user_institution][und][0][value]" id="edit-profile-researcher-profile-field-user-institution-und-0-value" class="text-full form-text required">
                    </div>
                  </div>
                </div>
              </div>

              <div id="edit-profile-researcher-profile-field-user-affiliation" class="field-type-text field-name-field-user-affiliation field-widget-text-textfield form-wrapper">
                <div id="profile-researcher-profile-field-user-affiliation-add-more-wrapper">
                <div class="control-group form-type-textfield form-item-profile-researcher-profile-field-user-affiliation-und-0-value form-item">
                      <label class="control-label" for="edit-profile-researcher-profile-field-user-affiliation-und-0-value">Affilition (student? staff?) <span title="This field is required." class="form-required">*</span></label>
                    <div class="controls">
                      <input type="text" maxlength="255" size="60" value="" name="profile_researcher_profile[field_user_affiliation][und][0][value]" id="edit-profile-researcher-profile-field-user-affiliation-und-0-value" class="text-full form-text required">
                    </div>
                  </div>
                </div>
              </div>

              <div id="edit-profile-researcher-profile-field-user-phone" class="field-type-text field-name-field-user-phone field-widget-text-textfield form-wrapper">
                <div id="profile-researcher-profile-field-user-phone-add-more-wrapper">
                <div class="control-group form-type-textfield form-item-profile-researcher-profile-field-user-phone-und-0-value form-item">
                      <label class="control-label" for="edit-profile-researcher-profile-field-user-phone-und-0-value">Contact Phone <span title="This field is required." class="form-required">*</span></label>
                    <div class="controls">
                      <input type="text" maxlength="255" size="60" value="" name="profile_researcher_profile[field_user_phone][und][0][value]" id="edit-profile-researcher-profile-field-user-phone-und-0-value" class="text-full form-text required">
                    </div>
                  </div>
                </div>
              </div>

              <div id="edit-profile-researcher-profile-field-user-altemail" class="field-type-text field-name-field-user-altemail field-widget-text-textfield form-wrapper">
                <div id="profile-researcher-profile-field-user-altemail-add-more-wrapper">
                <div class="control-group form-type-textfield form-item-profile-researcher-profile-field-user-altemail-und-0-value form-item">
                      <label class="control-label" for="edit-profile-researcher-profile-field-user-altemail-und-0-value">Contact Email </label>
                    <div class="controls">
                      <input type="text" maxlength="255" size="60" value="" name="profile_researcher_profile[field_user_altemail][und][0][value]" id="edit-profile-researcher-profile-field-user-altemail-und-0-value" class="text-full form-text">
                    </div>
                  </div>
                </div>
              </div>

            </fieldset>
            <a type="" value="Request Account" name="op" id="edit-submit" class="btn btn-primary form-submit" href="'.$base_url.'/user/tuakiri/vho-request">Request Account</a>
              </form></div>
          
        </div>
      </div>
    </article>';

  return $output;
}

