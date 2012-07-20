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

  // Exported role: researcher.
  $roles['researcher'] = array(
    'name' => 'researcher',
    'weight' => '3',
  );

  return $roles;
}
