<?php

function nesi_mstep_proposal_intro_form() {

  $form['prelim'] = array(
    '#markup' => '<h2>Completing your application</h2>',
  );

  $form['intro-text']['#type'] = 'fieldset';
  $form['intro-text']['read'] = array(
    '#markup' => '<div class="intro-text-1">
                    <h3 class="num">1.</h3>
                    <h3>Read our <a href="#block-nesi-config-nesi-faq">Frequently Asked Questions</a> below and <a href="/access-policy">Access Policy</a>.</h3>
                    <p>The Access Policy will be sent to you upon submitting a proposal. <a href="/access-policy">Read online here</a></p>
                  </div>'
  );
  $form['intro-text']['decide'] = array(
    '#markup' => '<div class="intro-text-2">
                    <h3 class="num">2.</h3>
                    <h3>Decide which allocation you\'re applying for and click the Start button.</h3>
                    <p><a href="/allocations" class="ws-tooltip">Proposal Development:</a> <span>Proposal Development allocations represent a preparatory phase for a larger project(s), These proposals provide a limited allocation to build a case for a Research allocation.</span></p>
                    <p><a href="/allocations" class="ws-tooltip">Research:</a> <span>Research allocations often follow successful completion of Proposal Development allocations. Relevant experience and success in running their codes must be demonstrated on HPC facilities prior to receiving a Research allocation.</span></p>
                    <p><a href="/allocations" class="ws-tooltip">Postgraduate:</a> <span>For research projects of postgraduate students.</span></p>
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
                    <p>A member of NeSI will be in contact to discuss next steps. If you have any questions in the meantime please use our <a href="#contact">support form</a>.</p>
                  </div>'
  );

  $form['intro-form']['#type'] = 'fieldset';
  $form['intro-form']['proposal-type'] = array(
    '#type' => 'radios',
    //'#title' => t('Proposal Type'),
    //'#description' => t('Please indicate the type of proposal for this application'),
    '#options' => nesi_mstep_proposal_class_types(),
    '#default_value' => '',
  );
  
  global $user;

  $form['intro-form']['sub_email']['#title'] = 'Email address';
  $form['intro-form']['sub_email']['#type'] = 'hidden';
  $form['intro-form']['sub_email']['#default_value'] = $user->mail;
  $form['intro-form']['sub_email']['#required'] = TRUE;

  return $form;
}
