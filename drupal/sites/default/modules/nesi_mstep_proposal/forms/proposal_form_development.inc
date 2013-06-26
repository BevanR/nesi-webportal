<?php

function nesi_mstep_proposal_development_form($form_state) { 

  $form = array();
  $form_ele['group-project']['node-title'] = array(
      '#type'     => 'textfield',
      '#title'    => t('Project title'),
      '#required' => TRUE, 
    );

  $form_structure = nesi_mstep_form_structure('proposal_development_class' , $form_ele);
  $form = nesi_mstep_form_elements($form_structure , $form);
  return $form;
}

/**
 * Takes a content type and returns a structured array
 *
 * $group_map =  array('group_name' => 
 *                    array('field_name' 
 *                          => array('field_type' => 'textarea' , 'title' => 'My project' 
 *                          , 'description' => ' blah blah blah' , 'required' => TRUE )
 *                     ))
 * Additional form elements may also added
 */
function nesi_mstep_form_structure($content_type , $form_ele = array()) {

  $group_map_from_form = nesi_mstep_form_ele_to_field($form_ele);
  // Get information about all the fields attached to the content type
  $fields = field_info_instances("node",$content_type);

  // Using field_group api.
  $unsorted_groups = field_group_info_groups('node', $content_type, 'default', TRUE);
  usort($unsorted_groups,"nesi_mstep_sort_groups");

  $groups = array();
  foreach ($unsorted_groups as $group) {
    $groups[$group->group_name] = $group;
  } 

  // Creating a map for sorting.
  $group_map = array();
  foreach ($groups as $group) {
    $group_map[$group->group_name]['title'] = $group->label;
    foreach ($group->children as $group_field) {
      $field = $fields[$group_field];
      $group_map[$group->group_name][$group_field] = $field;
    }

    // @todo Refactor $group_map to be a render array so that the Form API will
    // do the sorting downstream.
    uasort($group_map[$group->group_name], 'nesi_mstep_sort_group_fields');
  }
  $group_map = array_merge_recursive($group_map_from_form, $group_map);
  return $group_map;  
}

/**
 * Sorts groups from highest to lowest.
 */
function nesi_mstep_sort_groups($a, $b) {
  return $a->weight - $b->weight;
}

/**
 * Sorts fields in groups from highest to lowest.
 */
function nesi_mstep_sort_group_fields($a, $b) {
  if (is_string($a)) {
    return -1;
  }
  if (is_string($b)) {
    return 1;
  }
  return $a['widget']['weight'] - $b['widget']['weight'];
}

/**
 * Takes a form element and
 */
function nesi_mstep_form_ele_to_field($form) {
  $group_map = array();
  foreach($form as $group_name => $group) {
    $group_name = str_replace('-' , '_' , $group_name);

    $field = array();
    foreach($group as $field_name => $form_data) {
      $field_name = str_replace('-' , '_' , $field_name);
      if (!is_string($form_data)) {
        $field['widget']['type'] = 'text_textfield';
        $field['label'] = $form_data['#title'];
        $field['field_name'] = $field_name;
        $field['required'] = $field_name['#required'];

        $group_map[$group_name][$field_name] = $field;
      }
    }
  }

  return $group_map;
}

/**
 * Builds a form api element from a content type field
 */ 
function nesi_mstep_form_elements($form_structure , $form, $form_state = array()) {

  foreach($form_structure as $group_name => $group) {

    $group_name = str_replace('_' , '-' , $group_name);

    foreach($group as $field) {

      if(is_string($field)) {
        $title = $field; 
        continue;
      }
      $form[$group_name]['#type'] = 'fieldset';
      $form[$group_name]['#title'] = $title;
      $form_ele = $field['widget']['type'];
      $field_name = str_replace('_' , '-' , $field['field_name']);
      $default_value = $form_state['ctools_object']->data['form_data'][$field_name] ? $form_state['ctools_object']->data['form_data'][$field_name] : '' ;

      switch($form_ele) {
        // Form element templates
        case 'text_textfield':

          $form[$group_name][$field_name] = array(
             '#type'     => 'textfield',
             '#title'    => $field['label'],
             '#required' => $field['required'],
             '#description' => $field['description'],
             '#default_value' => $default_value,
          );
          break;

        case 'text_textarea':
          $form[$group_name][$field_name] = array(
             '#type'     => 'textarea',
             '#title'    => $field['label'],
             '#required' => $field['required'],
             '#description' => $field['description'],
             '#default_value' => $default_value,
          );
          break;

        case 'date_popup':
          $form[$group_name][$field_name] = array(
             '#type'     => 'date_popup',
             '#date_format' => 'd-m-Y',
             '#title'    => $field['label'],
             '#description' => $field['description'],
             '#default_value' => $default_value,
             '#required' => $field['required'],
          );
          break;

        case 'options_buttons':

          // Hmmm nested switch...
          // The problem here is that it's not possible to differentiate 
          // between checkboxes and radios with the field data returned
          switch($field_name) {

            case 'field-prc-expert-support':
             $form[$group_name][$field_name] = array(
                  '#type' => 'radios',
                  '#title' => $field['label'],
                  '#description' => $field['description'],
                  '#options' => array('yes' => 'Yes', 'no' => 'No'),
                  '#required' => $field['required'],
                  '#default_value' => $default_value,
                );
              break;

            case 'field-pgc-expert-support':
             $form[$group_name][$field_name] = array(
                  '#type' => 'radios',
                  '#title' => $field['label'],
                  '#description' => $field['description'],
                  '#options' => array('yes' => 'Yes', 'no' => 'No'),
                  '#required' => $field['required'],
                  '#default_value' => $default_value,
                );
              break;

            default:
              $form[$group_name][$field_name] = array(
                 '#type'     => 'checkboxes',
                 '#title'    => $field['label'],
                 '#options' => nesi_mstep_form_options($field_name),
                 '#description' => $field['description'],
                 '#required' => $field['required'],
                 '#default_value' => $default_value,
              );
            }
  
          break;
      }
    }
  }
  return $form;
}

/**
 * TODO : Findout where to look this up in the DB
 */
function nesi_mstep_form_options($field_name) {

  switch($field_name) {

    case 'field-pdc-proposed-hpc-platform':
      $options = nesi_mstep_proposal_platform_options();
     break; 


    case 'field-pdc-expert-support':
      $options = array(
        'software_installation' => 'Software Installation',   
        'software_porting' => 'Software Porting',   
        'software_optimisation' => 'Software Optimisation',   
        'scaling_performance' => 'Scaling Performance',   
      ); 
     break; 

    case 'field-prc-expert-support':
      $options = array(
        'yes' => 'Yes',   
        'no' => 'No',   
      ); 
     break; 

    case 'field-pgc-expert-support':
      $options = array(
        'yes' => 'Yes',   
        'no' => 'No',   
      ); 
     break; 

  }
  return $options;
}


