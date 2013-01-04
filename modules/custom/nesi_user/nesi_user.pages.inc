<?php

function nesi_user_dashboard_callback() {
  // Dashboard
  // Needs to be switched to a themeable template 
  $view = views_get_view('researcher_my_proposals');
  $view->execute();
  $response = $view->result; 
  
  $in_progress = FALSE;
  if (!empty($response)) {
    // Need to get link to the exact proposal for this user...
    if (!empty($response[0]->nid)) { 
      $in_progress = TRUE;
      $current_proposal = node_load($response[0]->nid);
      $options = array('absolute' => TRUE);
      $nodeurl = url('node/'. $current_proposal->nid, $options);
    }
  }
  if ($in_progress) {
    $output = '
      <h2>Proposals in progress</h2>
      <article class="project-outline">
        <header>
          <h1 class="project-title"><a href="'.$nodeurl.'">'.$current_proposal->title.'</a></h1>
        </header>
        <div class="stats-pane">
          <!--<div class="project-allocation-summary">
            <h3 class="allocation-title">Allocation Summary</h3>
            <p class="date">Allocation begins: 12/10/2012</p>
            <p class="date">Allocation ends: 12/11/2012</p>
          </div>-->
          <div class="allocation-stats">
            <!--<h2 class="project-platform-title">Platform: POWER 7</h2>-->
            <div class="project-progress">
              <small>Progress</small>
              <div style="width: 20%;" class="bar"></div>
            </div>
            <!--<ul class="stats-tabs">
              <li>12 <span>CPUs</span></li>
              <li>7680 <span>CPU hours</span></li>
              <li>80 <span>Wall clock hours</span></li>
            </ul>-->
          </div>
        </div>
      </article>
      <h2>Projects in progress</h2>
      <article class="project-outline">
        <div class="alert alert-info">
          It doesn\'t look like you have any live projects yet. Projects will appear here once an allocation is granted.
        </div>
      </article>
    ';
  }
  else {
    $output = '
      <article role="main">
        <div class="alert alert-info">
          It doesn\'t look like you have any saved or pending proposals yet, get started by creating one.
        </div>
        <div class="module centered-module bordered-module">
          <div>
            <article id="create-proposal">
              <h1>Create a proposal</h1>
              <div class="content">
                <div class="module-actions">
                  <a class="btn btn-large" href="/node/add/proposal-development-class">Development Proposal</a>
                  <a class="btn btn-large" href="/node/add/proposal-research-class">Research Proposal</a>
                  <a class="learn-more" href="/allocations">Learn more about the different proposals</a>
                </div>
              </div>
            </article>
          </div>
        </div>
        <div>
          <section>
            <h2>Apply for access to HPC facilities</h2>
              <article>
                <h3>Development Proposal</h3>
                <p>Easy to request with fast review cycles, open to receiving proposals on an ongoing on demand basis. PIs may request a single computational resource or a combination of resources. 
                <a href="/allocations#proposal-development">Learn more</a></p>
              </article>
              <article>
                <h3>Research Proposal</h3>
                <p>Research allocations often follow successful completion of Proposal Development allocations. A PI must either successfully complete a Proposal Development allocation or be able to demonstrate prior relevant experience and success in running their codes on HPC facilities prior to receiving a Research allocation. Research allocations can be proposed to any public research funding body and for any of our HPC facilities.
                <a href="/allocations#research">Learn more</a></p>
              </article>
          </section>
        </div>
      </article>
      <!--<h2>Projects in progress</h2>
      <article class="project-outline">
        <div class="alert alert-info">
          It doesn\'t look like you have any live projects yet. Projects will appear here once an allocation is granted.
        </div>
      </article>-->
    ';
  }

  return $output;
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

