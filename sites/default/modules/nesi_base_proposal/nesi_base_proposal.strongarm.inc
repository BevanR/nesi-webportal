<?php
/**
 * @file
 * nesi_base_proposal.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nesi_base_proposal_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_base_proposal';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_base_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_base_proposal';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_base_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_base_proposal';
  $strongarm->value = array();
  $export['node_options_base_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_base_proposal';
  $strongarm->value = '1';
  $export['node_preview_base_proposal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_base_proposal';
  $strongarm->value = 1;
  $export['node_submitted_base_proposal'] = $strongarm;

  return $export;
}
