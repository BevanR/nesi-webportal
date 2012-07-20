<?php

/**
 * @file
 * Administration page form fields for the configuration of nesi_rest module
 */

function nesi_rest_admin_settings() {

  $form['nesi_rest']['nesi_rest_interface_status'] = array(
    '#title' => t('Enable NeSI REST connectivity (Uncheck to block calls to REST api for testing).'),
    '#type' => 'checkbox',
    '#default_value' => variable_get( 'nesi_rest_interface_status', '1' ), // 1 = enabled
  );

  $form['nesi_rest']['nesi_rest_base_url'] = array(
    '#title' => t('NeSI REST interface base URL (include full url http://&lt;url&gt; - no trailing slash!)'),
    '#type' => 'textfield',
    '#default_value' => variable_get( 'nesi_rest_base_url', 'http://gold.nesi.org.nz:8080/goldwrap/rest/goldwrap' ),
    '#size' => 80,
    '#maxlength' => 255,
  );

  /*$form['nesi_rest']['nesi_rest_base_port'] = array(
    '#title' => t('NeSI REST interface port'),
    '#type' => 'textfield',
    '#default_value' => variable_get( 'nesi_rest_base_port', '8080' ),
    '#size' => 10,
    '#maxlength' => 10,
  );*/

  return system_settings_form( $form );
}
