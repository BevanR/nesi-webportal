<?php
/**
 * @file
 * nesi_cs_team.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nesi_cs_team_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nesi_cs_team_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function nesi_cs_team_image_default_styles() {
  $styles = array();

  // Exported image style: 300x160.
  $styles['300x160'] = array(
    'name' => '300x160',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '300',
          'height' => '160',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_profile2_type().
 */
function nesi_cs_team_default_profile2_type() {
  $items = array();
  $items['expertise'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "expertise",
    "label" : "Experience and Expertise",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
