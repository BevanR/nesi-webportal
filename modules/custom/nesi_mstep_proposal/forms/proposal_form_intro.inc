<?php

function nesi_mstep_proposal_intro_form() {

  $form['introduction'] = array(
    '#markup' => '<h2>Application Process</h2>
                  <p>To create a proposal, you will need:</p>
                  <ul>
                    <li>Cutting board</li>
                    <li>Ingredients</li>
                    <li>Microwave oven</li>
                  </ul>',
  );

  $form['prelim'] = array(
    '#markup' => '<h2>Let\'s get started</h2>',
  );

  $form['submitter']['#type'] = 'fieldset';
  $form['submitter']['#title'] = 'Your Contact Information';
  $form['submitter']['sub_check']['#title'] = 'I am the Principal Investigator for this project';
  $form['submitter']['sub_check']['#type'] = 'checkbox';
  $form['submitter']['sub_check']['#default_value'] = 1;
  $form['submitter']['sub_name']['#title'] = 'Contact Name';
  $form['submitter']['sub_name']['#type'] = 'textfield';
  $form['submitter']['sub_name']['#required'] = TRUE;
  $form['submitter']['sub_email']['#title'] = 'Contact Email';
  $form['submitter']['sub_email']['#type'] = 'textfield';
  $form['submitter']['sub_email']['#required'] = TRUE;
  $form['submitter']['sub_phone']['#title'] = 'Contact Phone';
  $form['submitter']['sub_phone']['#type'] = 'textfield';
  $form['submitter']['sub_phone']['#required'] = TRUE;

  $form['proposal-type'] = array(
    '#type' => 'radios',
    '#title' => t('Proposal Type'),
    '#description' => t('Please indicate the type of proposal for this application'),
    '#options' => nesi_mstep_proposal_class_types(),
    '#default_value' => '',
    '#required' => TRUE,
  ); 

  return $form; 
}
  
