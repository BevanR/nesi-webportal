<?php
/**
 * @file
 * nesi_ft_registration_email.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function nesi_ft_registration_email_default_rules_configuration() {
  $items = array();
  $items['rules_send_registration_email'] = entity_import('rules_config', '{ "rules_send_registration_email" : {
      "LABEL" : "send_registration_email",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "DO" : [
        { "mail" : {
            "to" : "[site:current-user]",
            "subject" : "Welcome to the NeSI Portal",
            "message" : "[NeSI to provide welcome email content]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
