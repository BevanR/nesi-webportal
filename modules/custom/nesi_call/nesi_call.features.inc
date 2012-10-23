<?php
/**
 * @file
 * nesi_call.features.inc
 */

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
