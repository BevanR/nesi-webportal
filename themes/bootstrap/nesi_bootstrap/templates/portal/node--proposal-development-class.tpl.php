<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> proposal clearfix"<?php print $attributes; ?> role="main">

  <header>
    <?php print render($title_prefix); ?>
    <?php //if (!$page && $title): ?>
      <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
    <?php //endif; ?>
    <?php print render($title_suffix); ?>
    <div class="meta">
    <?php if ($display_submitted): ?>
      <p class="date">
        <?php //print $user_picture; ?>
        <?php print $submitted; ?>
      </p>
      <p>Proposal Type: Proposal Development Class</p>
      <div id="proposal-status">
        <p><em>Current Status:</em>&nbsp;<?php 
          $flag = flag_get_flag('pdc_check_proposal');
          if ($flag->is_flagged($node->nid)) {
            ?><strong>Pending</strong><?php
          }
          else {
            ?><strong>In Draft</strong><?php
          }
        ?></p>
        <?php if (!empty($content['links']['flag'])): ?>
          <?php print render($content['links']['flag']); ?>
        <?php endif; ?>
      </div>
    <?php endif; ?>
    </div>
  </header>
  <aside class="proposal-allocation-requests">
    <h3>Platform details</h3>
    <ul class="unstyled">
      <li><strong>Desired HPC Platform:</strong> <?php print render($content['field_prc_proposed_hpc_platform'][0]['#markup']); ?></li>
      <!--<li><strong>CPU core hours:</strong> 150000</li>-->
      <!--<li><strong>Storage Requirements:</strong> 5TB</li>-->
    </ul>
    <h4>Software Requirements:</h4>
    <p><?php print render($content['field_pdc_software_requirements'][0]['#markup']); ?></p>
    <h4>Storage Requirements:</h4>
    <p><?php print render($content['field_pdc_storage_requirements'][0]['#markup']); ?></p>
    <!--<h4>Data Transfer</h4>
    <p>No Data Transfer required.</p>-->
    <h4>Project Team</h4>
    <?php 
    $content['nesi_project']['field_p_teamlist']['#label_display'] = 'hidden'; 
    print render($content['nesi_project']['field_p_teamlist']); 
    ?>
  </aside>
  <div class="content proposal-details">
    <section>
      <h2>Project Description</h2>
      <?php print render($content['field_pdc_description'][0]['#markup']); ?>
      <h3>Project Team's HPC Experience</h3>
      <?php print render($content['field_pdc_team_hpcexperience'][0]['#markup']); ?>
    </section>
    <section>
      <!--<h2>Expert Support</h2>-->
      <?php print render($content['field_pdc_expert_support']); ?>
    </section>
    <section>
      <h2>Further Information</h2>
      <?php print render($content['field_pdc_additional_information'][0]['#markup']); ?>
    </section>
  </div>
  <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
    <footer>
      <?php print render($content['field_tags']); ?>
      <?php //print render($content['links']); ?>
    </footer>
  <?php endif; ?>

  <?php print render($content['comments']); ?>
</article> <!-- /.node -->
