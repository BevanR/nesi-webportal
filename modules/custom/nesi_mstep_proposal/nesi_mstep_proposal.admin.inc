<?php

/**
 * @file
 * Administration configuration form for multi step configuration
 */

function nesi_mstep_proposal_admin_settings() {

  /* Config options */

  $form['nesi_mstep_proposal']['destination_email'] = array(
    '#type' => 'textfield',
    '#title' => t('Destination email address for proposals'),
    '#default_value' => variable_get('nesi_proposal_destination_email', ''),
    '#size' => 60,
  );

  return system_settings_form( $form );
}

