<?php

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
