<?php

function nesi_user_dashboard_callback() {
  // Dashboard
  // Needs to be switched to a themeable template 

  $output = '';

  // Submit a proposal button
  //$output .= l('Submit a proposal', 'apply/nojs/create-proposal', array('attributes' => array('id' => 'submit-proposal', 'class' => 'btn')));

  // Activity section
/*
  $output .= '
    <h2>Activity</h2>
    <div class="module" id="dashboard-activity">
      <div id="dashboard-projects"><strong>X</strong> Projects submitted</div>
      <div id="dashboard-active-members"><strong>XX</strong> active members from your institution</div>
      <div id="dashboard-cpu-hours"><strong>X,XXX</strong> CPU hours used</div>
    </div>
  ';
*/

  $view = views_get_view('researcher_my_proposals');
  $view->execute();
  $response = $view->result; 

  // @todo Views can do all of this much more elegantly by configuring it to render a table.
  $in_progress = FALSE;
  if (!empty($response)) {
    $output .= '<h2>Submitted Proposals</h2><div class="stats-labels"><!--<div class="dashboard-label">ID</div>--><div class="dashboard-label">Start</div><!--<div class="dashboard-label">End</div>--><div class="dashboard-label">CPU core hours</div></div>';
    $output .= '<div class="module">';
      $output .= '<div class="module-inner">';
      // Display all proposals
      foreach ($response as $item) {
        // Need to get link to the exact proposal for this user...
        if (!empty($item->nid)) { 
          $in_progress = TRUE;
          $current_proposal = node_load($item->nid);
          //dpm($current_proposal);
          $options = array('absolute' => TRUE);
          $nodeurl = url('node/'. $current_proposal->nid, $options);
  
          $proposal_state = 'Draft';
          $is_flagged = FALSE;
          // Get status for display
          if (($current_proposal->type == 'proposal_development_class') || ($current_proposal->type == 'proposal_research_class')) {
            $flag = flag_get_flag('p_submit_proposal');
        
            if ($flag->is_flagged($current_proposal->nid)) {
              $proposal_state = 'Pending';
              $is_flagged = TRUE;
            }
          }

          $proposal_operations = '';
          $access_edit = node_access('update', $current_proposal);
          $access_delete = node_access('delete', $current_proposal);
          $proposal_operations = l('View', 'node/' . $current_proposal->nid, array('attributes' => array('class' => 'btn btn-dash-view')));
          if ($access_edit) {
            $proposal_operations .= l('Edit', 'node/' . $current_proposal->nid . '/edit', array('attributes' => array('class' => 'btn btn-dash-edit')));
            /*
            if (!$is_flagged) {
              $temp_link = flag_create_link('p_submit_proposal', $current_proposal->nid);
              $proposal_operations .= $temp_link;
            }
            */
          }
          /*
          if ($access_delete) {
            $proposal_operations .= l('Delete', 'node/' . $current_proposal->nid . '/delete', array('attributes' => array('class' => 'btn btn-dash-delete')));
          }
          */

          $proposal_platform = '';
          $proposal_start_date = '';
          switch($current_proposal->type) {
          
            case 'proposal_development_class':
              $proposal_platform = $current_proposal->field_pdc_proposed_hpc_platform['und'][0]['value'];
              $proposal_start_date = format_date(strtotime($current_proposal->field_pdc_start_date['und'][0]['value']), 'custom', 'j/m/Y');
              break;

            case 'proposal_research_class':
              $proposal_platform = $current_proposal->field_prc_proposed_hpc_platform['und'][0]['value'];
              $proposal_start_date = format_date(strtotime($current_proposal->field_prc_start_date['und'][0]['value']), 'custom', 'j/m/Y');
              break;

            case 'proposal_postgrad_class':
              $proposal_platform = $current_proposal->field_pgc_proposed_hpc_platform['und'][0]['value'];
              $proposal_start_date = format_date(strtotime($current_proposal->field_pgc_start_date['und'][0]['value']), 'custom', 'j/m/Y');
              break;
        
          }

          $proposal_variables = array(
            'proposal_title' => $current_proposal->title,
            'proposal_link' => $nodeurl,
            'proposal_state' => $proposal_state,
            'proposal_operations' => $proposal_operations,
            'proposal_type' => $current_proposal->type,
            'proposal_platform' => $proposal_platform,
            'proposal_id' => $current_proposal->nid,
            'proposal_start_date' => $proposal_start_date,
            // This isn't being used at the moment
            // Var also commented out in the dashboard
            //'proposal_cpu_hours' => $current_proposal->field_prc_cpu_core_hours['und'][0]['value'],
          );

          $output .= theme('nesi_user_dashboard_proposals', $proposal_variables);
        }
      }
      $output .= '</div>';
    $output .= '</div>';
  }

  // Show message if no proposals
  if (!$in_progress) {
    drupal_set_message(t('It doesn\'t look like you have any saved or pending proposals yet, get started by !url.', array('!url' => l(t('creating one') , 'apply'))), 'info');
  }

  // Show create options
  //$create_variables = array();
  //$output .= theme('nesi_user_dashboard_create_proposal', $create_variables);

  return $output;
}

function nesi_user_dashboard_name_callback() {
  return 'Projects/ Proposals';
}

function nesi_user_tuakiri_tab_callback() {
  global $base_url;
  $asset_path = drupal_get_path('theme', variable_get('theme_default', NULL));
  $output = '<article class="modal-message" role="main">

		<h1><img alt="Tuakiri Logo" src="/'.$asset_path.'/assets/img/tuakiri.png"> &nbsp;</h1>
    <div class="tuakiri">
      <p>Tuakiri enables students, academics, alumni and researchers to get secure and seamless access to their computing resources and collaboration environments using one set of credentials granted by their home organisation.</p>
      <p><a class="btn btn-primary" href="'.shib_auth_generate_login_url().'">Login with Tuakiri</a></p>
    </div>
  ';

  return $output;
}
