<?php

function nesi_mstep_proposal_development_form() {

  $form['project']['#type'] = 'fieldset';
  $form['project']['#title'] = 'Project';

  $form['project']['pdc-title'] = array(
    '#type' => 'textfield',
    '#title' => t('Project Title'),
    '#required' => TRUE,
  );

  $form['project']['pdc-start-date'] = array(
    '#type' => 'date_popup',
    '#date_format' => 'd-m-Y',
    '#title' => t('Estimated project start date'),
    '#description' => t('Please indicate the approximate date from which the HPC resource will be required.'),
    '#required' => TRUE,
  );

  $form['project']['pdc-description'] = array(
    '#type' => 'textarea',
    '#title' => t('Project description'),
    '#description' => t('Please provide a description of the project such as the scientific goals.'),
    '#required' => TRUE,
  );

  $form['team']['#type'] = 'fieldset';
  $form['team']['#title'] = 'Principal Investigator and Team';

  $form['team']['pdc-pi-name'] = array(
    '#type' => 'textfield',
    '#title' => t('Principal\'s name'),
    '#required' => TRUE,
  );

  $form['team']['pdc-pi-email'] = array(
    '#type' => 'textfield',
    '#title' => t('Principal\'s email'),
    '#required' => TRUE,
  );

  $form['team']['pdc-pi-phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Principal\'s phone number'),
    '#required' => TRUE,
  );

  $form['team']['pdc-team-access'] = array(
    '#type' => 'textarea',
    '#title' => t('Project team members requiring access to the NeSI systems'),
    '#description' => t('Please list any project team members (including the PI) who will need to access the NeSI systems.'),
    '#required' => TRUE,
  );

  $form['team']['pdc-team-experience'] = array(
    '#type' => 'textarea',
    '#title' => t('Project team\'s HPC experience'),
    '#description' => t('Please indicate if the project team has used HPC resources in the past. If yes, please provide information on the architecture used.'),
  );

  $form['requirements']['#type'] = 'fieldset';
  $form['requirements']['#title'] = 'Requirements';

  $form['requirements']['pdc-platform'] = array(
    '#type' => 'radios',
    '#title' => t('Desired HPC Platform'),
    '#options' => nesi_mstep_proposal_platform_options(),
    '#default_value' => '',
  ); 

  $form['requirements']['pdc-software'] = array(
    '#type' => 'textarea',
    '#title' => t('Software requirements'),
    '#description' => t('Please indicate production code(s) to be used including the licence status as well as external libraries, or/and compilers, debuggers, profilers and other dependencies required for developing your HPC code.'),
  );

  $form['requirements']['pdc-storage'] = array(
    '#type' => 'textarea',
    '#title' => t('Storage requirements'),
    '#description' => t('Please indicate how much data storage (GB units) the project will need. Note that this is not archival storage, but disk space for a job\'s input and output data.'),
  );

  $form['additional']['#type'] = 'fieldset';
  $form['additional']['#title'] = 'Additional Information';

  $form['additional']['pdc-expert-support'] = array(
    '#type' => 'radios',
    '#title' => t('Expert support'),
    '#description' => 'Please check the appropriate box if the project team will need NeSI support/consultancy for:',
    '#options' => array(
      'software_installation' => 'Software Installation',   
      'software_porting' => 'Software Porting',   
      'software_optimisation' => 'Software Optimisation',   
      'scaling_performance' => 'Scaling Performance',   
    ),    
  );
 
  $form['additional']['pdc-further-information'] = array(
    '#type' => 'textarea',
    '#title' => t('Further information'),
    '#description' => t('Please use this section to add any information which has not been covered elsewhere.'),
  );

  return $form;
}

