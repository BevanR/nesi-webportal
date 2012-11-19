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

/*
function nesi_bootstrap_menu_tree($variables) {
  kpr($variables);
  return '<ul class="menu">' . $variables['tree'] . '</ul>';
}*/
