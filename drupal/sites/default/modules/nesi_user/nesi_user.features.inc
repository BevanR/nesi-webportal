<?php
/**
 * @file
 * nesi_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nesi_user_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nesi_user_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function nesi_user_default_profile2_type() {
  $items = array();
  $items['researcher_profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "researcher_profile",
    "label" : "Researcher Profile",
    "weight" : "0",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
