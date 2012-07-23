<?php
/**
 * @file
 * nesi_technical_review.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function nesi_technical_review_user_default_roles() {
  $roles = array();

  // Exported role: advisor.
  $roles['advisor'] = array(
    'name' => 'advisor',
    'weight' => '5',
  );

  // Exported role: researcher.
  $roles['researcher'] = array(
    'name' => 'researcher',
    'weight' => '3',
  );

  // Exported role: reviewer.
  $roles['reviewer'] = array(
    'name' => 'reviewer',
    'weight' => '4',
  );

  return $roles;
}
