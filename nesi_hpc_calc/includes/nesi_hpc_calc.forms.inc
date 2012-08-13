<?php
/**
 * Methods to create forms in the body of the tabs
 */

// TODO: Make the number of CPU cores per node and the cost per core hour configurable,
//       perhaps on an admin page, instead of hard-coding it into the function calls

function hpc_create_power6_form() {
	return hpc_create_form('power6', '0.20', '32');
}

function hpc_create_power7_form() {
	return hpc_create_form('power7', '0.20', '32');
}

function hpc_create_intel_form() {
	return hpc_create_form('intel', '0.20', '12');
}

function hpc_create_bluegene_form() {
	return hpc_create_form('bluegene', '0.05', '256');
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

	// cpu cores avail
	$form[$platform.'_cpu_cores_avail'] = array(
		'#type' => 'hidden',
		'#value' => t($num_cpu_cores_per_node),
	);
	if ($platform == "bluegene") {
		$cpu_cores_avail_description = 'out of ' . $num_cpu_cores_per_node . ' CPU Cores to be allocated on each of the partitions for my job';
		$field_len = 3;
	} else {
		$cpu_cores_avail_description = 'out of ' . $num_cpu_cores_per_node . ' CPU Cores to be allocated on each of the nodes for my job';
		$field_len = 2;
	}
	
	// job size
	$form[$platform.'_job_size'] = array(
		'#type' => 'textfield',
		'#size' => 6,
		'#maxlength' => 6,
		'#attributes' => array('class' => array('positive-integer')),
	);
	$form[$platform.'_job_size_title'] = array(
		'#type' => 'markup',
		'#markup' => t('Typical Job Size'),
	);
	$form[$platform.'_job_size_description'] = array(
		'#type' => 'markup',
		'#markup' => t('CPU core(s)'),
	);
	$form[$platform.'_job_size_error'] = array(
		'#type' => 'item',
		'#markup' => t(''),
	);
	
	// wall clock hours
	$form[$platform.'_wall_clock_hours'] = array(
			'#type' => 'textfield',
			'#size' => 10,
			'#maxlength' => 10,
			'#attributes' => array('class' => array('positive-integer')),
	);
	$form[$platform.'_wall_clock_hours_title'] = array(
			'#type' => 'markup',
			'#markup' => t('Wall clock hours for a typical job'),
	);
	$form[$platform.'_wall_clock_hours_description'] = array(
			'#type' => 'markup',
			'#markup' => t('Hour(s)'),
	);
	$form[$platform.'_wall_clock_hours_error'] = array(
			'#type' => 'item',
			'#markup' => t(''),
	);
	
	// cpu cores per node
	$form[$platform.'_cpu_cores_per_node'] = array(
		'#type' => 'textfield',
		'#size' => $field_len,
		'#maxlength' => $field_len,
		'#attributes' => array('class' => array('positive-integer')),
		'#states' => array(
			'visible' => array(
				':input[name="' . $platform . '_usage"]' => array('value' => 'exclusive'),
		)),
	);
	$form[$platform.'_cpu_cores_per_node_title'] = array(
		'#type' => 'item',
		'#markup' => t('I would prefer'),
		'#states' => array(
			'visible' => array(
				':input[name="' . $platform . '_usage"]' => array('value' => 'exclusive'),
		)),
	);
	$form[$platform.'_cpu_cores_per_node_description'] = array(
		'#type' => 'item',
		'#markup' => t($cpu_cores_avail_description),
		'#states' => array(
			'visible' => array(
				':input[name="' . $platform . '_usage"]' => array('value' => 'exclusive'),
		)),
	);
	$form[$platform.'_cpu_cores_per_node_error'] = array(
		'#type' => 'item',
		'#markup' => t(''),
		'#states' => array(
			'visible' => array(
				':input[name="' . $platform . '_usage"]' => array('value' => 'exclusive'),
		)),
	);

	// usage (shared/exclusive)
	$form[$platform.'_usage'] = array(
		'#type' => 'radios',
		'#title' => t(''),
		'#options' => array('shared' => t('Shared'), 'exclusive' => t('Exclusive')),
		'#default_value' => 'shared',
	);
	$form[$platform.'_usage_title'] = array(
			'#type' => 'item',
			'#markup' => t('Shared or Exclusive use of node(s)/partition(s)'),
	);
	$form[$platform.'_usage_description'] = array(
		'#type' => 'item',
		'#markup' => 'If you select Shared please make sure that the jobs will not reduce the ' .
					 'performance of the shared resource. <a href="#">Read our terms</a>.',
		'#states' => array(
				'visible' => array(
						':input[name="' . $platform . '_usage"]' => array('value' => 'shared'),
				)),			
	);

	// number job runs
	$form[$platform.'_number_job_runs'] = array(
			'#type' => 'textfield',
			'#size' => 10,
			'#maxlength' => 10,
			'#attributes' => array('class' => array('positive-integer')),
	);
	$form[$platform.'_number_job_runs_title'] = array(
			'#type' => 'markup',
			'#markup' => t('Number of job runs required to complete my project'),
	);
	$form[$platform.'_number_job_runs_description'] = array(
			'#type' => 'item',
			'#markup' => t('Run(s)'),
	);
	$form[$platform.'_number_job_runs_error'] = array(
			'#type' => 'item',
			'#markup' => t(''),
	);
	
	// cpu core hours
	$form[$platform.'_cpu_core_hours'] = array(
		'#type' => 'item',
		'#markup' => '0',
	);
	$form[$platform.'_cpu_core_hours_title'] = array(
		'#type' => 'markup',
		'#markup' => 'CPU core hours',
	);
	if ($platform == "bluegene") {
		$form[$platform.'_cpu_core_hours_description'] = array(
			'#type' => 'markup',
			'#markup' => '(N x ' . $num_cpu_cores_per_node . ' x Wall clock hours x Number job runs)',
		);
	} else {
		$form[$platform.'_cpu_core_hours_description'] = array(
			'#type' => 'markup',
			'#markup' => '(Job size x Wall clock hours x Number job runs)',
		);
	}
	
	// hpc cost
	$form[$platform.'_hpc_cost'] = array(
		'#type' => 'item',
		'#markup' => '',
	);
	$form[$platform.'_hpc_cost_title'] = array(
		'#type' => 'markup',
		'#markup' => 'HPC Cost',
	);
	$form[$platform.'_hpc_cost_description'] = array(
		'#type' => 'markup',
		'#markup' => '(CPU core hours x $' . $price_per_core_hour . ')',
	);
	
	// project cost
	$form[$platform.'_project_cost'] = array(
		'#type' => 'item',
		'#markup' => '',
	);
	$form[$platform.'_project_cost_title'] = array(
		'#type' => 'markup',
		'#markup' => 'Project Cost - 20%',
	);
	
	// nesi contribution
	$form[$platform.'_nesi_contribution'] = array(
		'#type' => 'item',
		'#markup' => '',
	);
	$form[$platform.'_nesi_contribution_title'] = array(
		'#type' => 'markup',
		'#markup' => 'NeSI Contribution - 80%',
	);
	
	// price per core hour	
	$form[$platform.'_price_per_core_hour'] = array(
		'#type' => 'hidden',
		'#value' => t($price_per_core_hour),
	);
	return $form;
}
