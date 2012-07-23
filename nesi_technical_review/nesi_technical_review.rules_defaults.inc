<?php
/**
 * @file
 * nesi_technical_review.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function nesi_technical_review_default_rules_configuration() {
  $items = array();
  $items['rules_pdc_assign_allocation'] = entity_import('rules_config', '{ "rules_pdc_assign_allocation" : {
      "LABEL" : "pdc_assign_allocation",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "flag" ],
      "ON" : [ "flag_flagged_pdc_assign_allocation" ],
      "DO" : []
    }
  }');
  $items['rules_pdc_assign_outcome'] = entity_import('rules_config', '{ "rules_pdc_assign_outcome" : {
      "LABEL" : "pdc_assign_outcome",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "flag" ],
      "ON" : [ "flag_flagged_pdc_proposal_outcome" ],
      "DO" : []
    }
  }');
  $items['rules_pdc_assign_rank'] = entity_import('rules_config', '{ "rules_pdc_assign_rank" : {
      "LABEL" : "pdc_assign_rank",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "flag" ],
      "ON" : [ "flag_flagged_pdc_assign_rank" ],
      "DO" : []
    }
  }');
  $items['rules_pdc_confirm_proposal'] = entity_import('rules_config', '{ "rules_pdc_confirm_proposal" : {
      "LABEL" : "pdc_confirm_proposal",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_pdc_confirm_proposal" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_pdc_status" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "flagged-node:field-pdc-status" ],
            "value" : "Proposal Receipt Confirmation"
          }
        }
      ]
    }
  }');
  $items['rules_pdc_proposal_submitted'] = entity_import('rules_config', '{ "rules_pdc_proposal_submitted" : {
      "LABEL" : "pdc_proposal_submitted",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_pdc_check_proposal" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_pdc_status" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "flagged-node:field-pdc-status" ],
            "value" : "Check Proposal"
          }
        }
      ]
    }
  }');
  $items['rules_pdc_proposal_unsubmitted'] = entity_import('rules_config', '{ "rules_pdc_proposal_unsubmitted" : {
      "LABEL" : "pdc_proposal_unsubmitted",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_unflagged_pdc_check_proposal" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_pdc_status" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "flagged-node:field-pdc-status" ],
            "value" : "Submit Proposal"
          }
        }
      ]
    }
  }');
  $items['rules_pdc_set_peer_technical_review'] = entity_import('rules_config', '{ "rules_pdc_set_peer_technical_review" : {
      "LABEL" : "pdc_set_peer_technical_review",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php", "flag" ],
      "ON" : [ "flag_flagged_pdc_peer_technical_review" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_pdc_status" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "flagged-node:field-pdc-status" ],
            "value" : "Peer Technical Review"
          }
        },
        { "php_eval" : { "code" : "$uids = array();\\r\\n\\r\\n\\/\\/ Locate specific reviewer role id\\r\\n$reviewer_role = user_role_load_by_name(\\u0027reviewer\\u0027);\\r\\n\\r\\ndpm($reviewer_role);\\r\\n\\r\\n\\/\\/ Continue only if reviewer role exists\\r\\nif ($reviewer_role \\u003C\\u003E FALSE) {\\r\\n\\r\\n  \\/\\/ Query to locate users by particular role id this should possible be linked to a permission\\r\\n  $query = \\u0027SELECT DISTINCT(ur.uid) \\r\\n    FROM {users_roles} AS ur\\r\\n    WHERE ur.rid IN (:rids)\\u0027;\\r\\n  $result = db_query($query, array(\\u0027:rids\\u0027 =\\u003E array($reviewer_role-\\u003Erid)));\\r\\n\\r\\n  \\/\\/ Collect users by role\\r\\n  foreach ($result as $row) {\\r\\n    $uids[] = $row-\\u003Euid;\\r\\n  }\\r\\n\\r\\n  if (count($uids) \\u003E 0) {\\r\\n\\r\\n    \\/\\/ Get user objects\\r\\n    $users = user_load_multiple($uids);\\r\\n    \\/\\/ List users for debugging\\r\\n    dpm($users);\\r\\n\\r\\n    \\/\\/ Assign random reviewer to peer reviewer\\r\\n    $peer_reviewer = array_rand($users);\\r\\n\\r\\n    dpm($peer_reviewer);\\r\\n    \\/\\/ Check user is not already assigned as Lead\\/Peer Reviewer and is NOT superadmin\\r\\n    \\r\\n    dpm($flagged_node);\\r\\n\\r\\n    $the_node = node_load($flagged_node-\\u003Enid);\\r\\n    $the_node-\\u003Efield_peer_reviewer[LANGUAGE_NONE][0][\\u0027uid\\u0027] = $peer_reviewer;\\r\\n\\r\\n    node_save($the_node);\\r\\n\\r\\n  }\\r\\n}\\r\\nelse {\\r\\n  \\r\\n  \\/\\/ Output to watchdog - unable to locate role: reviewer\\r\\n\\r\\n}\\r\\n" } },
        { "mail" : {
            "to" : "\\u003C?php\\r\\n\\r\\n\\/\\/ Load reviewer\\r\\n$the_node = node_load($flagged_node-\\u003Enid);\\r\\n$peer_reviewer = user_load($the_node-\\u003Efield_peer_reviewer[LANGUAGE_NONE][0][\\u0027uid\\u0027]);\\r\\n\\/\\/dpm($peer_reviewer);\\r\\necho($peer_reviewer-\\u003Email);\\r\\n?\\u003E",
            "subject" : "Peer Reviewer Assigned",
            "message" : "You have been assigned as a peer reviewer.\\r\\n\\r\\n[link to node]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_pdc_set_technical_review'] = entity_import('rules_config', '{ "rules_pdc_set_technical_review" : {
      "LABEL" : "pdc_set_technical_review",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php", "flag" ],
      "ON" : [ "flag_flagged_pdc_technical_review" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_pdc_status" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "flagged-node:field-pdc-status" ],
            "value" : "Technical Review"
          }
        },
        { "php_eval" : { "code" : "$uids = array();\\r\\n\\r\\n\\/\\/ Locate specific reviewer role id\\r\\n$reviewer_role = user_role_load_by_name(\\u0027reviewer\\u0027);\\r\\n\\r\\ndpm($reviewer_role);\\r\\n\\r\\n\\/\\/ Continue only if reviewer role exists\\r\\nif ($reviewer_role \\u003C\\u003E FALSE) {\\r\\n\\r\\n  \\/\\/ Query to locate users by particular role id this should possible be linked to a permission\\r\\n  $query = \\u0027SELECT DISTINCT(ur.uid) \\r\\n    FROM {users_roles} AS ur\\r\\n    WHERE ur.rid IN (:rids)\\u0027;\\r\\n  $result = db_query($query, array(\\u0027:rids\\u0027 =\\u003E array($reviewer_role-\\u003Erid)));\\r\\n\\r\\n  \\/\\/ Collect users by role\\r\\n  foreach ($result as $row) {\\r\\n    $uids[] = $row-\\u003Euid;\\r\\n  }\\r\\n\\r\\n  if (count($uids) \\u003E 0) {\\r\\n\\r\\n    \\/\\/ Get user objects\\r\\n    $users = user_load_multiple($uids);\\r\\n    \\/\\/ List users for debugging\\r\\n    dpm($users);\\r\\n\\r\\n    \\/\\/ Assign random reviewer to lead reviewer\\r\\n    $lead_reviewer = array_rand($users);\\r\\n\\r\\n    dpm($lead_reviewer);\\r\\n    \\/\\/ Check user is not already assigned as Lead Reviewer and is NOT superadmin\\r\\n    \\r\\n    dpm($flagged_node);\\r\\n\\r\\n    $the_node = node_load($flagged_node-\\u003Enid);\\r\\n    $the_node-\\u003Efield_lead_reviewer[LANGUAGE_NONE][0][\\u0027uid\\u0027] = $lead_reviewer;\\r\\n\\r\\n    node_save($the_node);\\r\\n\\r\\n  }\\r\\n}\\r\\nelse {\\r\\n  \\r\\n  \\/\\/ Output to watchdog - unable to locate role: reviewer\\r\\n\\r\\n}\\r\\n" } },
        { "mail" : {
            "to" : "\\u003C?php\\r\\n\\r\\n\\/\\/ Load reviewer\\r\\n$the_node = node_load($flagged_node-\\u003Enid);\\r\\n$lead_reviewer = user_load($the_node-\\u003Efield_lead_reviewer[LANGUAGE_NONE][0][\\u0027uid\\u0027]);\\r\\n\\r\\ndpm($lead_reviewer);\\r\\necho($lead_reviewer-\\u003Email);\\r\\n\\r\\n?\\u003E",
            "subject" : "Lead Reviewer Assigned",
            "message" : "Email to Lead Reviewer",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_pdc_set_tqp_review'] = entity_import('rules_config', '{ "rules_pdc_set_tqp_review" : {
      "LABEL" : "pdc_set_tqp_review",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "flag" ],
      "ON" : [ "flag_unflagged_pdc_tqp_review" ],
      "DO" : []
    }
  }');
  $items['rules_pdc_unconfirm_proposal'] = entity_import('rules_config', '{ "rules_pdc_unconfirm_proposal" : {
      "LABEL" : "pdc_unconfirm_proposal",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_unflagged_pdc_confirm_proposal" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_pdc_status" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "flagged-node:field-pdc-status" ],
            "value" : "Check Proposal"
          }
        }
      ]
    }
  }');
  $items['rules_pdc_unset_assign_allocation'] = entity_import('rules_config', '{ "rules_pdc_unset_assign_allocation" : {
      "LABEL" : "pdc_unset_assign_allocation",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "flag" ],
      "ON" : [ "flag_unflagged_pdc_assign_allocation" ],
      "DO" : []
    }
  }');
  $items['rules_pdc_unset_assign_rank'] = entity_import('rules_config', '{ "rules_pdc_unset_assign_rank" : {
      "LABEL" : "pdc_unset_assign_rank",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "flag" ],
      "ON" : [ "flag_unflagged_pdc_assign_rank" ],
      "DO" : []
    }
  }');
  $items['rules_pdc_unset_peer_technical_review'] = entity_import('rules_config', '{ "rules_pdc_unset_peer_technical_review" : {
      "LABEL" : "pdc_unset_peer_technical_review",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "flag" ],
      "ON" : [ "flag_unflagged_pdc_peer_technical_review" ],
      "DO" : []
    }
  }');
  $items['rules_pdc_unset_technical_review'] = entity_import('rules_config', '{ "rules_pdc_unset_technical_review" : {
      "LABEL" : "pdc_unset_technical_review",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_unflagged_pdc_technical_review" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_pdc_status" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "flagged-node:field-pdc-status" ],
            "value" : "Proposal Receipt Confirmation"
          }
        }
      ]
    }
  }');
  $items['rules_pdc_unset_tqp_review'] = entity_import('rules_config', '{ "rules_pdc_unset_tqp_review" : {
      "LABEL" : "pdc_unset_tqp_review",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "flag" ],
      "ON" : [ "flag_unflagged_pdc_tqp_review" ],
      "DO" : []
    }
  }');
  return $items;
}
