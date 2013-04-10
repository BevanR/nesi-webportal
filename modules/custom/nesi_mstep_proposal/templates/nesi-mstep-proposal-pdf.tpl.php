<?php
/**
 * This file is used to output the pdf proposal conent.
 *
 * @file nesi-mstep-proposal-pdf.tpl.php
 */

$data = $variables['data'];
$nid = $variables['nid'];
$node = node_load($nid);

$development_class_map = array(
  'software_installation' => 'Software Installation',
  'software_porting'      => 'Software Porting',
  'software_optimisation' => 'Software Optimisation',
  'scaling_performance'   => 'Scaling Performance',
);

switch ($node->type) {
  case 'proposal_development_class' :
    $proposal_type = 'Technical Development';
    break;
  default :
    $proposal_type = '';
}

?>
<!DOCTYPE html>
<!--[if IE 6 ]> <html class="ie6"> <![endif]-->
<!--[if IE 7 ]> <html class="ie7"> <![endif]-->
<!--[if IE 8 ]> <html class="ie8"> <![endif]-->
<!--[if IE 9 ]> <html class="ie9"> <![endif]-->
<!--[if (gt IE 9)|!(IE)]><!-->
<html lang="en">
<!--<![endif]-->
<head>
  <meta charset="utf-8">
  <?php print $variables['css']; ?>
</head>

<body class="node-type-proposal-development-class">
  <?php //print_r($variables); ?>
  <?php //print_r($node); ?>
  <div class="container">
    <div class="row-fluid">
      <section class="span12">
        <article role="main" class="node node-proposal-development-class node-promoted clearfix" id="node-122">
        
          <header>
            <h1><?php print $data['title']['field_val']; ?> - Proposal #<?php print $nid; ?> <span>- <?php print nesi_bootstrap_proposal_status($nid); ?></span></h1>
          </header>
        
          <div id="proposal-statistics">
        
            <div class="labels">
              <h2>Proposal statistics</h2>
              <h3><?php print $proposal_type; ?> Proposal</h3>
            </div>
        
            <div class="inner">
              <div>
                <h3>Submitted on</h3>
                <p><?php print format_date($node->created, 'custom', 'jS F Y'); ?></p>
              </div>
          
              <div>
                <h3>Submitted by</h3>
                <p><?php print $node->name; ?></p>
              </div>
          
              <div>
                <h3>Assigned to</h3>
                <p>TODO</p>
              </div>
            </div>
        
          </div>
        
          <fieldset id="node_proposal_development_class_full_group_project" class="field-group-fieldset group-project  form-wrapper"><legend><span class="fieldset-legend">Project</span></legend><div class="fieldset-wrapper" style="height: 310px; overflow: auto;">
        <div class="field field-name-field-pdc-start-date field-type-datetime field-label-above">
              <div class="field-label">Start Date</div>
            <div class="field-items">
                  <div class="field-item even"><span class="date-display-single">Saturday, March 30, 2013</span></div>
              </div>
        </div>
        <div class="field field-name-field-pdc-description field-type-text-long field-label-above">
              <div class="field-label">Project Description</div>
            <div class="field-items">
                  <div class="field-item even">ggdf</div>
              </div>
        </div></div></fieldset>
        <fieldset id="node_proposal_development_class_full_group_team" class="field-group-fieldset group-team  form-wrapper odd"><legend><span class="fieldset-legend">Principal Investigator and Team</span></legend><div class="fieldset-wrapper" style="height: 310px; overflow: auto;">
        <div class="field field-name-field-pdc-pi-name field-type-text field-label-above">
              <div class="field-label">PI Name</div>
            <div class="field-items">
                  <div class="field-item even">gfd</div>
              </div>
        </div>
        <div class="field field-name-field-pdc-pi-email field-type-text field-label-above">
              <div class="field-label">PI Email</div>
            <div class="field-items">
                  <div class="field-item even">gdf</div>
              </div>
        </div>
        <div class="field field-name-field-pdc-pi-phone field-type-text field-label-above">
              <div class="field-label">PI Phone</div>
            <div class="field-items">
                  <div class="field-item even">gfd</div>
              </div>
        </div>
        <div class="field field-name-field-pdc-team-access field-type-text-long field-label-above">
              <div class="field-label">Team Access</div>
            <div class="field-items">
                  <div class="field-item even">gdf</div>
              </div>
        </div>
        <div class="field field-name-field-pdc-team-experience field-type-text-long field-label-above">
              <div class="field-label">Project Team's HPC Experience</div>
            <div class="field-items">
                  <div class="field-item even">gfd</div>
              </div>
        </div></div></fieldset>
        <fieldset id="node_proposal_development_class_full_group_requirements" class="field-group-fieldset group-requirements  form-wrapper"><legend><span class="fieldset-legend">Requirements</span></legend><div class="fieldset-wrapper" style="height: 310px; overflow: auto;">
        <div class="field field-name-field-pdc-proposed-hpc-platform field-type-list-text field-label-above">
              <div class="field-label">Desired HPC Platform</div>
            <div class="field-items">
                  <div class="field-item even">P575/POWER6</div>
              </div>
        </div>
        <div class="field field-name-field-pdc-software-requirements field-type-text-long field-label-above">
              <div class="field-label">Software Requirements</div>
            <div class="field-items">
                  <div class="field-item even">g</div>
              </div>
        </div>
        <div class="field field-name-field-pdc-storage-requirements field-type-text field-label-above">
              <div class="field-label">Storage Requirements</div>
            <div class="field-items">
                  <div class="field-item even">gfd</div>
              </div>
        </div></div></fieldset>
        <fieldset id="node_proposal_development_class_full_group_additional" class="field-group-fieldset group-additional  form-wrapper odd"><legend><span class="fieldset-legend">Additional Information</span></legend><div class="fieldset-wrapper" style="height: 310px; overflow: auto;">
        <div class="field field-name-field-pdc-expert-support field-type-list-text field-label-above">
              <div class="field-label">Expert Support</div>
            <div class="field-items">
                  <div class="field-item even">Software Installation</div>
              </div>
        </div>
        <div class="field field-name-field-pdc-additional-information field-type-text-long field-label-above">
              <div class="field-label">Further Information</div>
            <div class="field-items">
                  <div class="field-item even">gfd</div>
              </div>
        </div></div></fieldset>
        </article>
      </section>
    </div>
  </div>
</body>
</html>

<?php foreach($data as $field => $val) :?>
  <h3><?php print $val['field_label']  ?></h3>

  <?php
    if(is_array($val['field_val'])):
      foreach($val['field_val'] as $key) {
        print $development_class_map[$key];
      }
    else:
  ?>
  <p><?php print $val['field_val']  ?></p>
  <?php  
    endif;
  ?>
  
<?php
  endforeach;
?>