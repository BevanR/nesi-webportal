<?php
/**
 * @file
 * nesi_slideshow.features.inc
 */

/**
 * Implements hook_node_info().
 */
function nesi_slideshow_node_info() {
  $items = array(
    'slideshow_item' => array(
      'name' => t('Slideshow Item'),
      'base' => 'node_content',
      'description' => t('Content type used to create slideshow items on the NeSI homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
