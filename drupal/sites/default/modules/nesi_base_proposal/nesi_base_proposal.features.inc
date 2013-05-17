<?php
/**
 * @file
 * nesi_base_proposal.features.inc
 */

/**
 * Implements hook_node_info().
 */
function nesi_base_proposal_node_info() {
  $items = array(
    'base_proposal' => array(
      'name' => t('Base Proposal'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
