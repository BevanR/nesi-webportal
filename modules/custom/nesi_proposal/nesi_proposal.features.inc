<?php
/**
 * @file
 * nesi_proposal.features.inc
 */

/**
 * Implements hook_node_info().
 */
function nesi_proposal_node_info() {
  $items = array(
    'proposal_development_class' => array(
      'name' => t('Proposal Development Class'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'proposal_research_class' => array(
      'name' => t('Proposal Research Class'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'proposal_teaching' => array(
      'name' => t('Teaching'),
      'base' => 'node_content',
      'description' => t('Teaching Proposal'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'proposal_type' => array(
      'name' => t('Proposal Type'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
