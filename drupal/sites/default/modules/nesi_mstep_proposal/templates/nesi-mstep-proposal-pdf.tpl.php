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

$group_heading_map = array(
  'group_project' => 'Project',
  'group_team' => 'Principal Investigator and Team',
  'group_requirements' => 'Requirements',
  'group_additional' => 'Additional Information',
);

switch ($node->type) {
  case 'proposal_development_class' :
    $proposal_type = 'Technical Development';
    break;
  case 'proposal_research_class' :
    $proposal_type = 'Research';
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

<body class="node-type-proposal-development-class nesi-pdf">
  <div class="container">
    <div class="row-fluid">
      <section class="span12">

        <img id="logo" src="http://<?php print $_SERVER['HTTP_HOST']; ?>/<?php print drupal_get_path('theme', 'nesi_bootstrap'); ?>/assets/img/nesi-logo.png" />

        <article role="main" class="node node-proposal-development-class node-promoted clearfix" id="node-122">
        
          <header>
            <h1><?php print $node->title; ?></h1>
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
                <?php $account = user_load($node->uid); ?> 
                <p><?php print format_username($account); ?></p>
              </div>
            </div>

          </div>

<?php $count = 0; ?>
<?php foreach($data as $group_name => $field_group) :?>
  <fieldset class="field-group-fieldset form-wrapper <?php print (++$count%2 ? 'odd' : 'even'); ?>">
    <legend><span class="fieldset-legend">Project</span></legend>
    <div class="fieldset-wrapper">
  <?php foreach($field_group as $field=>$val) :?>
<?php if ($val['field_label'] <> 'Project Reference') { ?>
    <div class="field">
    <div class="field-label"><?php print $val['field_label']  ?></div>

  <?php
    if(is_array($val['field_val'])):
      foreach($val['field_val'] as $key) {
        if(isset($development_class_map[$key])) print $development_class_map[$key];
      }
    else:
  ?>
  <div class="field-items"><?php print $val['field_val']  ?></div>
  <?php  
    endif;
  ?>
    </div>
<?php } ?>
 <?php
  endforeach;
  ?> 
    </div>
  </fieldset>
<?php
  endforeach;
?>

        </article>
      </section>
    </div>
  </div>
</body>
</html>
