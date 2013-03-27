<?php
/**
 * @file
 * nesi_ft_proposal.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nesi_ft_proposal_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|proposal_development_class|default';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_development_class';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_pdc_additional_information',
      1 => 'field_pdc_expert_support',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Additional Information',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_additional|node|proposal_development_class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|proposal_research_class|default';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_research_class';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '6',
    'children' => array(
      0 => 'field_prc_additional_information',
      1 => 'field_prc_expert_support',
      2 => 'field_prc_expert_support_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Additional Information',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_additional|node|proposal_research_class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|proposal_research_class|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_research_class';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '6',
    'children' => array(
      0 => 'field_prc_additional_information',
      1 => 'field_prc_expert_support',
      2 => 'field_prc_expert_support_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Additional Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_additional|node|proposal_research_class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_budget|node|proposal_research_class|default';
  $field_group->group_name = 'group_budget';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_research_class';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Budget',
    'weight' => '2',
    'children' => array(
      0 => 'field_prc_funding_amount',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Budget',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_budget|node|proposal_research_class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_budget|node|proposal_research_class|form';
  $field_group->group_name = 'group_budget';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_research_class';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Budget',
    'weight' => '2',
    'children' => array(
      0 => 'field_prc_funding_amount',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Budget',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_budget|node|proposal_research_class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cpu|node|proposal_research_class|default';
  $field_group->group_name = 'group_cpu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_research_class';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Software storage and CPU',
    'weight' => '5',
    'children' => array(
      0 => 'field_prc_cpu_core_hours',
      1 => 'field_prc_cpu_hours_bluegene',
      2 => 'field_prc_cpu_hours_intel',
      3 => 'field_prc_cpu_hours_power6',
      4 => 'field_prc_cpu_hours_power7',
      5 => 'field_prc_data_transfer',
      6 => 'field_prc_proposed_hpc_platform',
      7 => 'field_prc_software_requirements',
      8 => 'field_prc_storage_requirements',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Software storage and CPU',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cpu|node|proposal_research_class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cpu|node|proposal_research_class|form';
  $field_group->group_name = 'group_cpu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_research_class';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Software storage and CPU',
    'weight' => '5',
    'children' => array(
      0 => 'field_prc_cpu_core_hours',
      1 => 'field_prc_cpu_hours_bluegene',
      2 => 'field_prc_cpu_hours_intel',
      3 => 'field_prc_cpu_hours_power6',
      4 => 'field_prc_cpu_hours_power7',
      5 => 'field_prc_data_transfer',
      6 => 'field_prc_proposed_hpc_platform',
      7 => 'field_prc_software_requirements',
      8 => 'field_prc_storage_requirements',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Software storage and CPU',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cpu|node|proposal_research_class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_peer_reviewed|node|proposal_research_class|default';
  $field_group->group_name = 'group_peer_reviewed';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_research_class';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Peer-Reviewed Research Grant Provider Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_prc_funding_provider',
      1 => 'field_prc_grant_duration',
      2 => 'field_prc_grant_start_date',
      3 => 'field_prc_grant_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Peer-Reviewed Research Grant Provider Details',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_peer_reviewed|node|proposal_research_class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_peer_reviewed|node|proposal_research_class|form';
  $field_group->group_name = 'group_peer_reviewed';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_research_class';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Peer-Reviewed Research Grant Provider Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_prc_funding_provider',
      1 => 'field_prc_grant_duration',
      2 => 'field_prc_grant_start_date',
      3 => 'field_prc_grant_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Peer-Reviewed Research Grant Provider Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_peer_reviewed|node|proposal_research_class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project|node|proposal_development_class|default';
  $field_group->group_name = 'group_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_development_class';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project',
    'weight' => '0',
    'children' => array(
      0 => 'field_pdc_description',
      1 => 'field_pdc_start_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Project',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_project|node|proposal_development_class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project|node|proposal_research_class|default';
  $field_group->group_name = 'group_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_research_class';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project',
    'weight' => '0',
    'children' => array(
      0 => 'field_prc_hpc_benefits',
      1 => 'field_prc_project_deliverables',
      2 => 'field_prc_scientific_goals',
      3 => 'field_prc_start_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Project',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_project|node|proposal_research_class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project|node|proposal_research_class|form';
  $field_group->group_name = 'group_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_research_class';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project',
    'weight' => '0',
    'children' => array(
      0 => 'field_prc_hpc_benefits',
      1 => 'field_prc_project_deliverables',
      2 => 'field_prc_scientific_goals',
      3 => 'field_prc_start_date',
      4 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Project',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_project|node|proposal_research_class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_requirements|node|proposal_development_class|default';
  $field_group->group_name = 'group_requirements';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_development_class';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Requirements',
    'weight' => '2',
    'children' => array(
      0 => 'field_pdc_proposed_hpc_platform',
      1 => 'field_pdc_software_requirements',
      2 => 'field_pdc_storage_requirements',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Requirements',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_requirements|node|proposal_development_class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_team|node|proposal_development_class|default';
  $field_group->group_name = 'group_team';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_development_class';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Principal Investigator and Team',
    'weight' => '1',
    'children' => array(
      0 => 'field_pdc_pi_email',
      1 => 'field_pdc_pi_name',
      2 => 'field_pdc_pi_phone',
      3 => 'field_pdc_team_access',
      4 => 'field_pdc_team_experience',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Principal Investigator and Team',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_team|node|proposal_development_class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_team|node|proposal_research_class|default';
  $field_group->group_name = 'group_team';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_research_class';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Principal Investigator and Team',
    'weight' => '3',
    'children' => array(
      0 => 'field_prc_hpc_background',
      1 => 'field_prc_pi_email',
      2 => 'field_prc_pi_name',
      3 => 'field_prc_pi_phone',
      4 => 'field_prc_team_access',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Principal Investigator and Team',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_team|node|proposal_research_class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_team|node|proposal_research_class|form';
  $field_group->group_name = 'group_team';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_research_class';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Principal Investigator and Team',
    'weight' => '3',
    'children' => array(
      0 => 'field_prc_hpc_background',
      1 => 'field_prc_pi_email',
      2 => 'field_prc_pi_name',
      3 => 'field_prc_pi_phone',
      4 => 'field_prc_team_access',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Principal Investigator and Team',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_team|node|proposal_research_class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_usage|node|proposal_research_class|default';
  $field_group->group_name = 'group_usage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_research_class';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'NeSI HPC Usage Details',
    'weight' => '4',
    'children' => array(
      0 => 'field_prc_allocation_profile',
      1 => 'field_prc_estimated_cpus',
      2 => 'field_prc_estimated_run_length',
      3 => 'field_prc_estimated_simulations',
      4 => 'field_prc_estimated_wc_hours',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'NeSI HPC Usage Details',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_usage|node|proposal_research_class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_usage|node|proposal_research_class|form';
  $field_group->group_name = 'group_usage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_research_class';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'NeSI HPC Usage Details',
    'weight' => '4',
    'children' => array(
      0 => 'field_prc_allocation_profile',
      1 => 'field_prc_estimated_cpus',
      2 => 'field_prc_estimated_run_length',
      3 => 'field_prc_estimated_simulations',
      4 => 'field_prc_estimated_wc_hours',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'NeSI HPC Usage Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_usage|node|proposal_research_class|form'] = $field_group;

  return $export;
}
