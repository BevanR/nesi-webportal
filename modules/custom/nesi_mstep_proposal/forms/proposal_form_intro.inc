<?php

function nesi_mstep_proposal_intro_form() {

/*
  $form['introduction'] = array(
    '#markup' => '<h2>Application Process</h2>
                  <p>To create a proposal, you will need:</p>
                  <ul>
                    <li>Cutting board</li>
                    <li>Ingredients</li>
                    <li>Microwave oven</li>
                  </ul>',
  );
*/

  $form['prelim'] = array(
    '#markup' => '<h2>Completing your application</h2>',
  );

/*
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
*/

  $form['intro-text']['#type'] = 'fieldset';
  $form['intro-text']['read_prefix'] = array(
    '#markup' => '<div><h3 class="num">1.</h3>'
  );
  $form['intro-text']['read'] = array(
    '#markup' => '<h3>Read our <a href="#">Frequently Asked Questions</a> below and <a href="#">Access policy</a>.</h3>
                  <p>Once you fill in your email address and click NEXT the access Policy will be sent to you. <a href="#">Read online here</a></p>
                  </div>'
  );
  $form['intro-text']['decide_prefix'] = array(
    '#markup' => '<div><h3 class="num">2.</h3>'
  );
  $form['intro-text']['decide'] = array(
    '#markup' => '<h3>Decide which Allocation you\'re applying for.</h3>
                  <p>Hover over title for more information</p>
                  <p><a href="#">Development:</a> Vivamus et turpis vel urna auctor auctor ut sed massa. Nullam tristique neque at diam porttitor vitae malesuada dolor eleifend.</p>
                  <p><a href="#">Research:</a> Vivamus et turpis vel urna auctor auctor ut sed massa. Nullam tristique neque at diam porttitor vitae malesuada dolor eleifend.</p>
                  </div>'
  );
  $form['intro-text']['complete_prefix'] = array(
    '#markup' => '<div><h3 class="num">3.</h3>'
  );
  $form['intro-text']['complete'] = array(
    '#markup' => '<h3>Fill in proposal application form online.</h3>
                  <p>All submissions will receive a confirmation email.</p>
                  </div>'
  );
  $form['intro-text']['review_prefix'] = array(
    '#markup' => '<div><h3 class="num">4.</h3>'
  );
  $form['intro-text']['review'] = array(
    '#markup' => '<h3>Your proposal will be reviewed.</h3>
                  <p>A member of UoA will be in contact to discuss next steps. If you have any questions in the meantime please use our support form at <url>.</p>
                  </div>'
  );

  $form['intro-form']['#type'] = 'fieldset';
  $form['intro-form']['proposal-type'] = array(
    '#type' => 'radios',
    '#title' => t('Proposal Type'),
    '#description' => t('Please indicate the type of proposal for this application'),
    '#options' => nesi_mstep_proposal_class_types(),
    '#default_value' => '',
    '#required' => TRUE,
  );

  return $form;
}