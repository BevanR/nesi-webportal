<?php
/**
 * @file
 * nesi_ft_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nesi_ft_homepage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
