<?php
/**
 * @file
 * nesi_ft_submit_proposal_flag.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function nesi_ft_submit_proposal_flag_flag_default_flags() {
  $flags = array();
  // Exported flag: "Submit Proposal to NeSI".
  $flags['p_submit_proposal'] = array(
    'content_type' => 'node',
    'title' => 'Submit Proposal to NeSI',
    'global' => '1',
    'types' => array(
      0 => 'proposal_development_class',
      1 => 'proposal_research_class',
    ),
    'flag_short' => 'Submit Proposal',
    'flag_long' => 'This proposal will be checked by NeSI for completeness.',
    'flag_message' => '',
    'unflag_short' => 'Send Proposal back to PI for revision',
    'unflag_long' => 'This will put the proposal in a draft state for the PI to update',
    'unflag_message' => '',
    'unflag_denied_text' => '[x] Proposal Submitted',
    'link_type' => 'confirm',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '2',
        2 => '4',
      ),
      'unflag' => array(
        0 => '3',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'flag_confirmation' => 'Are you sure you want to submit this for review?',
    'unflag_confirmation' => 'Are you sure? This will send the proposal back to draft state for the PI.',
    'module' => 'nesi_ft_submit_proposal_flag',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}
