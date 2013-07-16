<?php
/**
 * A pdf of the proposal needs to be generated and 
 * attached to emails that get sent on completion 
 * of the application.
 *
 * Contain the functions necessary to generate the pdf
 * 
 * @file nesi_mstep_proposal_pdf.inc 
 */


/**
 * Page call back for themeing proposal pdf
 * Presents a view of the proposal that can be 
 * styled for pdf export.
 *
 * This is can be disabled in the menu hook 
 * when development is complete
 *
 * Completely by passes the Drupal theme and directly output the html.
 * In the future creating a node view will provide and more flexible approach.
 * http://www.wunderkraut.com/blog/drupal-7-custom-node-view-modes/2010-12-20
 */
function nesi_mstep_proposal_email_theme_page() {
  
  global $base_url;
  $css = drupal_get_css(); 
  $nid = variable_get('proposal_nid_for_testing_pdf_generation', 145);
  $data = nesi_mstep_proposal_data($nid);
  $node_html = theme('nesi_mstep_proposal_pdf' , array( 'data' => $data, 'css' => $css, 'nid' => $nid));
  echo $node_html;
  drupal_exit();
}

/**
 * For testing.
 */
function nesi_mstep_proposal_pdf_generate_page() {
  $nid = variable_get('proposal_nid_for_testing_pdf_generation', 145);
  nesi_mstep_generate_proposal_pdf($nid);
  return 'In pdf generate page';
}

/**
 * Returns that data for a proposal to be 
 * displayed in a pdf. Makes the enitity 
 * module a dependancy
 *
 * This is an alternative to using entity'
 * left here as note.
 * http://drupal.org/project/field_extract
 */
function nesi_mstep_proposal_data($nid) {

  $node = node_load($nid);
  $content_type = $node->type;
  
  // Get information about all the fields attached to the content type
  $fields = field_info_instances("node",$content_type);
  // Sort those fields so that are returned correctly weighted
  usort($fields,"nesi_mstep_sort_fields");
  // Use entity api
  $node_wrapper = entity_metadata_wrapper('node', $node);
  
  $data = array();
  $field_val    = $node_wrapper->title->value();
  $data['title'] = array('field_label' => 'Title', 'field_val' => $field_val);
  // Loop through fields and attach data
  foreach($fields as $field=>$value){
    $field_name   = $value['field_name'];
    $field_label  = $value['label'];
    $field_val    = $node_wrapper->{$field_name}->value();

    // Formatting date field for presentation
    if(strstr($field_name, 'date')) $field_val = date('d F Y' , $field_val);

    $data[$field_name] = array('field_label' => $field_label, 'field_val' => $field_val);
  }

  // using field_group api
  $groups = field_group_info_groups('node', $content_type, 'default', TRUE);

  // creating a map for sorting
  $filter_out = array('field_p_project_id');
  $group_map = array();
  foreach($groups as $group) {
    foreach($group->children as $index=>$group_field) {
      $group_map[$group_field] = $group->group_name;
    }
  }
  
  // put the field data into the correct field group
  $ndata = array();
  foreach($data as $field=>$data) {

    // ALERT! ALERT!! Bevan don't whip me it is a hack!! TODO
    if( 'field_p_project_id' == $field || 'title' == $field) continue;
    if(isset($group_map[$field])) {
      $group_name = $group_map[$field];
      $ndata[$group_name][$field] = $data;
    } 
    else {
      $ndata['non-field-group'][$field] = $data;
    }
  }
  return $ndata;
}

function nesi_mstep_sort_fields($a,$b){
  return $a['widget']['weight']-$b['widget']['weight'];
}

function nesi_mstep_generate_proposal_pdf($nid) {
  // @todo Merge with nesi_mstep_proposal_class_types().
  static $title_map = array(
    'proposal_development_class' => 'Development Proposal',
    'proposal_research_class' => 'Research Proposal',
    'proposal_postgrad_class' => 'Postgraduate Proposal',
  );

  $node = node_load($nid);
  $css = drupal_get_css();
  $data = nesi_mstep_proposal_data($nid);
  $html = theme('nesi_mstep_proposal_pdf', array('data' => $data, 'css' => $css, 'nid' => $nid));

  try {
    require_once(libraries_get_path('wkhtmltopdf') . '/Wkhtmltopdf.php');
    $doc = new Wkhtmltopdf(array(
      // wkhtmltopdf binary creates HTML files here.
      'path' => file_directory_temp(),
      // Allow the path to the binary to be overridden in settings.php.
      'binpath' => variable_get('wkhtmltopdf_bin_path', '/usr/bin/wkhtmltopdf'),
    ));
    $doc->setMargins(array('top' => '15', 'bottom' => '15', 'left' => null, 'right' => null));
    $doc->setTitle($title_map[$node->type]);
    $doc->setHtml($html);

    // Set BasicAuth credentials if securesite is enabled.
    // @todo Set from $conf variables for other environments, like oscar.
    if (module_exists('securesite') && 0 < variable_get('securesite_enabled')) {
      $doc->setUsername(variable_get('securesite_guest_name'));
      $doc->setPassword(variable_get('securesite_guest_pass'));
    }

    // Debug.
    // die($doc->_getCommand());
    // dpm($doc->_getCommand());
    $tmp_file = $doc->output(Wkhtmltopdf::MODE_STRING, "file.pdf");
  }
  catch (Exception $e) {
    watchdog('wkhtmltopdf', 'Wkhtmltopdf error: %message', array('%message' => $e->getMessage()), WATCHDOG_ERROR);
  }

  return file_save_data($tmp_file, "public://applications/NeSI-submission-$nid.pdf", FILE_EXISTS_REPLACE);
}
