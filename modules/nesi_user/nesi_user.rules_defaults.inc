<?php
/**
 * @file
 * nesi_user.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function nesi_user_default_rules_configuration() {
  $items = array();
  $items['rules_set_researcher_role'] = entity_import('rules_config', '{ "rules_set_researcher_role" : {
      "LABEL" : "set_researcher_role",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ]
    }
  }');
  return $items;
}
