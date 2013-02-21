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
  $output = '';
  $output .= '<ul id="user-menu" class="menu nav dropdown">';
  $output .= '<li>';
  $output .= '<a href="#" class="dropdown-toggle" data-toggle="dropdown" data-target="#">User Menu<span class="caret"></span></a>';
  $output .= '<ul class="dropdown-menu">' . $variables['tree'] . '</ul>';
  $output .= '</li>';
  $output .= '</ul>';
  return $output;
}

function nesi_bootstrap_menu_tree__menu_researcher_menu($variables) {
  global $user;

  $user_data = $user;

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
  $output = l($element['#title'] . '<span>' . $element['#localized_options']['attributes']['title'] . '</span>', $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}