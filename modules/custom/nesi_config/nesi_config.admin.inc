<?php

/**
 * @file
 * Administration page form fields for the configuration of nesi_config module
 */

function nesi_config_admin_settings($form, &$form_state) {
  $form['front_stats'] = array(
    '#type'   => 'fieldset',
    '#title'  => t('Front page HPC stats'),
  ); 

  $form['front_stats']['stats_cpu_cores'] = array(
    '#type' => 'textfield',
    '#title' => t('CPU Cores'),
    '#default_value' => variable_get('stats_cpu_cores', 10),
    '#size' => 10,
  );

  $form['front_stats']['stats_memory'] = array(
    '#type' => 'textfield',
    '#title' => t('Memory'),
    '#default_value' => variable_get('stats_memory', 10),
    '#size' => 10,
  );

  $form['front_stats']['stats_peak_speeds'] = array(
    '#type' => 'textfield',
    '#title' => t('Peak Speeds'),
    '#default_value' => variable_get('stats_peak_speeds', 10),
    '#size' => 10,
  );

  $form['front_stats']['stats_disk_storage'] = array(
    '#type' => 'textfield',
    '#title' => t('Disk Storage'),
    '#default_value' => variable_get('stats_disk_storage', 10),
    '#size' => 10,
  );

  $form = nesi_config_add_more($form, $form_state);
  return system_settings_form( $form );
}

/**
 * This example shows a button to "add more" - add another textfield, and
 * the corresponding "remove" button.
 *
 * It works equivalently with javascript or not, and does the same basic steps
 * either way.
 *
 * The basic idea is that we build the form based on the setting of
 * $form_state['num_faqs']. The custom submit functions for the "add-one"
 * and "remove-one" buttons increment and decrement $form_state['num_faqs']
 * and then force a rebuild of the form.
 *
 * The $no_js_use argument is simply for demonstration: When set, it prevents
 * '#ajax' from being set, thus making the example behave as if javascript
 * were disabled in the browser.
 */
function nesi_config_add_more($form, &$form_state, $no_js_use = FALSE) {
  $form['description'] = array(
    '#markup' => '<div>' . t('This example shows an add-more and a remove-last button. The <a href="!ajax">AJAX version</a> does it without page reloads; the <a href="!multistep">non-js version</a> is the same code but simulates a non-javascript environment, showing it with page reloads.',
      array('!ajax' => url('examples/nesi_config/add_more'), '!multistep' => url('examples/ajax_example/add_more_no_js')))
    . '</div>',
  );

  // Because we have many fields with the same values, we have to set
  // #tree to be able to access them.
  $form['#tree'] = TRUE;
  $form['faqs_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('People coming to the picnic'),
    // Set up the wrapper so that AJAX will be able to replace the fieldset.
    '#prefix' => '<div id="faqs-fieldset-wrapper">',
    '#suffix' => '</div>',
  );

  // Build the fieldset with the proper number of names. We'll use
  // $form_state['num_faqs'] to determine the number of textfields to build.
  if (empty($form_state['num_faqs'])) {
    $form_state['num_faqs'] = variable_get('config_form_step_num',1);
  }
  for ($i = 0; $i < $form_state['num_faqs']; $i++) {
    $form['faqs_fieldset']['name'][$i] = array(
      '#type' => 'textfield',
      '#title' => t('Name'),
      '#default_value' => nesi_config_faq($i), 
    );
  }
  $form['faqs_fieldset']['add_faq'] = array(
    '#type' => 'submit',
    '#value' => t('Add one more'),
    '#submit' => array('nesi_config_add_more_add_one'),
    // See the examples in nesi_config.module for more details on the
    // properties of #ajax.
    '#ajax' => array(
      'callback' => 'nesi_config_add_more_callback',
      'wrapper' => 'faqs-fieldset-wrapper',
    ),
  );
  if ($form_state['num_faqs'] > 1) {
    $form['faqs_fieldset']['remove_name'] = array(
      '#type' => 'submit',
      '#value' => t('Remove one'),
      '#submit' => array('nesi_config_add_more_remove_one'),
      '#ajax' => array(
        'callback' => 'nesi_config_add_more_callback',
        'wrapper' => 'faqs-fieldset-wrapper',
      ),
    );
  }
  //$form['submit'] = array(
    //'#type' => 'submit',
    //'#value' => t('Submit'),
  //);

  // This simply allows us to demonstrate no-javascript use without
  // actually turning off javascript in the browser. Removing the #ajax
  // element turns off AJAX behaviors on that element and as a result
  // ajax.js doesn't get loaded.
  // For demonstration only! You don't need this.
  if ($no_js_use) {
    // Remove the #ajax from the above, so ajax.js won't be loaded.
    if (!empty($form['faqs_fieldset']['remove_name']['#ajax'])) {
      unset($form['faqs_fieldset']['remove_name']['#ajax']);
    }
    unset($form['faqs_fieldset']['add_faq']['#ajax']);
  }

  return $form;
}

/**
 * Callback for both ajax-enabled buttons.
 *
 * Selects and returns the fieldset with the names in it.
 */
function nesi_config_add_more_callback($form, $form_state) {
  return $form['faqs_fieldset'];
}

/**
 * Submit handler for the "add-one-more" button.
 *
 * Increments the max counter and causes a rebuild.
 */
function nesi_config_add_more_add_one($form, &$form_state) {
  $form_state['num_faqs']++;
  nesi_config_var_inc('config_form_step_num');
  //dsm($form_state);
  nesi_config_faq_save($form_state['num_faqs'], 'Saving num : ' . $form_state['num_faqs']);
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for the "remove one" button.
 *
 * Decrements the max counter and causes a form rebuild.
 */
function nesi_config_add_more_remove_one($form, &$form_state) {
  if ($form_state['num_faqs'] > 1) {
    $form_state['num_faqs']--;
  }
  //dsm($form_state);
  nesi_config_var_dec('config_form_step_num');
  nesi_config_faq_del();
  $form_state['rebuild'] = TRUE;
}

function nesi_config_faq_save($num, $str) {

  $faqs = variable_get('nesi_faqs', array(''));
  $faqs[] = $str;
  dsm('In save faqs');
  variable_set('nesi_faqs' , $faqs);
}

function nesi_config_faq_del() {
  $faqs = variable_get('nesi_faqs', array(''));
  array_pop($faqs);
  variable_set('nesi_faqs' , $faqs);
}

function nesi_config_faq($num) {
  $faqs = variable_get('nesi_faqs', array('in nesi_config_fag'));
  return $faqs[$num];
}

/**
 * Final submit handler.
 *
 * Reports what values were finally set.
 */
function nesi_config_add_more_submit($form, &$form_state) {
  $output = t('These people are coming to the picnic: @names',
    array('@names' => implode(', ', $form_state['values']['faqs_fieldset']['name'])) );
  drupal_set_message($output);
}
/**
 * @} End of "defgroup ajax_degradation_example".
 */

/**
 * Increment persistant variable
 */
function nesi_config_var_inc($var_name) {

  $val = variable_get($var_name , 1)+1;
  variable_set($var_name, $val);
  
  dsm("Inc : $val");
}

/**
 * Decrement persistant variable
 */
function nesi_config_var_dec($var_name) {
  $val = variable_get($var_name , 1)-1;
  variable_set($var_name, $val);
  dsm("Dec : $val");
}
