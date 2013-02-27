<?php

function nesi_mstep_proposal_research_form($form_state) {

  $form['prc-form-title'] = array(
    '#markup' => '<h1>Part 1 - Project and Team details</h1>',
  );

  $form['project']['#type'] = 'fieldset';
  $form['project']['#title'] = 'Project';

  $form['project']['prc-title'] = array(
    '#type' => 'textfield',
    '#title' => t('Proposal Title'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p1']['prc-title'] ? $form_state['ctools_object']->data['p1']['prc-title'] : '',
  );

  $form['project']['prc-start-date'] = array(
    '#type' => 'textfield',
    '#title' => t('Estimated project start date'),
    '#description' => t('Please indicate the approximate date from which the HPC resource will be required.'),
    '#required' => TRUE,
  );

  $form['project']['prc-scientific-goals'] = array(
    '#type' => 'textarea',
    '#title' => t('Scientific goals'),
    '#description' => t('Please outline the scientific outcomes of your proposal. You are welcome to provide a reference to an overarching proposal, rather than duplicating content.'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p1']['prc-scientific-goals'] ? $form_state['ctools_object']->data['p1']['prc-scientific-goals'] : '',
  );

  $form['project']['prc-hpc-benefits'] = array(
    '#type' => 'textarea',
    '#title' => t('Benefits from HPC'),
    '#description' => t('Please describe how access to HPC resources will benefit your project.'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p1']['prc-hpc-benefits'] ? $form_state['ctools_object']->data['p1']['prc-hpc-benefits'] : '',
  );

  $form['project']['prc-deliverables'] = array(
    '#type' => 'textarea',
    '#title' => t('Project deliverables'),
    '#description' => t('Expected journal article(s), conference proceedings or other publications that will come from this research.'),
    '#default_value' => $form_state['ctools_object']->data['p1']['prc-deliverables'] ? $form_state['ctools_object']->data['p1']['prc-deliverables'] : '',
  );

  $form['grant']['#type'] = 'fieldset';
  $form['grant']['#title'] = 'Peer-Reviewed Research Grant Provider Details';

  $form['grant']['prc-grant-provider'] = array( 
    '#title' => 'Name of peer-reviewed research grant provider',
    '#description' => 'Please provide the name of your institutional, national or international grant provider.',
    '#type' => 'textfield',
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p1']['prc-grant-provider'] ? $form_state['ctools_object']->data['p1']['prc-grant-provider'] : '',
  );

  $form['grant']['prc-grant-title'] = array(
    '#title' => 'Title of research grant',
    '#description' => 'Please provide the title of the research grant or award that is associated this with proposal.',
    '#type' => 'textfield',
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p1']['prc-grant-title'] ? $form_state['ctools_object']->data['p1']['prc-grant-title'] : '',
  );

  $form['grant']['prc-grant-start-date'] = array(  
    '#title' => 'Start date of the grant',
    '#description' => 'Please provide the start date of the grant or award.',
    '#type' => 'textfield',
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p1']['prc-grant-start-date'] ? $form_state['ctools_object']->data['p1']['prc-grant-start-date'] : '',
  );

  $form['grant']['prc-grant-duration'] = array(
    '#title' => 'Duration of the grant',
    '#description' => 'Please provide the duration of the grant or award.',
    '#type' => 'textfield',
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p1']['prc-grant-duration'] ? $form_state['ctools_object']->data['p1']['prc-grant-duration'] : '',
  );

  $form['funding']['#type'] = 'fieldset';
  $form['funding']['#title'] = 'Funding';

  $form['funding']['prc-funding-amount'] = array(
    '#type' => 'textfield',
    '#title' => t('Amount'),
    '#description' => t('The amount of funding approved for HPC'),
    '#default_value' => $form_state['ctools_object']->data['p1']['prc-funding-amount'] ? $form_state['ctools_object']->data['p1']['prc-funding-amount'] : '',
  );

  $form['team']['#type'] = 'fieldset';
  $form['team']['#title'] = 'Principal Investigator and Team';

  $form['team']['prc-pi-name'] = array(
    '#type' => 'textfield',
    '#title' => t('Principal\'s name'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p1']['prc-pi-name'] ? $form_state['ctools_object']->data['p1']['prc-pi-name'] : '',
  );

  $form['team']['prc-pi-email'] = array(
    '#type' => 'textfield',
    '#title' => t('Principal\'s email'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p1']['prc-pi-email'] ? $form_state['ctools_object']->data['p1']['prc-pi-email'] : '',
  );

  $form['team']['prc-pi-phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Principal\'s phone number'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p1']['prc-pi-phone'] ? $form_state['ctools_object']->data['p1']['prc-pi-phone'] : '',
  );

  $form['team']['prc-team-access'] = array(
    '#type' => 'textarea',
    '#title' => t('Project team members requiring access to the NeSI systems'),
    '#description' => t('Please list any project team members (including the PI) who will need to access the NeSI systems.'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p1']['prc-team-access'] ? $form_state['ctools_object']->data['p1']['prc-team-access'] : '',
  );

  $form['team']['prc-team-experience'] = array(
    '#type' => 'textarea',
    '#title' => t('Project team\'s HPC experience'),
    '#description' => t('Please indicate if the project team has used HPC resources in the past. If yes, please provide information on the architecture used.'),
    '#default_value' => $form_state['ctools_object']->data['p1']['prc-team-experience'] ? $form_state['ctools_object']->data['p1']['prc-team-experience'] : '',
  );

  return $form;
}

function nesi_mstep_proposal_research_form_part_2($form_state) {
 
  $form['prc-form-title'] = array(
    '#markup' => '<h1>Part 2 - Technical details</h1>',
  );

  $form['usage']['#type'] = 'fieldset';
  $form['usage']['#title'] = 'NeSI HPC Usage Details';

  $form['usage']['prc-hpc-usage-details'] = array(
    '#markup' => '<div>
                  <p>Please indicate the expected shape of your computational needs. If you are requesting access to more than one HPC platform, then please provide usage details for each platform requested.<p>
                  </div>',
  );

  $form['usage']['prc-num-simulations'] = array(
    '#type' => 'textfield',
    '#title' => t('Estimated number of runs/simulations.'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p2']['prc-num-simulations'] ? $form_state['ctools_object']->data['p2']['prc-num-simulations'] : '',
  );

  $form['usage']['prc-num-cpus'] = array(
    '#type' => 'textfield',
    '#title' => t('Estimated average number of CPUs per run.'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p2']['prc-num-cpus'] ? $form_state['ctools_object']->data['p2']['prc-num-cpus'] : '',
  );

  $form['usage']['prc-wchours-per-run'] = array(
    '#type' => 'textfield',
    '#title' => t('Estimated average length of each run (in wall-clock hours).'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p2']['prc-wchours-per-run'] ? $form_state['ctools_object']->data['p2']['prc-wchours-per-run'] : '',
  );

  $form['usage']['prc-usage-additional'] = array(
    '#type' => 'textarea',
    '#title' => t('Please provide any additional information on usage requirements.'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p2']['prc-usage-additional'] ? $form_state['ctools_object']->data['p2']['prc-usage-additional'] : '',
  );

  $form['resource']['#type'] = 'fieldset';
  $form['resource']['#title'] = 'Software storage and CPU';

  $form['resource']['prc-cpu-hours-intel'] = array(
    '#type' => 'textfield',
    '#title' => t('CPU core hours required using the Intel cluster'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p2']['prc-cpu-hours-intel'] ? $form_state['ctools_object']->data['p2']['prc-cpu-hours-intel'] : '',
  );

  $form['resource']['prc-cpu-hours-power6'] = array(
    '#type' => 'textfield',
    '#title' => t('CPU core hours required using P575/POWER6'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p2']['prc-cpu-hours-power6'] ? $form_state['ctools_object']->data['p2']['prc-cpu-hours-power6'] : '',
  );

  $form['resource']['prc-cpu-hours-power7'] = array(
    '#type' => 'textfield',
    '#title' => t('CPU core hours required using P755/POWER7'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p2']['prc-cpu-hours-power7'] ? $form_state['ctools_object']->data['p2']['prc-cpu-hours-power7'] : '',
  );

  $form['resource']['prc-cpu-hours-bluegene'] = array(
    '#type' => 'textfield',
    '#title' => t('CPU core hours required using BlueGene/P'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p2']['prc-cpu-hours-bluegene'] ? $form_state['ctools_object']->data['p2']['prc-cpu-hours-bluegene'] : '',
  );

  $form['resource']['prc-storage-requirements'] = array(
    '#type' => 'textfield',
    '#title' => t('Storage requirements'),
    '#description' => t('Please indicate unit, e.g. GB. Note that this is not archival storage, but disk space for a job\'s input and output data.'),
    '#required' => TRUE,
    '#default_value' => $form_state['ctools_object']->data['p2']['prc-storage-requirements'] ? $form_state['ctools_object']->data['p2']['prc-storage-requirements'] : '',
  );

  $form['resource']['prc-software'] = array(
    '#type' => 'textarea',
    '#title' => t('Software requirements'),
    '#description' => t('Please indicate production code(s) to be used including the licence status as well as external libraries, or/and compilers, debuggers, profilers and other dependencies required for developing your HPC code.'),
    '#default_value' => $form_state['ctools_object']->data['p2']['prc-software'] ? $form_state['ctools_object']->data['p2']['prc-software'] : '',
  );

  $form['resource']['prc-data-transfer'] = array(
    '#type' => 'textarea',
    '#title' => t('Data transfer'),
    '#description' => t('Please indicate how much data will need to be transferred between NeSI and 3rd parties and at what frequency.'),
    '#default_value' => $form_state['ctools_object']->data['p2']['prc-data-transfer'] ? $form_state['ctools_object']->data['p2']['prc-data-transfer'] : '',
  );

  return $form;
}

function nesi_mstep_proposal_research_form_part_3() {

  $form['prc-form-title'] = array(
    '#markup' => '<h1>Part 3 - Support and additional information</h1>',
  );

  $form['additional']['#type'] = 'fieldset';
  $form['additional']['#title'] = 'Additional Information';

  $form['additional']['prc-expert-support'] = array(
    '#type' => 'radios',
    '#title' => t('Expert support'),
    '#description' => t('Please indicate if you would like to request an Expert from NeSI. Please provide an explanation of what this is intended to cover and an estimate of hours in the space below. Experts can "contribute to optimizing your applications and software to better scale and perform on our HPC facilities".'),
    '#options' => array('yes' => 'Yes', 'no' => 'No'),
    '#default_value' => '',
  ); 
  
  $form['additional']['prc-expert-support-notes'] = array(
    '#type' => 'textarea',
    '#title' => t('Explanatory notes for "Expert support" section'),
  );

  $form['additional']['prc-further-information'] = array(
    '#type' => 'textarea',
    '#title' => t('Further information'),
    '#description' => t('Please use this section to add any information which has not been covered elsewhere.'),
  );

  return $form;
}
