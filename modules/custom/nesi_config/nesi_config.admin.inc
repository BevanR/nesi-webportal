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
  //dsm($form);
  //dsm($form_state);
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
    '#markup' => '<div>' . t('Add or remove FAQs to <a href="!apply">the apply page</a> ',
      array('!apply' => url('apply')))
    . '</div>',
  );

  // Because we have many fields with the same values, we have to set
  // #tree to be able to access them.
  $form['#tree'] = TRUE;
  $form['faqs_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('FAQs'),
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
    $faqs_vals = nesi_config_faq($i);
    // yes this is horrible - TODO - tidy up dude
    $question = $faqs_vals['question'][$i];
    $answer   = $faqs_vals['answer'][$i];
    $form['faqs_fieldset']['qs_fieldset_' . $i]['question'][$i] = array(
      '#type' => 'textfield',
      '#title' => t('Question'),
      '#default_value' => $question, 
    );

    $form['faqs_fieldset']['qs_fieldset_' . $i]['answer'][$i] = array(
      '#type' => 'textarea',
      '#title' => t('Answer'),
      //'#cols' => 30,
      //'#size' => 3,
      '#default_value' => $answer,
      //'#default_value' => "some value", 
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

  $num = $form_state['num_faqs']-1;
  dsm("The NUM : $num");
  $q_val   = $form_state['values']['faqs_fieldset']['qs_fieldset_' . $num]['question'];
  $ans_val = $form_state['values']['faqs_fieldset']['qs_fieldset_' . $num]['answer'];
  nesi_config_faq_save($num, array('question' => $q_val , 'answer' => $ans_val));

  $form_state['num_faqs']++;
  nesi_config_var_inc('config_form_step_num');
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for the "remove one" button.
 *
 * Decrements the max counter and causes a form rebuild.
 */
function nesi_config_add_more_remove_one($form, &$form_state) {
  $num = $form_state['num_faqs'];
  nesi_config_faq_del($num);
  if ($form_state['num_faqs'] > 1) {
    $form_state['num_faqs']--;
  }
  nesi_config_var_dec('config_form_step_num');
  $form_state['rebuild'] = TRUE;
}

function nesi_config_faq_save($num, $vals) {

  $faqs = variable_get('nesi_faqs', array(array('question' => '' , 'answer' => '')));
  $faqs[$num] = $vals;
  variable_set('nesi_faqs' , $faqs);
}

function nesi_config_faq_del($num) {
  $faqs = variable_get('nesi_faqs', array(array('question' => '' , 'answer' => '')));
  if(count($faqs) == $num) array_pop($faqs);
  variable_set('nesi_faqs' , $faqs);
}

function nesi_config_faq($num) {
  $faqs = variable_get('nesi_faqs', array('question' => 'No text' , 'answer' => 'No text'));
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
  
}

/**
 * Decrement persistant variable
 */
function nesi_config_var_dec($var_name) {
  $val = variable_get($var_name , 1)-1;
  variable_set($var_name, $val);
}
