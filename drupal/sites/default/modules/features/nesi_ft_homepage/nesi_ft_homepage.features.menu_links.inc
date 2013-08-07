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
  // Exported menu link: main-menu:community/case-studies
  $menu_links['main-menu:community/case-studies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'community/case-studies',
    'router_path' => 'community/case-studies',
    'link_title' => 'Case Studies',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node/141',
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
    'weight' => '0',
  );
  // Exported menu link: main-menu:node/141
  $menu_links['main-menu:node/141'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/141',
    'router_path' => 'node/%',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(
        'title' => 'Activity within the Research Community',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:node/142
  $menu_links['main-menu:node/142'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/142',
    'router_path' => 'node/%',
    'link_title' => 'High Performance Computing',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/158',
  );
  // Exported menu link: main-menu:node/143
  $menu_links['main-menu:node/143'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/143',
    'router_path' => 'node/%',
    'link_title' => 'Software',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node/142',
  );
  // Exported menu link: main-menu:node/144
  $menu_links['main-menu:node/144'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/144',
    'router_path' => 'node/%',
    'link_title' => 'Platforms',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/142',
  );
  // Exported menu link: main-menu:node/145
  $menu_links['main-menu:node/145'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/145',
    'router_path' => 'node/%',
    'link_title' => 'Computational Science',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/158',
  );
  // Exported menu link: main-menu:node/146
  $menu_links['main-menu:node/146'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/146',
    'router_path' => 'node/%',
    'link_title' => 'Data Storage & Management',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node/158',
  );
  // Exported menu link: main-menu:node/147
  $menu_links['main-menu:node/147'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/147',
    'router_path' => 'node/%',
    'link_title' => 'Infrastructure Services',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/158',
  );
  // Exported menu link: main-menu:node/148
  $menu_links['main-menu:node/148'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/148',
    'router_path' => 'node/%',
    'link_title' => 'Organisation & Teams',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/169',
  );
  // Exported menu link: main-menu:node/149
  $menu_links['main-menu:node/149'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/149',
    'router_path' => 'node/%',
    'link_title' => 'Partnerships',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node/169',
  );
  // Exported menu link: main-menu:node/150
  $menu_links['main-menu:node/150'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/150',
    'router_path' => 'node/%',
    'link_title' => 'Guidelines',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/142',
  );
  // Exported menu link: main-menu:node/151
  $menu_links['main-menu:node/151'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/151',
    'router_path' => 'node/%',
    'link_title' => 'Security',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/147',
  );
  // Exported menu link: main-menu:node/152
  $menu_links['main-menu:node/152'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/152',
    'router_path' => 'node/%',
    'link_title' => 'Hosting',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/147',
  );
  // Exported menu link: main-menu:node/153
  $menu_links['main-menu:node/153'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/153',
    'router_path' => 'node/%',
    'link_title' => 'Skills and Expertise',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/148',
  );
  // Exported menu link: main-menu:node/154
  $menu_links['main-menu:node/154'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/154',
    'router_path' => 'node/%',
    'link_title' => 'Teams',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/148',
  );
  // Exported menu link: main-menu:node/155
  $menu_links['main-menu:node/155'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/155',
    'router_path' => 'node/%',
    'link_title' => 'Members',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node/148',
  );
  // Exported menu link: main-menu:node/156
  $menu_links['main-menu:node/156'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/156',
    'router_path' => 'node/%',
    'link_title' => 'Board / Governance',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/148',
  );
  // Exported menu link: main-menu:node/157
  $menu_links['main-menu:node/157'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/157',
    'router_path' => 'node/%',
    'link_title' => 'Access Policy v1.1',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/150',
  );
  // Exported menu link: main-menu:node/158
  $menu_links['main-menu:node/158'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/158',
    'router_path' => 'node/%',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => 'New Zealand\'s most powerful Scientific Computers',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:node/166
  $menu_links['main-menu:node/166'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/166',
    'router_path' => 'node/%',
    'link_title' => 'Federated Authentication',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
    'parent_path' => 'node/158',
  );
  // Exported menu link: main-menu:node/169
  $menu_links['main-menu:node/169'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/169',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => 'How does it all happen',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
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
  // Exported menu link: main-menu:node/39
  $menu_links['main-menu:node/39'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/39',
    'router_path' => 'node/%',
    'link_title' => 'Files and Data',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => 'node/150',
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
  // Exported menu link: main-menu:node/42
  $menu_links['main-menu:node/42'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/42',
    'router_path' => 'node/%',
    'link_title' => 'Eligibility',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => 'node/150',
  );
  // Exported menu link: main-menu:node/43
  $menu_links['main-menu:node/43'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/43',
    'router_path' => 'node/%',
    'link_title' => 'Acceptable Use Policy',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/150',
  );
  // Exported menu link: main-menu:node/44
  $menu_links['main-menu:node/44'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/44',
    'router_path' => 'node/%',
    'link_title' => 'Acknowledgement and Publication',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'node/150',
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
  // Exported menu link: main-menu:node/48
  $menu_links['main-menu:node/48'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'Access Policy',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/150',
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
  // Exported menu link: secondary-menu:news
  $menu_links['secondary-menu:news'] = array(
    'menu_name' => 'secondary-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: secondary-menu:node/17
  $menu_links['secondary-menu:node/17'] = array(
    'menu_name' => 'secondary-menu',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Announcing the onset of funding for National eScience Infrastructure (NeSI)',
    'options' => array(
      'attributes' => array(
        'title' => 'Announcing the onset of funding for National eScience Infrastructure (NeSI)',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'news',
  );
  // Exported menu link: secondary-menu:node/19
  $menu_links['secondary-menu:node/19'] = array(
    'menu_name' => 'secondary-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'New Zealand science to benefit from $50 million investment in eResearch',
    'options' => array(
      'attributes' => array(
        'title' => 'New Zealand science to benefit from $50 million investment in eResearch',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'news',
  );
  // Exported menu link: secondary-menu:node/2
  $menu_links['secondary-menu:node/2'] = array(
    'menu_name' => 'secondary-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'eScience infrastructure proposal submitted',
    'options' => array(
      'attributes' => array(
        'title' => 'NZ eScience Infrastructure proposal submitted',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'news',
  );
  // Exported menu link: secondary-menu:node/21
  $menu_links['secondary-menu:node/21'] = array(
    'menu_name' => 'secondary-menu',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'NeSI Investment Case released',
    'options' => array(
      'attributes' => array(
        'title' => 'NeSI Investment Case released',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'news',
  );
  // Exported menu link: secondary-menu:node/39
  $menu_links['secondary-menu:node/39'] = array(
    'menu_name' => 'secondary-menu',
    'link_path' => 'node/39',
    'router_path' => 'node/%',
    'link_title' => 'Files and Data',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: secondary-menu:node/40
  $menu_links['secondary-menu:node/40'] = array(
    'menu_name' => 'secondary-menu',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: secondary-menu:node/42
  $menu_links['secondary-menu:node/42'] = array(
    'menu_name' => 'secondary-menu',
    'link_path' => 'node/42',
    'router_path' => 'node/%',
    'link_title' => 'Eligibility',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: secondary-menu:node/43
  $menu_links['secondary-menu:node/43'] = array(
    'menu_name' => 'secondary-menu',
    'link_path' => 'node/43',
    'router_path' => 'node/%',
    'link_title' => 'Acceptable Use Policy',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: secondary-menu:node/44
  $menu_links['secondary-menu:node/44'] = array(
    'menu_name' => 'secondary-menu',
    'link_path' => 'node/44',
    'router_path' => 'node/%',
    'link_title' => 'Acknowledgement and Publication',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: secondary-menu:node/45
  $menu_links['secondary-menu:node/45'] = array(
    'menu_name' => 'secondary-menu',
    'link_path' => 'node/45',
    'router_path' => 'node/%',
    'link_title' => 'Allocations, Allocation Classes, Review Cycles',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: secondary-menu:node/48
  $menu_links['secondary-menu:node/48'] = array(
    'menu_name' => 'secondary-menu',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'Access Policy',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: secondary-menu:node/50
  $menu_links['secondary-menu:node/50'] = array(
    'menu_name' => 'secondary-menu',
    'link_path' => 'node/50',
    'router_path' => 'node/%',
    'link_title' => 'Calls Timetable',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About NeSI');
  t('About Us');
  t('Acceptable Use Policy');
  t('Access Policy');
  t('Access Policy v1.1');
  t('Acknowledgement and Publication');
  t('Allocations, Allocation Classes, Review Cycles');
  t('Announcing the onset of funding for National eScience Infrastructure (NeSI)');
  t('Apply for access');
  t('Board / Governance');
  t('Calls Timetable');
  t('Case Studies');
  t('Community');
  t('Computational Science');
  t('Data Storage & Management');
  t('Eligibility');
  t('Facilities & Guidelines');
  t('Federated Authentication');
  t('Files and Data');
  t('Guidelines');
  t('High Performance Computing');
  t('Hosting');
  t('Infrastructure Services');
  t('Members');
  t('NeSI Investment Case released');
  t('New Zealand science to benefit from $50 million investment in eResearch');
  t('News');
  t('News & Events');
  t('Organisation & Teams');
  t('Partnerships');
  t('Platforms');
  t('Projects');
  t('Security');
  t('Services');
  t('Skills and Expertise');
  t('Software');
  t('Teams');
  t('eScience infrastructure proposal submitted');


  return $menu_links;
}
