<?php
/**
 * Methods to create forms in the body of the tabs
 */

// TODO: Make the number of CPU cores per node and the cost per core hour configurable,
//       perhaps on an admin page, instead of hard-coding it into the function calls

function hpc_create_power6_form() {
	return hpc_create_form('power6', '$0.20', '32');
}

function hpc_create_power7_form() {
	return hpc_create_form('power7', '$0.20', '32');
}

function hpc_create_intel_form() {
	return hpc_create_form('intel', '$0.20', '12');
}

function hpc_create_bluegene_form() {
	return hpc_create_form('bluegene', '$0.05', '256');
}

/**
 * Create a form. Platform-dependent values are passed in as arguments
 * @param string $platform Platform
 * @param string $price_per_core_hour Price per core hour
 * @param string $num_cpu_cores_per_node Number CPU cores per cluster node
 * @return array The created form
 */
function hpc_create_form($platform, $price_per_core_hour, $num_cpu_cores_per_node) {
	$form = array();
	if ($platform == "bluegene") {
		$cpu_cores_avail_description = '/' . $num_cpu_cores_per_node . ' CPU cores / 1 partition';
		$field_len = 3;
	} else {
		$cpu_cores_avail_description = '/ ' . $num_cpu_cores_per_node . ' CPU cores / 1 node';
		$field_len = 2;
	}
	$form[$platform.'_job_size'] = array(
		'#type' => 'textfield',
		'#title' => t('Job Size'),
		'#size' => 6,
		'#maxlength' => 6,
		'#description' => t('CPU core(s)'),
		'#attributes' => array('class' => array('positive-integer')),
	);
	$form[$platform.'_job_size_error'] = array(
		'#type' => 'item',
		'#markup' => t(''),
	);
	$form[$platform.'_cpu_cores_avail'] = array(
		'#type' => 'hidden',
		'#value' => t($num_cpu_cores_per_node),
	);
	$form[$platform.'_override_allocation'] = array(
		'#type' => 'item',
		'#markup' => 'Would you like to overide the CPU Cores per allocation?',
	);
	$form[$platform.'_usage'] = array(
		'#type' => 'radios',
		'#title' => t(''),
		'#options' => array('shared' => t('Shared'), 'scaled' => t('Scaled')),
		'#default_value' => 'shared',
	);
	$form[$platform.'_cpu_cores'] = array(
		'#type' => 'textfield',
		'#size' => $field_len,
		'#maxlength' => $field_len,
		'#attributes' => array('class' => array('positive-integer')),
		'#states' => array(
			'visible' => array(
				':input[name="' . $platform . '_usage"]' => array('value' => 'scaled'),
		)),
	);
	$form[$platform.'_cpu_cores_description'] = array(
		'#type' => 'item',
		'#markup' => t($cpu_cores_avail_description),
		'#states' => array(
			'visible' => array(
				':input[name="' . $platform . '_usage"]' => array('value' => 'scaled'),
		)),
	);
	$form[$platform.'_cpu_cores_error'] = array(
		'#type' => 'item',
		'#markup' => t(''),
		'#states' => array(
			'visible' => array(
				':input[name="' . $platform . '_usage"]' => array('value' => 'scaled'),
		)),
	);
	$form[$platform.'_tip_01'] = array(
		'#type' => 'item',
		'#markup' => 'If you choose to override the CPU Cores per allocation please ' .
		             'make sure that the jobs will not reduce the performance of the '.
		             'shared resource. <a href="#">Read our terms</a>.',
	);
	$form[$platform.'_wall_clock_hours'] = array(
		'#type' => 'textfield',
		'#title' => t('Wall clock hours'),
		'#size' => 10,
		'#maxlength' => 10,
		'#description' => t('Hours'),
		'#attributes' => array('class' => array('positive-integer')),
	);
	$form[$platform.'_wall_clock_hours_error'] = array(
		'#type' => 'item',
		'#markup' => t(''),
	);
	$form[$platform.'_number_job_runs'] = array(
		'#type' => 'textfield',
		'#title' => t('Number of job runs'),
		'#size' => 10,
		'#maxlength' => 10,
		'#description' => t('Runs'),
		'#attributes' => array('class' => array('positive-integer')),
	);
	$form[$platform.'_number_job_runs_error'] = array(
		'#type' => 'item',
		'#markup' => t(''),
		'#attributes' => array('class' => array('error')),
	);
	$form[$platform.'_core_cpu_hours_label'] = array(
		'#type' => 'item',
		'#markup' => 'CPU core hours',
	);
	$form[$platform.'_core_cpu_hours_value'] = array(
		'#type' => 'item',
		'#markup' => '',
	);
	if ($platform == "bluegene") {
		$form[$platform.'_core_cpu_hours_tip'] = array(
			'#markup' => 'N x ' . $num_cpu_cores_per_node . ' x Wall clock hours x Number job runs',
		);
	} else {
		$form[$platform.'_core_cpu_hours_tip'] = array(
			'#markup' => 'Job size x Wall clock hours x Number job runs',
		);
	}
	$form[$platform.'_hpc_cost_label'] = array(
		'#type' => 'item',
		'#markup' => 'HPC Cost',
	);
	$form[$platform.'_hpc_cost_value'] = array(
		'#type' => 'item',
		'#markup' => '',
	);
	$form[$platform.'_price_per_core_hour'] = array(
		'#type' => 'item',
		'#markup' => $price_per_core_hour,
	);
	$form[$platform.'_project_cost_label'] = array(
		'#type' => 'item',
		'#markup' => 'Project Cost - 20%',
	);
	$form[$platform.'_project_cost_value'] = array(
		'#type' => 'item',
		'#markup' => '',
	);
	$form[$platform.'_nesi_contrib_label'] = array(
		'#type' => 'item',
		'#markup' => 'NeSI Contribution - 80%',
	);
	$form[$platform.'_nesi_contrib_value'] = array(
		'#type' => 'item',
		'#markup' => '',
	);	
	return $form;
}
