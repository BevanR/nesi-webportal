<?php
/**
 * @file
 * nesi_cs_team.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function nesi_cs_team_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|computation_science_team';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'computation_science_team';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_300x160',
    ),
  );
  $export['user|user|computation_science_team'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function nesi_cs_team_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|computation_science_team';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'computation_science_team';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'ds_user_picture',
        1 => 'name',
        2 => 'profile_researcher_profile',
      ),
      'right' => array(
        3 => 'profile_expertise',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'left',
      'name' => 'left',
      'profile_researcher_profile' => 'left',
      'profile_expertise' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['user|user|computation_science_team'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function nesi_cs_team_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'computation_science_team';
  $ds_view_mode->label = 'Computation Science Team';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['computation_science_team'] = $ds_view_mode;

  return $export;
}
