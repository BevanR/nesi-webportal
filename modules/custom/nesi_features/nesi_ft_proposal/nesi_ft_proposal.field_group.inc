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
  $field_group->identifier = 'group_additional|node|proposal_development_class|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_development_class';
  $field_group->mode = 'form';
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
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_additional|node|proposal_development_class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project|node|proposal_development_class|form';
  $field_group->group_name = 'group_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_development_class';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project',
    'weight' => '0',
    'children' => array(
      0 => 'field_pdc_description',
      1 => 'field_pdc_start_date',
      2 => 'title',
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
  $export['group_project|node|proposal_development_class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_requirements|node|proposal_development_class|form';
  $field_group->group_name = 'group_requirements';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_development_class';
  $field_group->mode = 'form';
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
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_requirements|node|proposal_development_class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_team|node|proposal_development_class|form';
  $field_group->group_name = 'group_team';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proposal_development_class';
  $field_group->mode = 'form';
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
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_team|node|proposal_development_class|form'] = $field_group;

  return $export;
}
