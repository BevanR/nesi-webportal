<?php
/**
 * @file
 * nesi_ft_researcher_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nesi_ft_researcher_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-researcher-menu:hpc-calculator
  $menu_links['menu-researcher-menu:hpc-calculator'] = array(
    'menu_name' => 'menu-researcher-menu',
    'link_path' => 'hpc-calculator',
    'router_path' => 'hpc-calculator',
    'link_title' => 'HPC Calculator',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-researcher-menu:http://support.nesi.org.nz
  $menu_links['menu-researcher-menu:http://support.nesi.org.nz'] = array(
    'menu_name' => 'menu-researcher-menu',
    'link_path' => 'http://support.nesi.org.nz',
    'router_path' => '',
    'link_title' => 'Support',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-researcher-menu:user
  $menu_links['menu-researcher-menu:user'] = array(
    'menu_name' => 'menu-researcher-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My Account',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-researcher-menu:user/dashboard
  $menu_links['menu-researcher-menu:user/dashboard'] = array(
    'menu_name' => 'menu-researcher-menu',
    'link_path' => 'user/dashboard',
    'router_path' => 'user/dashboard',
    'link_title' => 'Proposals',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-researcher-menu:user/logout
  $menu_links['menu-researcher-menu:user/logout'] = array(
    'menu_name' => 'menu-researcher-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('HPC Calculator');
  t('Logout');
  t('My Account');
  t('Proposals');
  t('Support');


  return $menu_links;
}
