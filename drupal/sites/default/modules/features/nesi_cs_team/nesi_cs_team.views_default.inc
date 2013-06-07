<?php
/**
 * @file
 * nesi_cs_team.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nesi_cs_team_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'computational_science_team';
  $view->description = '';
  $view->tag = 'nesi';
  $view->base_table = 'users';
  $view->human_name = 'Computational Science Team';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Profile */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['ui_name'] = 'Profile';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'researcher_profile' => 'researcher_profile',
  );
  /* Relationship: Experience */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['ui_name'] = 'Experience';
  $handler->display->display_options['relationships']['profile']['label'] = 'Experience';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'expertise' => 'expertise',
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '<a name="user-[uid]"></a>';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Rendered User */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'computation_science_team';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Profile: Computational Science Team Member (field_user_is_cs_team_member) */
  $handler->display->display_options['filters']['field_user_is_cs_team_member_value']['id'] = 'field_user_is_cs_team_member_value';
  $handler->display->display_options['filters']['field_user_is_cs_team_member_value']['table'] = 'field_data_field_user_is_cs_team_member';
  $handler->display->display_options['filters']['field_user_is_cs_team_member_value']['field'] = 'field_user_is_cs_team_member_value';
  $handler->display->display_options['filters']['field_user_is_cs_team_member_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_user_is_cs_team_member_value']['value'] = array(
    1 => '1',
  );

  /* Display: Profiles */
  $handler = $view->new_display('block', 'Profiles', 'profiles');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'View: Computational Science Team Profiles';

  /* Display: Anchor links */
  $handler = $view->new_display('block', 'Anchor links', 'anchor_links');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'The Team:';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Profile: City */
  $handler->display->display_options['fields']['field_user_city']['id'] = 'field_user_city';
  $handler->display->display_options['fields']['field_user_city']['table'] = 'field_data_field_user_city';
  $handler->display->display_options['fields']['field_user_city']['field'] = 'field_user_city';
  $handler->display->display_options['fields']['field_user_city']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_user_city']['label'] = '';
  $handler->display->display_options['fields']['field_user_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_city']['alter']['text'] = '<strong>:</strong> [field_user_city]';
  $handler->display->display_options['fields']['field_user_city']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<strong>[name]</strong>[field_user_city]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '#user-[uid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['block_description'] = 'View: Computational Science Team Anchor Links';
  $export['computational_science_team'] = $view;

  return $export;
}
