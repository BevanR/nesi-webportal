<?php //print_r($form['#node']); ?>
<?php
$nid = $form['#node']->nid;
$created = $form['#node']->created;
$name = $form['#node']->name;
?>
<article id="node-<?php print $nid; ?>" class="node clearfix"<?php print $attributes; ?> role="main">

  <header>
    <?php print render($title_prefix); ?>
      <h1<?php print $title_attributes; ?>>Edit Proposal #<?php print $nid; ?> <span>- <?php print nesi_bootstrap_proposal_status($nid); ?></span></h1>
    <?php print render($title_suffix); ?>
  </header>

  <div id="proposal-statistics">

    <div>
      <h2>Proposal statistics</h2>
      <h3>Technical Development Proposal</h3>
    </div>

    <div class="inner">  
      <div>
        <h3>Submitted on</h3>
        <p><?php print format_date($created, 'custom', 'jS F Y'); ?></p>
      </div>
  
      <div>
        <h3>Submitted by</h3>
        <p><?php print $name; ?></p>
      </div>
  
      <div>
        <h3>Assigned to</h3>
        <p>TODO</p>
      </div>
    </div>

  </div>

  <?php print drupal_render_children($form); ?>

</article> <!-- /.node -->