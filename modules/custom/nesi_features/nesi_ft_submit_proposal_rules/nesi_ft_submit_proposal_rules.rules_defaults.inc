<?php
/**
 * @file
 * nesi_ft_submit_proposal_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function nesi_ft_submit_proposal_rules_default_rules_configuration() {
  $items = array();
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
        },
        { "mail" : {
            "to" : "[flagged-node:field-pdc-pi-email]",
            "subject" : "Confirmation of your NeSI HPC application",
            "message" : "Dear [site:current-user]\\r\\n\\r\\nThis email confirms your application for access to NeSI\\u0027s HPC facilities via the Proposal Development allocation class. The application will be reviewed by the Technical Qualifications Panel at the close of the call. We hope to get back to you with a response around the middle of June.\\r\\n\\r\\nDetails about the process are available via our Access Policy: http:\\/\\/nesi.org.nz\\/access-policy.\\r\\n\\r\\nDo let us know if you have any further questions.\\r\\n\\r\\n[NeSI Support Contact Details]",
            "language" : [ "" ]
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
      "DO" : []
    }
  }');
  $items['rules_prc_proposal_submitted'] = entity_import('rules_config', '{ "rules_prc_proposal_submitted" : {
      "LABEL" : "prc_proposal_submitted",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_prc_check_proposal" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_prc_status" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "flagged-node:field-prc-status" ],
            "value" : "Check Proposal"
          }
        },
        { "mail" : {
            "to" : "[flagged-node:field-prc-pi-email]",
            "subject" : "Confirmation of your NeSI HPC application",
            "message" : "Dear [site:current-user]\\r\\n\\r\\nThis email confirms your application for access to NeSI\\u0027s HPC facilities via the Research Proposal allocation class. The application will be reviewed by the Technical Qualifications Panel at the close of the call. We hope to get back to you with a response around the middle of June.\\r\\n\\r\\nDetails about the process are available via our Access Policy: http:\\/\\/nesi.org.nz\\/access-policy.\\r\\n\\r\\nDo let us know if you have any further questions.\\r\\n\\r\\n[NeSI Support Contact Details]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_prc_proposal_unsubmitted'] = entity_import('rules_config', '{ "rules_prc_proposal_unsubmitted" : {
      "LABEL" : "prc_proposal_unsubmitted",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_unflagged_prc_check_proposal" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_prc_status" } }
      ],
      "DO" : []
    }
  }');
  return $items;
}
