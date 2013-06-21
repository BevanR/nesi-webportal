<?php

function nesi_mstep_proposal_development_form($form_state) { 

  $form = array();
  $form['group-project']['node-title'] = array(
      '#type'     => 'textfield',
      '#title'    => 'Project Title',
      '#required' => TRUE, 
      'default_value' => $form_state['ctools_object']->data['form_data'][$field_name] ? $form_state['ctools_object']->data['form_data'][$field_name] : '' ,

    );
  $form_structure = nesi_mstep_form_structure('proposal_development_class');
  $form = nesi_mstep_form_elements($form_structure , $form);
  return $form;
}

function nesi_mstep_form_structure($content_type) {

  // Get information about all the fields attached to the content type
  $fields = field_info_instances("node",$content_type);
  
  // using field_group api
  $unsorted_groups = field_group_info_groups('node', $content_type, 'default', TRUE);
  usort($unsorted_groups,"nesi_mstep_sort_groups");


  $groups = array();
  foreach($unsorted_groups as $group) {
    $groups[$group->group_name] = $group;
  } 

  // form array structure
  // array('group_name' => 
  //       array('field_name' 
  //        => array('field_type' => 'textarea' , 'title' => 'My project' 
  //        , 'description' => ' blah blah blah' , 'required' => TRUE )
  //        ))

  // creating a map for sorting
  $group_map = array();
  foreach($groups as $group) {
    
    $group_map[$group->group_name]['title'] = $group->label;
    foreach($group->children as $index=>$group_field) {

      $field = $fields[$group_field];
      $group_map[$group->group_name][$group_field] = $field;
    }
  }
  return $group_map;  
}

function nesi_mstep_sort_groups($a,$b){
    return $a->weight - $b->weight;
}


function nesi_mstep_form_elements($form_structure , $form) {

  //dsm($form_state);
  //dsm($form_structure);
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
             '#required' => TRUE, 
             '#description' => $field['description'],
             '#default_value' => $default_value,
           );
          break;

        case 'text_textarea':
          $form[$group_name][$field_name] = array(
             '#type'     => 'textarea',
             '#title'    => $field['label'],
             '#required' => TRUE,
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
             '#required' => TRUE,
              );
          break;

        case 'options_buttons':
          $form[$group_name][$field_name] = array(
             '#type'     => 'checkboxes',
             '#title'    => $field['label'],
             '#options' => nesi_mstep_form_options($field_name),
             '#description' => $field['description'],
             '#required' => TRUE,
              );
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
  }
  return $options;
}


