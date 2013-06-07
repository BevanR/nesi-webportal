#!/usr/bin/env drush              
<?php
/**
 * Remove all spam user accounts. Assumption is that all a normally registered 
 * user is give 'researcher role'.
 *
 * Cancels all users accounts on the system that are of role 'authenticated user'
 *
 * To run: ./clean-users @drush-aliase
 */

// Get uid of all users the have been assigned a role
$query = db_select('users_roles', 'u');
$query->fields('u', array('uid'));
$roles_result = $query->execute()->fetchAll(PDO::FETCH_ASSOC);

// Create a map for filtering
$role_map = array();
foreach($roles_result as $role) {
  $role_map[] =  $role['uid'];
}
$role_map = drupal_map_assoc($role_map);

// Get name and uid for all users in the system
$query = db_select('users', 'u');
$query->fields('u', array('name', 'uid'));
$result = $query->execute()->fetchAll(PDO::FETCH_ASSOC);

// Loop through all users in the system
foreach($result as $users) {
  // Look for users with a role
  if($role_map[$users['uid']]) {
    //print $users['name'] . "\n"; 
    continue; 
  }
  
  // Delete any user that doesn't have a role
  drush_invoke_process('user-cancel ' . $users['name'] . ' -y');
}
