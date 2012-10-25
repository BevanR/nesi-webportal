<?php
/**
 * @file
 * nesi_call.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function nesi_call_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'validate_schedule';
  $rule->name = 'validate_schedule';
  $rule->field_name = 'field_call_schedule';
  $rule->col = 'value2';
  $rule->entity_type = 'node';
  $rule->bundle = 'call';
  $rule->validator = 'field_validation_date_range2_validator';
  $rule->settings = array(
    'cycle' => 'global',
    'min' => 'value + 1 day',
    'max' => '',
    'reverse' => 0,
    'errors' => 0,
  );
  $rule->error_message = 'The end date must be greater than the start date.';
  $export['validate_schedule'] = $rule;

  return $export;
}
