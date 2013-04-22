<?php
/**
 * @file
 * nesi_user.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nesi_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'views',
  );

  // Exported permission: access bugherd.
  $permissions['access bugherd'] = array(
    'name' => 'access bugherd',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'researcher',
      3 => 'website engineer',
    ),
    'module' => 'bugherd',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'nesi administrator',
      3 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: access news feeds.
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: access rules debug.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'rules',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'system',
  );

  // Exported permission: access site-wide contact form.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'website engineer',
    ),
    'module' => 'contact',
  );

  // Exported permission: access user contact forms.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(),
    'module' => 'contact',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'user',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'system',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'block',
  );

  // Exported permission: administer bugherd.
  $permissions['administer bugherd'] = array(
    'name' => 'administer bugherd',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'bugherd',
  );

  // Exported permission: administer contact forms.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'contact',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'features',
  );

  // Exported permission: administer fieldgroups.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(),
    'module' => 'field_group',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer flags.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'flag',
  );

  // Exported permission: administer google analytics.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'image',
  );

  // Exported permission: administer imce.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'imce',
  );

  // Exported permission: administer jquery colorpicker.
  $permissions['administer jquery colorpicker'] = array(
    'name' => 'administer jquery colorpicker',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'jquery_colorpicker',
  );

  // Exported permission: administer mailsystem.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(),
    'module' => 'mailsystem',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer menu attributes.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(),
    'module' => 'menu_attributes',
  );

  // Exported permission: administer modernizr.
  $permissions['administer modernizr'] = array(
    'name' => 'administer modernizr',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'modernizr',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nesi rest.
  $permissions['administer nesi rest'] = array(
    'name' => 'administer nesi rest',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'nesi_rest',
  );

  // Exported permission: administer news feeds.
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'user',
  );

  // Exported permission: administer profile types.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'profile2',
  );

  // Exported permission: administer profiles.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'profile2',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shibboleth authentication.
  $permissions['administer shibboleth authentication'] = array(
    'name' => 'administer shibboleth authentication',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'shib_auth',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'views',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'rules',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'user',
  );

  // Exported permission: create asset content.
  $permissions['create asset content'] = array(
    'name' => 'create asset content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: create base_proposal content.
  $permissions['create base_proposal content'] = array(
    'name' => 'create base_proposal content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: create casestudy content.
  $permissions['create casestudy content'] = array(
    'name' => 'create casestudy content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: create event content.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: create proposal_development_class content.
  $permissions['create proposal_development_class content'] = array(
    'name' => 'create proposal_development_class content',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: create proposal_research_class content.
  $permissions['create proposal_research_class content'] = array(
    'name' => 'create proposal_research_class content',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: create slideshow_item content.
  $permissions['create slideshow_item content'] = array(
    'name' => 'create slideshow_item content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: create story content.
  $permissions['create story content'] = array(
    'name' => 'create story content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'path',
  );

  // Exported permission: delete any asset content.
  $permissions['delete any asset content'] = array(
    'name' => 'delete any asset content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any base_proposal content.
  $permissions['delete any base_proposal content'] = array(
    'name' => 'delete any base_proposal content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any casestudy content.
  $permissions['delete any casestudy content'] = array(
    'name' => 'delete any casestudy content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any event content.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any proposal_development_class content.
  $permissions['delete any proposal_development_class content'] = array(
    'name' => 'delete any proposal_development_class content',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any proposal_research_class content.
  $permissions['delete any proposal_research_class content'] = array(
    'name' => 'delete any proposal_research_class content',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any slideshow_item content.
  $permissions['delete any slideshow_item content'] = array(
    'name' => 'delete any slideshow_item content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any story content.
  $permissions['delete any story content'] = array(
    'name' => 'delete any story content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own asset content.
  $permissions['delete own asset content'] = array(
    'name' => 'delete own asset content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own base_proposal content.
  $permissions['delete own base_proposal content'] = array(
    'name' => 'delete own base_proposal content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own casestudy content.
  $permissions['delete own casestudy content'] = array(
    'name' => 'delete own casestudy content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own event content.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own proposal_development_class content.
  $permissions['delete own proposal_development_class content'] = array(
    'name' => 'delete own proposal_development_class content',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own proposal_research_class content.
  $permissions['delete own proposal_research_class content'] = array(
    'name' => 'delete own proposal_research_class content',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own slideshow_item content.
  $permissions['delete own slideshow_item content'] = array(
    'name' => 'delete own slideshow_item content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own story content.
  $permissions['delete own story content'] = array(
    'name' => 'delete own story content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: edit any asset content.
  $permissions['edit any asset content'] = array(
    'name' => 'edit any asset content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any base_proposal content.
  $permissions['edit any base_proposal content'] = array(
    'name' => 'edit any base_proposal content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any casestudy content.
  $permissions['edit any casestudy content'] = array(
    'name' => 'edit any casestudy content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any event content.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any proposal_development_class content.
  $permissions['edit any proposal_development_class content'] = array(
    'name' => 'edit any proposal_development_class content',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any proposal_research_class content.
  $permissions['edit any proposal_research_class content'] = array(
    'name' => 'edit any proposal_research_class content',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any researcher_profile profile.
  $permissions['edit any researcher_profile profile'] = array(
    'name' => 'edit any researcher_profile profile',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit any slideshow_item content.
  $permissions['edit any slideshow_item content'] = array(
    'name' => 'edit any slideshow_item content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any story content.
  $permissions['edit any story content'] = array(
    'name' => 'edit any story content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit mimemail user settings.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(),
    'module' => 'mimemail',
  );

  // Exported permission: edit own asset content.
  $permissions['edit own asset content'] = array(
    'name' => 'edit own asset content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own base_proposal content.
  $permissions['edit own base_proposal content'] = array(
    'name' => 'edit own base_proposal content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own casestudy content.
  $permissions['edit own casestudy content'] = array(
    'name' => 'edit own casestudy content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own event content.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own proposal_development_class content.
  $permissions['edit own proposal_development_class content'] = array(
    'name' => 'edit own proposal_development_class content',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own proposal_research_class content.
  $permissions['edit own proposal_research_class content'] = array(
    'name' => 'edit own proposal_research_class content',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own researcher_profile profile.
  $permissions['edit own researcher_profile profile'] = array(
    'name' => 'edit own researcher_profile profile',
    'roles' => array(
      0 => 'authenticated user',
      1 => 'researcher',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own slideshow_item content.
  $permissions['edit own slideshow_item content'] = array(
    'name' => 'edit own slideshow_item content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own story content.
  $permissions['edit own story content'] = array(
    'name' => 'edit own story content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'features',
  );

  // Exported permission: nesi download proposal submission file wiki.
  $permissions['nesi download proposal submission file wiki'] = array(
    'name' => 'nesi download proposal submission file wiki',
    'roles' => array(),
    'module' => 'nesi_base_proposal',
  );

  // Exported permission: nesi website config.
  $permissions['nesi website config'] = array(
    'name' => 'nesi website config',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'reviewer',
      2 => 'website engineer',
    ),
    'module' => 'nesi_config',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: opt-in or out of tracking.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: use PHP for settings.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'php',
  );

  // Exported permission: use PHP for tracking visibility.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'search',
  );

  // Exported permission: use flag import.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'flag',
  );

  // Exported permission: use text format 1.
  $permissions['use text format 1'] = array(
    'name' => 'use text format 1',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format 2.
  $permissions['use text format 2'] = array(
    'name' => 'use text format 2',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'website engineer',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format 3.
  $permissions['use text format 3'] = array(
    'name' => 'use text format 3',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'filter',
  );

  // Exported permission: view advanced help index.
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help popup.
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help topic.
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view any researcher_profile profile.
  $permissions['view any researcher_profile profile'] = array(
    'name' => 'view any researcher_profile profile',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own researcher_profile profile.
  $permissions['view own researcher_profile profile'] = array(
    'name' => 'view own researcher_profile profile',
    'roles' => array(
      0 => 'authenticated user',
      1 => 'researcher',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'authenticated user',
      1 => 'nesi administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'nesi administrator',
      1 => 'website engineer',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'website engineer',
    ),
    'module' => 'system',
  );

  return $permissions;
}
