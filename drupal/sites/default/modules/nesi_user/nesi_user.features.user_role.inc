<?php
/**
 * @file
 * nesi_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function nesi_user_user_default_roles() {
  $roles = array();

  // Exported role: advisor.
  $roles['advisor'] = array(
    'name' => 'advisor',
    'weight' => '4',
  );

  // Exported role: nesi administrator.
  $roles['nesi administrator'] = array(
    'name' => 'nesi administrator',
    'weight' => '5',
  );

  // Exported role: researcher.
  $roles['researcher'] = array(
    'name' => 'researcher',
    'weight' => '2',
  );

  // Exported role: reviewer.
  $roles['reviewer'] = array(
    'name' => 'reviewer',
    'weight' => '3',
  );

  // Exported role: website engineer.
  $roles['website engineer'] = array(
    'name' => 'website engineer',
    'weight' => '6',
  );

  return $roles;
}
