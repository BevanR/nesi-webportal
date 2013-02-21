<?php

function nesi_mstep_proposal_research_form() {

  $form['prc'] = array(
    '#markup' => '<h2>Research Proposal</h2>',
  );

  $form['grant']['#type'] = 'fieldset';
  $form['grant']['#title'] = 'Peer-Reviewed Research Grant Provider Details';
  $form['grant']['provider']['#title'] = 'Name of peer-reviewed research grant provider';
  $form['grant']['provider']['#description'] = 'Please provide the name of your institutional, national or international grant provider.';
  $form['grant']['provider']['#type'] = 'textfield';
  $form['grant']['provider']['#required'] = TRUE;
  $form['grant']['title']['#title'] = 'Title of research grant';
  $form['grant']['title']['#description'] = 'Please provide the title of the research grant or award that is associated this with proposal.';
  $form['grant']['title']['#type'] = 'textfield';
  $form['grant']['title']['#required'] = TRUE;
  $form['grant']['start_date']['#title'] = 'Start date of the grant';
  $form['grant']['start_date']['#description'] = 'Please provide the start date of the grant or award.';
  $form['grant']['start_date']['#type'] = 'textfield';
  $form['grant']['start_date']['#required'] = TRUE;
  $form['grant']['duration']['#title'] = 'Duration of the grant';
  $form['grant']['duration']['#description'] = 'Please provide the duration of the grant or award.';
  $form['grant']['duration']['#type'] = 'textfield';
  $form['grant']['duration']['#required'] = TRUE;

  $form['prc-title'] = array(
    '#type' => 'textfield',
    '#title' => t('Proposal Title'),
    '#required' => TRUE,
  );

  $form['prc-start-date'] = array(
    '#type' => 'textfield',
    '#title' => t('Estimated project start date'),
    '#description' => t('Please indicate the approximate date from which the HPC resource will be required.'),
    '#required' => TRUE,
  );

  $form['prc-scientific-goals'] = array(
    '#type' => 'textarea',
    '#title' => t('Scientific goals'),
    '#description' => t('Please outline the scientific outcomes of your proposal. You are welcome to provide a reference to an overarching proposal, rather than duplicating content.'),
    '#required' => TRUE,
  );

  $form['prc-hpc-benefits'] = array(
    '#type' => 'textarea',
    '#title' => t('Benefits from HPC'),
    '#description' => t('Please describe how access to HPC resources will benefit your project.'),
    '#required' => TRUE,
  );

  $form['prc-deliverables'] = array(
    '#type' => 'textarea',
    '#title' => t('Project deliverables'),
    '#description' => t('Expected journal article(s), conference proceedings or other publications that will come from this research.'),
  );

  $form['prc-hpc-usage-details'] = array(
    '#markup' => '<div><h2>NeSI HPC Usage Details</h2>
                  <p>Please indicate the expected shape of your computational needs. If you are requesting access to more than one HPC platform, then please provide usage details for each platform requested.<p>
                  </div>',
  );

  $form['prc-num-simulations'] = array(
    '#type' => 'textarea',
    '#title' => t('Estimated number of runs/simulations.'),
    '#required' => TRUE,
  );

  $form['prc-num-cpus'] = array(
    '#type' => 'textarea',
    '#title' => t('Estimated average number of CPUs per run.'),
    '#required' => TRUE,
  );

  $form['prc-wchours-per-run'] = array(
    '#type' => 'textarea',
    '#title' => t('Estimated average length of each run (in wall-clock hours).'),
    '#required' => TRUE,
  );

  $form['prc-usage-additional'] = array(
    '#type' => 'textarea',
    '#title' => t('Please provide any additional information on usage requirements.'),
    '#required' => TRUE,
  );

  $form['technical-details'] = array(
    '#markup' => '<div><h2>Technical Details</h2>
                  </div>',
  );

  $form['prc-cpu-hours-intel'] = array(
    '#type' => 'textfield',
    '#title' => t('CPU core hours required using the Intel cluster'),
    '#title' => t('Please indicate the CPU core hours needed using the Intel cluster (indicate 0 if no hours are required). See also http://www.nesi.org.nz/facilities for further details on the platforms.'),
    '#required' => TRUE,
  );

  $form['prc-cpu-hours-power6'] = array(
    '#type' => 'textfield',
    '#title' => t('CPU core hours required using P575/POWER6'),
    '#title' => t('Please indicate the CPU core hours needed using P575/POWER6 (indicate 0 if no hours are required). See also http://www.nesi.org.nz/facilities for further details on the platforms.'),
    '#required' => TRUE,
  );

  $form['prc-cpu-hours-power7'] = array(
    '#type' => 'textfield',
    '#title' => t('CPU core hours required using P755/POWER7'),
    '#title' => t('Please indicate the CPU core hours needed using P755/POWER7 (indicate 0 if no hours are required). See also http://www.nesi.org.nz/facilities for further details on the platforms.'),
    '#required' => TRUE,
  );

  $form['prc-cpu-hours-bluegene'] = array(
    '#type' => 'textfield',
    '#title' => t('CPU core hours required using BlueGene/P'),
    '#title' => t('Please indicate the CPU core hours needed using BlueGene/P (indicate 0 if no hours are required). See also http://www.nesi.org.nz/facilities for further details on the platforms.'),
    '#required' => TRUE,
  );

  $form['prc-storage-requirements'] = array(
    '#type' => 'textfield',
    '#title' => t('Storage requirements'),
    '#description' => t('Please indicate unit, e.g. GB. Note that this is not archival storage, but disk space for a job\'s input and output data.'),
    '#required' => TRUE,
  );

  $form['prc-software'] = array(
    '#type' => 'textarea',
    '#title' => t('Software requirements'),
    '#description' => t('Please indicate production code(s) to be used including the licence status as well as external libraries, or/and compilers, debuggers, profilers and other dependencies required for developing your HPC code.'),
  );

  $form['prc-data-transfer'] = array(
    '#type' => 'textarea',
    '#title' => t('Data transfer'),
    '#description' => t('Please indicate how much data will need to be transferred between NeSI and 3rd parties and at what frequency.'),
  );

  $form['team-details'] = array(
    '#markup' => '<div><h2>Team Details</h2>
                  </div>',
  );

  $form['prc-team-access'] = array(
    '#type' => 'textarea',
    '#title' => t('Project team members requiring access to the NeSI systems'),
    '#description' => t('Please list any project team members (including the PI) who will need to access the NeSI systems.'),
    '#required' => TRUE,
  );

  $form['prc-team-experience'] = array(
    '#type' => 'textarea',
    '#title' => t('Background'),
    '#description' => t('Please outline the team\'s experience with HPC. This should include HPC architectures, programming languages, parallelisation methods and packages the team has experience with. Please also include names of HPC facilities that the research team has collaborated with in the past.'),
    '#required' => TRUE,
  );

  $form['prc-expert-support'] = array(
    '#type' => 'radios',
    '#title' => t('Expert support'),
    '#description' => t('Please indicate if you would like to request an Expert from NeSI. Please provide an explanation of what this is intended to cover and an estimate of hours in the space below. Experts can "contribute to optimizing your applications and software to better scale and perform on our HPC facilities".'),
    '#options' => array('yes' => 'Yes', 'no' => 'No'),
    '#default_value' => '',
    '#required' => TRUE,
  ); 
  
  $form['prc-expert-support-notes'] = array(
    '#type' => 'textarea',
    '#title' => t('Explanatory notes for "Expert support" section'),
  );

  $form['funding-details'] = array(
    '#markup' => '<div><h2>Funding Details</h2>
                  <p>If you have funding to support your HPC needs, please fill in this section.</p>
                  </div>',
  );

  $form['prc-funding-amount'] = array(
    '#type' => 'textfield',
    '#title' => t('Amount'),
    '#description' => t('The amount of funding approved for HPC'),
  );

  $form['prc-further-information'] = array(
    '#type' => 'textarea',
    '#title' => t('Further information'),
    '#description' => t('Please use this section to add any information which has not been covered elsewhere.'),
  );

  return $form;
}

