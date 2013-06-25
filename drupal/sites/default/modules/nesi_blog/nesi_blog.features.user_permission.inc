<?php
/**
 * @file
 * nesi_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nesi_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'nesi administrator',
      3 => 'website engineer',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'website engineer',
    ),
    'module' => 'comment',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'nesi administrator',
      3 => 'website engineer',
    ),
    'module' => 'comment',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'website engineer',
    ),
    'module' => 'comment',
  );

  return $permissions;
}
