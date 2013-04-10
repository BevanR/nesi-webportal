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

<body class="node-type-proposal-development-class nesi-pdf">
  <?php //print_r($variables); ?>
  <?php //print_r($node); ?>
  <div class="container">
    <div class="row-fluid">
      <section class="span12">

        <img id="logo" src="/<?php print drupal_get_path('theme', 'nesi_bootstrap'); ?>/assets/img/nesi-logo.png" />

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

<?php $count = 0; ?>
<?php foreach($data as $field => $val) :?>
  <fieldset class="field-group-fieldset form-wrapper <?php print (++$count%2 ? 'odd' : 'even'); ?>">
    <legend><span class="fieldset-legend"><?php print $val['field_label']  ?></span></legend>
    <div class="fieldset-wrapper">
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