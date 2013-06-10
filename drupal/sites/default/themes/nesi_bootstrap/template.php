<?php

function nesi_bootstrap_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    $breadcrumbs = '<ol>';
    
    foreach($breadcrumb as $key => $value) {
        $breadcrumbs .= '<li>'.$value.'</li>';
    }
    
    $current_page_title = drupal_get_title();
    if (!empty($current_page_title)) {
      $breadcrumbs .= '<li>'.$current_page_title.'</li>';
    }
    $breadcrumbs .= '</ol>';
    
    return $breadcrumbs;
  }
}

function nesi_bootstrap_menu_tree__user_menu($variables) {
  
  global $base_url;
  global $user;
  $user_data = user_load($user->uid);
  $profile_data = profile2_load_by_user($user_data->uid);

  $admin_links = '';
  if (in_array('nesi-admin', $user_data->roles) || in_array('administrator', $user_data->roles )) {
    $admin_links .= '<li><a href="'.$base_url.'/nesi-config">Administration Dashboard</a></li>';
  } 

  $output = '';
  $output .= '<ul id="nesi-user-profile-dropdown" class="dropdown-menu pull-right">';
  $output .= '<li id="nesi-user-picture"><div class="nesi-user-picture"><div class="pull-left">'.theme('user_picture',  array('account' => $user)).'</div>
              <h2>' . format_username($user_data) . '</h2>
              <h3>Institution</h3>
              <p>'.$profile_data['researcher_profile']->field_user_institution[LANGUAGE_NONE][0]['value'].'</p>
              <p><em>Member for ' . format_interval(REQUEST_TIME - $user_data->created) . '</em></p>
              </div></li>';
  $output .=  $admin_links;
  $output .=  $variables['tree'];
  $output .= '<li id="nesi-base-actions"><ul class="nav nav-pills nesi-base-actions"><li class="pull-left"><a href="'.$base_url.'/user">Profile</a></li><li class="pull-right"><a href="/user/logout">Log out</a></li></ul></li>';
  $output .= '</ul>';
  return $output;
}

function nesi_bootstrap_menu_tree__menu_researcher_menu($variables) {
  global $user;
  $user_data = user_load($user->uid);

  $output = '';
  $output .= '<ul id="user-menu" class="menu nav dropdown">';
  $output .= '<li>';
  $output .= '<a href="#" class="dropdown-toggle" data-toggle="dropdown" data-target="#">'.format_username($user_data).'<span class="caret"></span></a>';
  $output .= '<ul class="dropdown-menu">' . $variables['tree'] . '</ul>';
  $output .= '</li>';
  $output .= '</ul>';
  return $output;
}

/*
function nesi_bootstrap_menu_tree($variables) {
  kpr($variables);
  return '<ul class="menu">' . $variables['tree'] . '</ul>';
}*/

function nesi_bootstrap_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }

  $element['#attributes']['class'][] = 'menu-' . $element['#original_link']['mlid'];
  $element['#localized_options']['html'] = TRUE;

  // Append the title attribute to the link text for bylines the main menu.
  $span = '';
  if (!empty($element['#localized_options']['attributes']['title'])) {
    $span = '<span>' . $element['#localized_options']['attributes']['title'] . '</span>';
  }

  $output = l($element['#title'] . $span, $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

function nesi_bootstrap_menu_link__main_menu(array $variables) {

  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }

  if ($element['#href'] == 'apply/nojs/create-proposal') {
    if (user_is_anonymous()) {
      $element['#localized_options']['attributes']['data-toggle'] = 'modal';
      $element['#localized_options']['attributes']['data-target'] = '#nesiLoginModal';
      $element['#localized_options']['attributes']['data-remote'] = 'false';
    }
  }
  $element['#attributes']['class'][] = 'menu-' . $element['#original_link']['mlid'];
  $element['#localized_options']['html'] = TRUE;
  $output = l($element['#title'] . '<span>' . $element['#localized_options']['attributes']['title'] . '</span>', $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

function nesi_bootstrap_preprocess_page(&$vars, $hook) {
  // Add Typekit
  drupal_add_js('http://use.typekit.net/fmw6ovn.js', 'external');
  drupal_add_js('try{Typekit.load();}catch(e){}',
    array('type' => 'inline', 'scope' => 'header', 'weight' => 5)
  );
  // Change h1 title on user profile page
  if ( arg(0) == 'user' && is_numeric(arg(1)) && !arg(3) ) {
    $vars['title'] = t('Profile');
  }
}

function nesi_bootstrap_preprocess_html(&$variables) {
  // Change h1 title on user profile page
  if ( arg(0) == 'user' && is_numeric(arg(1)) && !arg(3) ) {
    $variables['classes_array'][] = 'page-user-profile';
  }
}

/**
 * Implements hook_proprocess_node().
 */
function nesi_bootstrap_preprocess_node(&$vars) {
  $vars['may_edit'] = node_access('update', $vars['node']);
}

/**
 * Implements hook_preprocess_user_profile_category().
 *
 * Removes titles from from user profile categories.
 */
function nesi_bootstrap_preprocess_user_profile_category(&$vars) {
  unset($vars['title']);
}

/**
 * Implements hook_preprocess_user_profile_category().
 *
 * Removes titles from from profile2 entities except the 'expertise' bundle.
 */
function nesi_bootstrap_preprocess_entity(&$vars) {
  if ($vars['elements']['#entity_type'] == 'profile2') {
    if ($vars['elements']['#bundle'] != 'expertise') {
      unset($vars['title']);
    }
  }
}

/**
 * Implements hook_preprocess_field().
 */
function nesi_bootstrap_preprocess_field(&$vars) {
  if ($vars['element']['#bundle'] == 'researcher_profile') {
    // Hides labels in researcher profile fields.
    $vars['label_hidden'] = TRUE;

    // Prepends email address and "Tel:" label to telephone numbers.
    if ($vars['element']['#field_name'] == 'field_user_phone') {
      $account = user_load($vars['element']['#object']->uid);
      foreach ($vars['items'] as &$item) {
        $item['#markup'] = l($account->mail, 'mailto:' . $account->mail) . '<br /><label>' . t('Tel') . ':</label> ' . $item['#markup'];
      }
    }
  }

  // Convert new-line characters to HTML breaks.
  if ($vars['element']['#field_name'] == 'field_user_address') {
    foreach ($vars['items'] as &$item) {
      $item['#markup'] = str_replace("\n", '<br />', $item['#markup']);
    }
  }
}

/* Return the proposal status */
function nesi_bootstrap_proposal_status($nid) {
  $current_proposal = node_load($nid);
  $proposal_state = 'Draft';
  $is_flagged = FALSE;
  // Get status for display
  if (($current_proposal->type == 'proposal_development_class') || ($current_proposal->type == 'proposal_research_class')) {
    $flag = flag_get_flag('p_submit_proposal');

    if ($flag->is_flagged($current_proposal->nid)) {
      $proposal_state = 'Pending';
      $is_flagged = TRUE;
    }
  }
  return $proposal_state;
}

/* Add templates for editing proposal nodes */
function nesi_bootstrap_theme() {
  return array(
    'proposal_research_class_node_form' => array(
        'arguments' => array('form' => NULL),
        'template' => 'templates/node--proposal-research-class--edit',
        'render element' => 'form',
    ),
    'proposal_development_class_node_form' => array(
        'arguments' => array('form' => NULL),
        'template' => 'templates/node--proposal-development-class--edit',
        'render element' => 'form',
    ),
  );
}
