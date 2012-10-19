<?php

function nesi_bootstrap_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    $breadcrumbs = '<ol>';
    
    $count = count($breadcrumb) - 1;
    foreach($breadcrumb as $key => $value) {
      if($count != $key) {
        $breadcrumbs .= '<li>'.$value.'</li>';
      }else{
        $breadcrumbs .= '<li>'.$value.'</li>';
      }
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
