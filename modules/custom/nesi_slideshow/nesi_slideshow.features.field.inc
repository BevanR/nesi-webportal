<?php
/**
 * @file
 * nesi_slideshow.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function nesi_slideshow_field_default_fields() {
  $fields = array();

  // Exported field: 'node-slideshow_item-field_ns_banner_bg_color'.
  $fields['node-slideshow_item-field_ns_banner_bg_color'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ns_banner_bg_color',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'jquery_colorpicker',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'jquery_colorpicker',
    ),
    'field_instance' => array(
      'bundle' => 'slideshow_item',
      'default_value' => array(
        0 => array(
          'jquery_colorpicker' => 'e1e1e1',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'jquery_colorpicker',
          'settings' => array(),
          'type' => 'jquery_colorpicker_color_display',
          'weight' => 6,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ns_banner_bg_color',
      'label' => 'Banner Background Colour',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'jquery_colorpicker',
        'settings' => array(),
        'type' => 'jquery_colorpicker',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-slideshow_item-field_ns_banner_image'.
  $fields['node-slideshow_item-field_ns_banner_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ns_banner_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'profile2_private' => FALSE,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'slideshow_item',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 5,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ns_banner_image',
      'label' => 'Banner Image',
      'required' => 1,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-slideshow_item-field_ns_link_color'.
  $fields['node-slideshow_item-field_ns_link_color'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ns_link_color',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'jquery_colorpicker',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'jquery_colorpicker',
    ),
    'field_instance' => array(
      'bundle' => 'slideshow_item',
      'default_value' => array(
        0 => array(
          'jquery_colorpicker' => '2b9fc2',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'jquery_colorpicker',
          'settings' => array(),
          'type' => 'jquery_colorpicker_color_display',
          'weight' => 7,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ns_link_color',
      'label' => 'Link Colour',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'jquery_colorpicker',
        'settings' => array(),
        'type' => 'jquery_colorpicker',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-slideshow_item-field_ns_link_target_node'.
  $fields['node-slideshow_item-field_ns_link_target_node'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ns_link_target_node',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'profile2_private' => FALSE,
        'referenceable_types' => array(
          'asset' => 'asset',
          'call' => 0,
          'casestudy' => 'casestudy',
          'event' => 'event',
          'page' => 'page',
          'project' => 0,
          'proposal_development_class' => 0,
          'proposal_research_class' => 0,
          'slideshow_item' => 0,
          'story' => 'story',
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'slideshow_item',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Title of the node, page, case study, event you wish link to from the slideshow banner.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => 4,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ns_link_target_node',
      'label' => 'Link Target Node',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '120',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-slideshow_item-field_ns_link_title'.
  $fields['node-slideshow_item-field_ns_link_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ns_link_title',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '120',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'slideshow_item',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Text to appear as the clickable link below the slideshow title.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 3,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ns_link_title',
      'label' => 'Link Title',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-slideshow_item-field_ns_primary_bg_color'.
  $fields['node-slideshow_item-field_ns_primary_bg_color'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ns_primary_bg_color',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'jquery_colorpicker',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'jquery_colorpicker',
    ),
    'field_instance' => array(
      'bundle' => 'slideshow_item',
      'default_value' => array(
        0 => array(
          'jquery_colorpicker' => '2b9fc2',
        ),
      ),
      'deleted' => '0',
      'description' => 'Sets the colour of the background for the Primary Title.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'jquery_colorpicker',
          'settings' => array(),
          'type' => 'jquery_colorpicker_color_display',
          'weight' => 9,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ns_primary_bg_color',
      'label' => 'Primary Title Background Colour',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'jquery_colorpicker',
        'settings' => array(),
        'type' => 'jquery_colorpicker',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-slideshow_item-field_ns_secondary_bg_color'.
  $fields['node-slideshow_item-field_ns_secondary_bg_color'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ns_secondary_bg_color',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'jquery_colorpicker',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'jquery_colorpicker',
    ),
    'field_instance' => array(
      'bundle' => 'slideshow_item',
      'default_value' => array(
        0 => array(
          'jquery_colorpicker' => '2b9fc2',
        ),
      ),
      'deleted' => '0',
      'description' => 'Sets the colour of the background for the Secondary Title.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'jquery_colorpicker',
          'settings' => array(),
          'type' => 'jquery_colorpicker_color_display',
          'weight' => 10,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ns_secondary_bg_color',
      'label' => 'Secondary Title Background Colour',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'jquery_colorpicker',
        'settings' => array(),
        'type' => 'jquery_colorpicker',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-slideshow_item-field_ns_title_primary'.
  $fields['node-slideshow_item-field_ns_title_primary'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ns_title_primary',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '40',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'slideshow_item',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The first title displayed on the slideshow banner.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ns_title_primary',
      'label' => 'Primary Title',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-slideshow_item-field_ns_title_secondary'.
  $fields['node-slideshow_item-field_ns_title_secondary'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ns_title_secondary',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '40',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'slideshow_item',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The second title line to appear on the slideshow banner.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ns_title_secondary',
      'label' => 'Secondary Title',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner Background Colour');
  t('Banner Image');
  t('Link Colour');
  t('Link Target Node');
  t('Link Title');
  t('Primary Title');
  t('Primary Title Background Colour');
  t('Secondary Title');
  t('Secondary Title Background Colour');
  t('Sets the colour of the background for the Primary Title.');
  t('Sets the colour of the background for the Secondary Title.');
  t('Text to appear as the clickable link below the slideshow title.');
  t('The first title displayed on the slideshow banner.');
  t('The second title line to appear on the slideshow banner.');
  t('Title of the node, page, case study, event you wish link to from the slideshow banner.');

  return $fields;
}
