<?php
/**
 * @file
 * nesi_community.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function nesi_community_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '43',
  'title' => 'Community',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '7c9b0999-11df-4cb4-a139-8ffb3569f3c5',
  'type' => 'page',
  'language' => 'und',
  'created' => '1370562964',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '240cb0ee-aaaf-4fb6-80ba-ea23f5f63bd0',
  'revision_uid' => '9',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The New Zealand research community has a huge degree of diversity and vigour. In these pages, you can read some of the science outcomes from past projects, explore projects from all research disciplines and discover events to further your knowledge.</p>',
        'summary' => '',
        'format' => '2',
        'safe_value' => '<p>The New Zealand research community has a huge degree of diversity and vigour. In these pages, you can read some of the science outcomes from past projects, explore projects from all research disciplines and discover events to further your knowledge.</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '43',
  'comment_count' => '0',
  'name' => 'webscope',
  'picture' => '103',
  'data' => 'a:3:{s:7:"contact";b:0;s:17:"mimemail_textonly";b:0;s:7:"overlay";i:1;}',
  'date' => '2013-06-07 11:56:04 +1200',
);
  return $nodes;
}
