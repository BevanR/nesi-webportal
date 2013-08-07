<?php
/**
 * @file
 * nesi_landing_page.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function nesi_landing_page_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '9',
  'title' => 'Services for the Research Community',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '75b53de6-1e91-444a-9aa5-0c5000340351',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => '1373332146',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '40dbe17a-ffc5-4827-a6dd-25e9c60031e9',
  'revision_uid' => '43',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p class="p1">NeSI, New Zealand’s escience research infrastructure, provides several services to New Zealand’s research community</p>',
        'summary' => '',
        'format' => '2',
        'safe_value' => '<p class="p1">NeSI, New Zealand’s escience research infrastructure, provides several services to New Zealand’s research community</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_section_collection' => array(
    'und' => array(
      0 => array(
        'value' => '6',
        'revision_id' => '194',
      ),
      1 => array(
        'value' => '2',
        'revision_id' => '195',
      ),
      2 => array(
        'value' => '3',
        'revision_id' => '196',
      ),
      3 => array(
        'value' => '4',
        'revision_id' => '197',
      ),
      4 => array(
        'value' => '5',
        'revision_id' => '198',
      ),
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '43',
  'comment_count' => '0',
  'name' => 'Tim McNamara',
  'picture' => '0',
  'data' => 'a:3:{s:13:"form_build_id";s:37:"form-6b44dabe727415681a0a94691070a528";s:7:"contact";i:0;s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-07-09 13:09:06 +1200',
);
  $nodes[] = array(
  'uid' => '3',
  'title' => 'About us',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '0119c811-17d7-4c6d-9b9c-d09c2f8ebb10',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => '1375310444',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '9d98070c-10ea-485e-b5e0-5c1b5e4e46b0',
  'revision_uid' => '3',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>About us</p>',
        'summary' => '',
        'format' => '2',
        'safe_value' => '<p>About us</p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_section_collection' => array(),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '3',
  'comment_count' => '0',
  'name' => 'nick',
  'picture' => '0',
  'data' => 'a:3:{s:13:"form_build_id";s:37:"form-ca749b00933493b59bf791568a30da7f";s:7:"contact";i:0;s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-08-01 10:40:44 +1200',
);
  return $nodes;
}
