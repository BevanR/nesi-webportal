<?php
/**
 * @file
 * nesi_technical_review.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function nesi_technical_review_flag_default_flags() {
  $flags = array();
  // Exported flag: "Assign Proposal Development Allocation".
  $flags['pdc_assign_allocation'] = array(
    'content_type' => 'node',
    'title' => 'Assign Proposal Development Allocation',
    'global' => '1',
    'types' => array(
      0 => 'proposal_development_class',
    ),
    'flag_short' => 'Assign Proposal Development Allocation',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Rollback Status to Assign Rank',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '9',
      ),
      'unflag' => array(
        0 => '3',
        1 => '9',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'nesi_technical_review',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Assign Proposal Development Rank".
  $flags['pdc_assign_rank'] = array(
    'content_type' => 'node',
    'title' => 'Assign Proposal Development Rank',
    'global' => '1',
    'types' => array(
      0 => 'proposal_development_class',
    ),
    'flag_short' => 'Assign Proposal Development Rank',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Rollback Status to TQP Review',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '8',
      ),
      'unflag' => array(
        0 => '3',
        1 => '8',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'nesi_technical_review',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Submit Proposal to NeSI".
  $flags['pdc_check_proposal'] = array(
    'content_type' => 'node',
    'title' => 'Submit Proposal to NeSI',
    'global' => '1',
    'types' => array(
      0 => 'proposal_development_class',
    ),
    'flag_short' => 'Submit Proposal to NeSI',
    'flag_long' => 'This proposal will be checked by NeSI for completeness.',
    'flag_message' => '',
    'unflag_short' => 'Send Proposal back to PI for revision',
    'unflag_long' => 'This will put the proposal in a draft state for the PI to update',
    'unflag_message' => '',
    'unflag_denied_text' => 'This proposal is now with NeSI - check the status for updates.',
    'link_type' => 'confirm',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '4',
        2 => '5',
      ),
      'unflag' => array(
        0 => '3',
        1 => '5',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'flag_confirmation' => 'Are you sure you want to submit this for review?',
    'unflag_confirmation' => 'Are you sure? This will send the proposal back to draft state for the PI.',
    'api_version' => 2,
    'module' => 'nesi_technical_review',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Confirm Proposal Development for Technical Review".
  $flags['pdc_confirm_proposal'] = array(
    'content_type' => 'node',
    'title' => 'Confirm Proposal Development for Technical Review',
    'global' => '1',
    'types' => array(
      0 => 'proposal_development_class',
    ),
    'flag_short' => 'Confirm Proposal for Technical Review',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Rollback Status to Check Proposal',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '7',
      ),
      'unflag' => array(
        0 => '3',
        1 => '7',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'nesi_technical_review',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Submit Proposal Development for Peer Technical Review".
  $flags['pdc_peer_technical_review'] = array(
    'content_type' => 'node',
    'title' => 'Submit Proposal Development for Peer Technical Review',
    'global' => '1',
    'types' => array(
      0 => 'proposal_development_class',
    ),
    'flag_short' => 'Submit Proposal Development for Peer Technical Review',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Rollback Status to Technical Review',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '5',
      ),
      'unflag' => array(
        0 => '3',
        1 => '5',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'nesi_technical_review',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Assign Proposal Development Outcome".
  $flags['pdc_proposal_outcome'] = array(
    'content_type' => 'node',
    'title' => 'Assign Proposal Development Outcome',
    'global' => '1',
    'types' => array(
      0 => 'proposal_development_class',
    ),
    'flag_short' => 'Assign Proposal Development Outcome',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Rollback Status to Assign Allocation',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '10',
      ),
      'unflag' => array(
        0 => '3',
        1 => '10',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'nesi_technical_review',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Submit Proposal Development for Technical Review".
  $flags['pdc_technical_review'] = array(
    'content_type' => 'node',
    'title' => 'Submit Proposal Development for Technical Review',
    'global' => '1',
    'types' => array(
      0 => 'proposal_development_class',
    ),
    'flag_short' => 'Submit Proposal Development for Technical Review',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Rollback Status to Proposal Confirmed',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '5',
      ),
      'unflag' => array(
        0 => '3',
        1 => '5',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'nesi_technical_review',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Submit Proposal Development for TQP Review".
  $flags['pdc_tqp_review'] = array(
    'content_type' => 'node',
    'title' => 'Submit Proposal Development for TQP Review',
    'global' => '1',
    'types' => array(
      0 => 'proposal_development_class',
    ),
    'flag_short' => 'Submit Proposal Development for TQP Review',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Rollback Status to Peer Technical Review',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'roles' => array(
      'flag' => array(
        0 => '3',
        1 => '5',
      ),
      'unflag' => array(
        0 => '3',
        1 => '5',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'nesi_technical_review',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;
}
