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
 * Creating a new node view for proposal data
 */
function nesi_mstep_proposal_entity_info_alter(&$entity_info) {

  $entity_info['node']['view modes']['proposal_pdf'] = array(
    'label' => t('Proposal Pdf'),
    'custom settings' => TRUE,
  );
}

/**
 * Not working...
 *
 * Implements hook_preprocess_node().
 * http://www.wunderkraut.com/blog/drupal-7-custom-node-view-modes/2010-12-20
 */
function nesi_mstep_proposal_preprocess_page(&$vars) {
  //dpm(entity_get_info());
  //if($vars['view_mode'] == 'proposal_pdf') {
    //unset($vars['theme_hook_suggestions']);
    //$vars['theme_hook_suggestions'][] = 'page__pdf_proposal';
    //$vars['theme_hook_suggestions'] = array_reverse($vars['theme_hook_suggestions']);
    
  //}

}


/**
 * Page call back for themeing proposal pdf
 * Presents a view of the proposal that can be 
 * styled for pdf export.
 *
 * This is can be disabled in the menu hook 
 * when development is complete
 */
function nesi_mstep_proposal_email_theme_page() {

  $nid = 125;
  $data = nesi_mstep_proposal_data($nid);
  $node_html = theme('nesi_mstep_proposal_pdf' , array( 'data' => $data));
  echo $node_html;
  drupal_exit();
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
    $data[$field_name] = array('field_label' => $field_label, 'field_val' => $field_val);
  }
  return $data;
}

function nesi_mstep_sort_fields($a,$b){
    return $a['widget']['weight']-$b['widget']['weight'];
}


/**
 * For this to work there can't be any htaccess on the site
 * at the moment.
 * wkhtmltopdf can be used with htaccess but we aren't set up 
 * for that at the moment
 */
function nesi_mstep_generate_proposal_pdf($nid) { 
  
  global $conf, $base_url;
  // nid 120 for testing
  // This is set in local.settings.php
  //
  include_once 'Wkhtmltopdf.php';
  $wkhtmltopdf_files_path =  '/var/aegir/platforms/nesi-drupal-7.19/sites/nesi-sam.webscope.net.nz/files';
  //$wkhtmltopdf_files_path  = $conf['absolute_path_to_site'] . '/sites/' . $conf['sites_folder']. '/files';
  //$wkhtmltopdf_header_html = $conf['absolute_path_to_site'] . '/sites/' . $conf['sites_folder']. '/themes/ws_mm/templates/pdf-header.html';
  //$wkhtmltopdf_footer_html = $conf['absolute_path_to_site'] . '/sites/' . $conf['sites_folder']. '/themes/ws_mm/templates/pdf-footer.html';
  $wkhtmltopdf_margins = array('top' => '26', 'bottom' => '15', 'left' => null, 'right' => null);
//  $file_name = $report_title . '-' . $uid;

 // $node  = node_load($app->nid);
  //$print = array();
  //$print['language']       = 'en';
  //$print['head']           = '';
  //$print['base_href']      = ''; 
  //$print['title']          = $report_title; 
  //$print['scripts']        = drupal_get_js();
  //$print['sendtoprinter']  = ''; 
  //$print['robots_meta']    = ''; 
  //$print['favicon']        = ''; 
  //$print['css']            = drupal_get_css();
  //$print['node']           = $node; 
  //$print['nid']            = $node->nid; 
  //$print['from_email']     = TRUE;
  //$print['footer_scripts'] = ''; 


  // Need to pass in $nid here
  $data['data'] = nesi_mstep_proposal_data($nid);
  $html = theme('nesi_mstep_proposal_pdf' , $data);
  //dsm($html);
  try {
    $wkhtmltopdf = new Wkhtmltopdf(array('path' => $wkhtmltopdf_files_path));
    $wkhtmltopdf->setMargins($wkhtmltopdf_margins);
    //$wkhtmltopdf->setHeaderHtml($wkhtmltopdf_header_html);
    //$wkhtmltopdf->setFooterHtml($wkhtmltopdf_footer_html);
    //$wkhtmltopdf->setTitle($report_title);
    $wkhtmltopdf->setHtml($html);
    $pdf_file = $wkhtmltopdf->output(Wkhtmltopdf::MODE_STRING, "file.pdf");
  } catch (Exception $e) {
    echo $e->getMessage();
    drupal_set_message('WKHTMLTOPDF error : ' . $e->getMessage(),'error');
  }
  $secs = date('s' , time());
  $file_name = 'proposal-' . $secs;
  $file = file_save_data($pdf_file, 'public://' . $file_name . '.pdf', FILE_EXISTS_REPLACE);
  //dsm($file);
  return $file;
}



