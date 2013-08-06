<?php
/**
 * @file
 * nesi_community.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function nesi_community_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block Community Links';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'block_community_links';
  $fe_block_boxes->body = '<ul class="community-links"><li class="story"><a href="/news">All news</a></li><li class="event"><a href="/events">All events</a></li><li class="blog"><a href="/blogs">All blogs</a></li></ul>';

  $export['block_community_links'] = $fe_block_boxes;

  return $export;
}
