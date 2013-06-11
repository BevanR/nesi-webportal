#!/srv/www/platforms/scripts/drush/drush
<?php
/**
 * Hacky script to remove all spam user accounts. Assumption is that all a normally registered 
 * user is give 'researcher role'.
 *
 * Cancels all users accounts on the system that are of role 'authenticated user'
 *
 * To run: ./clean-users.php @drush-alias
 */

// Get uid of all users the have been assigned a role
$query = db_select('users_roles', 'u');
$query->fields('u', array('uid'));
$query->condition('rid' , '5' , '!=');
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
    continue; 
  }
  $user_profile = profile2_load_by_user($users['uid'], 'researcher_profile'); 
  $first_name = $user_profile->field_user_firstname['und'][0]['value'];
  $last_name = $user_profile->field_user_lastname['und'][0]['value'];

  // Keep users with first and last name profile fields empty
  if(empty($first_name) && empty($last_name)) {
    continue; 
  }

  // Not a very clever spam bot
  // First and last name the same delete!
  if($first_name === $last_name) {
    //  Delete any user that doesn't have a role
    drush_invoke_process('user-cancel ' . $users['name'] . ' -y');
  }
 }
