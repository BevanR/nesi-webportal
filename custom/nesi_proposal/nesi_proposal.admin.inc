<?php

/**
 * @file
 * Administration page callbacks for the nesi_proposal module
 */

function nesi_proposal_admin_settings() {

  $form['nesi_proposal']['nesi_proposal_folders'] = array(
    '#title' => t('Folders'),
    '#type' => 'textarea',
    '#default_value' => variable_get( 'nesi_proposal_folders', NULL ),
    '#cols' => 30,
    '#rows' => 10,
  );

  return system_settings_form( $form );
}
