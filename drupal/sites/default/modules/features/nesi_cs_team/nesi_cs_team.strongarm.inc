<?php
/**
 * @file
 * nesi_cs_team.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nesi_cs_team_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'computation_science_team' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'mimemail' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'computation_science_team' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'summary' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'computation_science_team' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'profile_researcher_profile' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'computation_science_team' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'profile_expertise' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'computation_science_team' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '300x300';
  $export['user_picture_dimensions'] = $strongarm;

  return $export;
}
