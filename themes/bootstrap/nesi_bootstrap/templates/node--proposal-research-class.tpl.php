<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?> role="main">

  <header>
    <?php print render($title_prefix); ?>
      <h1<?php print $title_attributes; ?>><?php print $title; ?> <span>- <?php print nesi_bootstrap_proposal_status($node->nid); ?></span></h1>
    <?php print render($title_suffix); ?>
    <?php //print l('Back to Dashboard', 'user/dashboard', array('attributes' => array('id' => 'back-to-dashboard', 'class' => 'btn nesi-btn'))); ?>
  </header>

  <div id="proposal-statistics">

    <div class="labels">
      <h2>Proposal statistics</h2>
      <h3>Research Proposal</h3>
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

  <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    print render($content);
  ?>

  <footer>
    <div class="proposal-actions pull-right">
    <?php print l('Edit proposal', 'node/' . $nid . '/edit', array('attributes' => array('id' => 'edit-proposal', 'class' => 'btn nesi-btn'))); ?>
    <?php
      $proposal_flag = flag_get_flag('p_submit_proposal');
      if (!$proposal_flag->is_flagged($node->nid)) {
        print flag_create_link('p_submit_proposal', $node->nid);
      } 
    ?>
    </div>
  </footer>

</article> <!-- /.node -->
