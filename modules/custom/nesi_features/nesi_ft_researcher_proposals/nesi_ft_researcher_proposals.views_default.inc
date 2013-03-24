<?php
/**
 * @file
 * nesi_ft_researcher_proposals.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nesi_ft_researcher_proposals_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'researcher_my_proposals';
  $view->description = 'Summary of moderated and unmoderated site content.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'researcher_my_proposals';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'My Proposals';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 20;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'changed' => 'changed',
    'name' => 'name',
    'view_node' => 'view_node',
    'edit_node' => 'edit_node',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'type' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'view_node' => array(
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
    'timestamp' => array(
      'separator' => '',
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'text';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = 'Review the status of your proposals below.';
  $handler->display->display_options['header']['text']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'text';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'No proposals have been submitted. To submit a proposal, click \'Add Proposal\' from the navigation menu.';
  $handler->display->display_options['empty']['text']['format'] = 'filtered_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/view';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  /* Field: Content: Desired HPC Platform */
  $handler->display->display_options['fields']['field_prc_proposed_hpc_platform']['id'] = 'field_prc_proposed_hpc_platform';
  $handler->display->display_options['fields']['field_prc_proposed_hpc_platform']['table'] = 'field_data_field_prc_proposed_hpc_platform';
  $handler->display->display_options['fields']['field_prc_proposed_hpc_platform']['field'] = 'field_prc_proposed_hpc_platform';
  /* Field: Content: Desired HPC Platform */
  $handler->display->display_options['fields']['field_pdc_proposed_hpc_platform']['id'] = 'field_pdc_proposed_hpc_platform';
  $handler->display->display_options['fields']['field_pdc_proposed_hpc_platform']['table'] = 'field_data_field_pdc_proposed_hpc_platform';
  $handler->display->display_options['fields']['field_pdc_proposed_hpc_platform']['field'] = 'field_pdc_proposed_hpc_platform';
  /* Field: Content: CPU core Hours */
  $handler->display->display_options['fields']['field_prc_cpu_core_hours']['id'] = 'field_prc_cpu_core_hours';
  $handler->display->display_options['fields']['field_prc_cpu_core_hours']['table'] = 'field_data_field_prc_cpu_core_hours';
  $handler->display->display_options['fields']['field_prc_cpu_core_hours']['field'] = 'field_prc_cpu_core_hours';
  $handler->display->display_options['fields']['field_prc_cpu_core_hours']['label'] = 'CPU Hours';
  $handler->display->display_options['fields']['field_prc_cpu_core_hours']['element_label_colon'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_pdc_start_date']['id'] = 'field_pdc_start_date';
  $handler->display->display_options['fields']['field_pdc_start_date']['table'] = 'field_data_field_pdc_start_date';
  $handler->display->display_options['fields']['field_pdc_start_date']['field'] = 'field_pdc_start_date';
  $handler->display->display_options['fields']['field_pdc_start_date']['label'] = 'Start';
  $handler->display->display_options['fields']['field_pdc_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdc_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_prc_start_date']['id'] = 'field_prc_start_date';
  $handler->display->display_options['fields']['field_prc_start_date']['table'] = 'field_data_field_prc_start_date';
  $handler->display->display_options['fields']['field_prc_start_date']['field'] = 'field_prc_start_date';
  $handler->display->display_options['fields']['field_prc_start_date']['label'] = 'Start';
  $handler->display->display_options['fields']['field_prc_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prc_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'proposal_development_class' => 'proposal_development_class',
    'proposal_research_class' => 'proposal_research_class',
  );

  /* Display: My Proposals */
  $handler = $view->new_display('page', 'My Proposals', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'researcher-my-proposals';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My Proposals';
  $handler->display->display_options['menu']['description'] = 'Summary of site content';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $export['researcher_my_proposals'] = $view;

  return $export;
}
