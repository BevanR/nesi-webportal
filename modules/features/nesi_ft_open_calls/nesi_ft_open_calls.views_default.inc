<?php
/**
 * @file
 * nesi_ft_open_calls.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nesi_ft_open_calls_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'open_calls';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Open Calls';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Open Calls By Date';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
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
    'call' => 'call',
  );
  /* Filter criterion: Content: Override Call Schedule (field_call_schedule_open) */
  $handler->display->display_options['filters']['field_call_schedule_open_value']['id'] = 'field_call_schedule_open_value';
  $handler->display->display_options['filters']['field_call_schedule_open_value']['table'] = 'field_data_field_call_schedule_open';
  $handler->display->display_options['filters']['field_call_schedule_open_value']['field'] = 'field_call_schedule_open_value';
  $handler->display->display_options['filters']['field_call_schedule_open_value']['value'] = array(
    'open' => 'open',
  );

  /* Display: Open Calls Indefinitely */
  $handler = $view->new_display('page', 'Open Calls Indefinitely', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Open Calls Indefinitely';
  $handler->display->display_options['path'] = 'open-calls';

  /* Display: Open Calls By Date */
  $handler = $view->new_display('page', 'Open Calls By Date', 'page_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'call' => 'call',
  );
  /* Filter criterion: Content: Schedule - end date (field_call_schedule:value2) */
  $handler->display->display_options['filters']['field_call_schedule_value2']['id'] = 'field_call_schedule_value2';
  $handler->display->display_options['filters']['field_call_schedule_value2']['table'] = 'field_data_field_call_schedule';
  $handler->display->display_options['filters']['field_call_schedule_value2']['field'] = 'field_call_schedule_value2';
  $handler->display->display_options['filters']['field_call_schedule_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_call_schedule_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'open-calls-by-date';
  $export['open_calls'] = $view;

  return $export;
}
