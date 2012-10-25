<?php
/**
 * @file
 * nesi_call.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nesi_call_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_node_info().
 */
function nesi_call_node_info() {
  $items = array(
    'call' => array(
      'name' => t('Call'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
