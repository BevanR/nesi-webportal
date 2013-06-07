<?php
/**
 * @file
 * nesi_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nesi_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_profile2__researcher_profile';
  $strongarm->value = array(
    'view_modes' => array(
      'account' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_profile2__researcher_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_body';
  $strongarm->value = '[user:name],

A site administrator at [site:name] has created an account for you. You may now log in to [site:login-url] by clicking on this link or copying and pasting it in your browser

[user:one-time-login-url]

This is a one-time login, so it can be used only once.

After logging in, you will be redirected to [user:edit-url] so you can change your password.

Your username is: [user:name]

--  [site:name] team';
  $export['user_mail_register_admin_created_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_body';
  $strongarm->value = '[user:name],

Thank you for registering at [site:name].  Your username is: [user:name]

If you ever forget your password you can recover it at [site:url]user/password

--  [site:name] team';
  $export['user_mail_register_no_approval_required_body'] = $strongarm;

  return $export;
}
