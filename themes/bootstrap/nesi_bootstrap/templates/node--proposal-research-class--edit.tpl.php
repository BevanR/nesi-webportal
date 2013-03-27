<?php print_r($form); ?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?> role="main">

  <header>
    <?php print render($title_prefix); ?>
      <h1<?php print $title_attributes; ?>>Edit Proposal #<?php print render($form['nid']); ?> <span>- <?php print nesi_bootstrap_proposal_status($node->nid); ?></span></h1>
    <?php print render($title_suffix); ?>
  </header>

  <div id="proposal-statistics">

    <div>
      <h2>Proposal statistics</h2>
      <h3>Research Proposal</h3>
    </div>

    <div>
      <h3>Submitted on</h3>
      <?php print format_date($node->created, 'custom', 'jS F Y'); ?>
    </div>

    <div>
      <h3>Submitted by</h3>
      <?php print $node->name; ?>
    </div>

    <div>
      <h3>Assigned to</h3>
      TODO
    </div>

  </div>

  <?php print drupal_render_children($form); ?>

</article> <!-- /.node -->