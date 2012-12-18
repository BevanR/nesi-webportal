<?php
/**
 * @file
 * nesi_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nesi_slideshow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nesi_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'nesi_slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Homepage Hero Banner';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Banner Background Colour */
  $handler->display->display_options['fields']['field_ns_banner_bg_color']['id'] = 'field_ns_banner_bg_color';
  $handler->display->display_options['fields']['field_ns_banner_bg_color']['table'] = 'field_data_field_ns_banner_bg_color';
  $handler->display->display_options['fields']['field_ns_banner_bg_color']['field'] = 'field_ns_banner_bg_color';
  $handler->display->display_options['fields']['field_ns_banner_bg_color']['element_default_classes'] = FALSE;
  /* Field: Content: Banner Image */
  $handler->display->display_options['fields']['field_ns_banner_image']['id'] = 'field_ns_banner_image';
  $handler->display->display_options['fields']['field_ns_banner_image']['table'] = 'field_data_field_ns_banner_image';
  $handler->display->display_options['fields']['field_ns_banner_image']['field'] = 'field_ns_banner_image';
  $handler->display->display_options['fields']['field_ns_banner_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ns_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ns_banner_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Link Colour */
  $handler->display->display_options['fields']['field_ns_link_color']['id'] = 'field_ns_link_color';
  $handler->display->display_options['fields']['field_ns_link_color']['table'] = 'field_data_field_ns_link_color';
  $handler->display->display_options['fields']['field_ns_link_color']['field'] = 'field_ns_link_color';
  $handler->display->display_options['fields']['field_ns_link_color']['element_default_classes'] = FALSE;
  /* Field: Content: Link Target Node */
  $handler->display->display_options['fields']['field_ns_link_target_node']['id'] = 'field_ns_link_target_node';
  $handler->display->display_options['fields']['field_ns_link_target_node']['table'] = 'field_data_field_ns_link_target_node';
  $handler->display->display_options['fields']['field_ns_link_target_node']['field'] = 'field_ns_link_target_node';
  $handler->display->display_options['fields']['field_ns_link_target_node']['element_default_classes'] = FALSE;
  /* Field: Content: Link Title */
  $handler->display->display_options['fields']['field_ns_link_title']['id'] = 'field_ns_link_title';
  $handler->display->display_options['fields']['field_ns_link_title']['table'] = 'field_data_field_ns_link_title';
  $handler->display->display_options['fields']['field_ns_link_title']['field'] = 'field_ns_link_title';
  $handler->display->display_options['fields']['field_ns_link_title']['element_default_classes'] = FALSE;
  /* Field: Content: Primary Title */
  $handler->display->display_options['fields']['field_ns_title_primary']['id'] = 'field_ns_title_primary';
  $handler->display->display_options['fields']['field_ns_title_primary']['table'] = 'field_data_field_ns_title_primary';
  $handler->display->display_options['fields']['field_ns_title_primary']['field'] = 'field_ns_title_primary';
  $handler->display->display_options['fields']['field_ns_title_primary']['element_default_classes'] = FALSE;
  /* Field: Content: Secondary Title */
  $handler->display->display_options['fields']['field_ns_title_secondary']['id'] = 'field_ns_title_secondary';
  $handler->display->display_options['fields']['field_ns_title_secondary']['table'] = 'field_data_field_ns_title_secondary';
  $handler->display->display_options['fields']['field_ns_title_secondary']['field'] = 'field_ns_title_secondary';
  $handler->display->display_options['fields']['field_ns_title_secondary']['element_default_classes'] = FALSE;
  /* Field: Content: Primary Title Background Colour */
  $handler->display->display_options['fields']['field_ns_primary_bg_color']['id'] = 'field_ns_primary_bg_color';
  $handler->display->display_options['fields']['field_ns_primary_bg_color']['table'] = 'field_data_field_ns_primary_bg_color';
  $handler->display->display_options['fields']['field_ns_primary_bg_color']['field'] = 'field_ns_primary_bg_color';
  $handler->display->display_options['fields']['field_ns_primary_bg_color']['element_default_classes'] = FALSE;
  /* Field: Content: Secondary Title Background Colour */
  $handler->display->display_options['fields']['field_ns_secondary_bg_color']['id'] = 'field_ns_secondary_bg_color';
  $handler->display->display_options['fields']['field_ns_secondary_bg_color']['table'] = 'field_data_field_ns_secondary_bg_color';
  $handler->display->display_options['fields']['field_ns_secondary_bg_color']['field'] = 'field_ns_secondary_bg_color';
  $handler->display->display_options['fields']['field_ns_secondary_bg_color']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_item' => 'slideshow_item',
  );
  $export['nesi_slideshow'] = $view;

  return $export;
}
