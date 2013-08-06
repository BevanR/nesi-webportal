<?php
/**
 * @file
 * nesi_ft_homepage.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nesi_ft_homepage_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:apply/nojs/create-proposal
  $menu_links['main-menu:apply/nojs/create-proposal'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'apply/nojs/create-proposal',
    'router_path' => 'apply/%/create-proposal',
    'link_title' => 'Apply for access',
    'options' => array(
      'attributes' => array(
        'title' => 'Fill out an application',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:news-events
  $menu_links['main-menu:news-events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-events',
    'router_path' => 'news-events',
    'link_title' => 'News & Events',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: main-menu:node/20
  $menu_links['main-menu:node/20'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'About NeSI',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => 'node/169',
  );
  // Exported menu link: main-menu:node/34
  $menu_links['main-menu:node/34'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Facilities & Guidelines',
    'options' => array(
      'attributes' => array(
        'title' => 'Nationwide HPC facilities',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/142',
  );
  // Exported menu link: main-menu:node/40
  $menu_links['main-menu:node/40'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(
        'title' => 'Current computing allocation',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:node/45
  $menu_links['main-menu:node/45'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/45',
    'router_path' => 'node/%',
    'link_title' => 'Allocations, Allocation Classes, Review Cycles',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:node/50
  $menu_links['main-menu:node/50'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/50',
    'router_path' => 'node/%',
    'link_title' => 'Calls Timetable',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About NeSI');
  t('Allocations, Allocation Classes, Review Cycles');
  t('Apply for access');
  t('Calls Timetable');
  t('Facilities & Guidelines');
  t('News & Events');
  t('Projects');


  return $menu_links;
}
