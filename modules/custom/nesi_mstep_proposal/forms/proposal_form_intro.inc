<?php

function nesi_mstep_proposal_intro_form() {

  $form['prelim'] = array(
    '#markup' => '<h2>Completing your application</h2>',
  );

  $form['intro-text']['#type'] = 'fieldset';
  $form['intro-text']['read'] = array(
    '#markup' => '<div class="intro-text-1">
                    <h3 class="num">1.</h3>
                    <h3>Read our <a href="#block-nesi-config-nesi-faq">Frequently Asked Questions</a> below and <a href="/access-policy">Access policy</a>.</h3>
                    <p>Once you fill in your email address and click START the access Policy will be sent to you. <a href="/access-policy">Read online here</a></p>
                  </div>'
  );
  $form['intro-text']['decide'] = array(
    '#markup' => '<div class="intro-text-2">
                    <h3 class="num">2.</h3>
                    <h3>Decide which Allocation you\'re applying for.</h3>
                    <p>Hover over title for more information</p>
                    <p><a href="#" class="ws-tooltip" title="Tooltip text to go here. Nullam tristique neque at diam porttitor vitae malesuada dolor eleifend.">Proposal Development:</a> <span>Vivamus et turpis vel urna auctor auctor ut sed massa. Nullam tristique neque at diam porttitor vitae malesuada dolor eleifend.</span></p>
                    <p><a href="#" class="ws-tooltip" title="Tooltip text to go here. Nullam tristique neque at diam porttitor vitae malesuada dolor eleifend.">Research:</a> <span>Vivamus et turpis vel urna auctor auctor ut sed massa. Nullam tristique neque at diam porttitor vitae malesuada dolor eleifend.</span></p>
                  </div>'
  );
  $form['intro-text']['complete'] = array(
    '#markup' => '<div class="intro-text-3">
                    <h3 class="num">3.</h3>
                    <h3>Fill in proposal application form online.</h3>
                    <p>All submissions will receive a confirmation email.</p>
                  </div>'
  );
  $form['intro-text']['review'] = array(
    '#markup' => '<div class="intro-text-4">
                    <h3 class="num">4.</h3>
                    <h3>Your proposal will be reviewed.</h3>
                    <p>A member of UoA will be in contact to discuss next steps. If you have any questions in the meantime please use our support form at <url>.</p>
                  </div>'
  );

  $form['intro-form']['#type'] = 'fieldset';
  $form['intro-form']['proposal-type'] = array(
    '#type' => 'radios',
    //'#title' => t('Proposal Type'),
    //'#description' => t('Please indicate the type of proposal for this application'),
    '#options' => nesi_mstep_proposal_class_types(),
    '#default_value' => '',
    '#required' => TRUE,
  );
  $form['intro-form']['sub_email']['#title'] = 'Email address';
  $form['intro-form']['sub_email']['#type'] = 'textfield';
  $form['intro-form']['sub_email']['#required'] = TRUE;

  return $form;
}
