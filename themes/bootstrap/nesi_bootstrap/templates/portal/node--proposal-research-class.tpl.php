<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> proposal clearfix"<?php print $attributes; ?> role="main">

  <header>
    <?php print render($title_prefix); ?>
    <?php //if (!$page && $title): ?>
      <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
      <div style="padding:20px;">
        <?php 
          $flag = flag_get_flag('prc_check_proposal');
          if ($flag->is_flagged($node->nid)) {
            ?>
            <div class="project-status">
              <small>Status</small>
              <span class="label label-info">Pending</span>
            </div>
            <?php
          }
          else {
            ?><div class="project-status">
              <small>Status</small>
              <span class="label label-info">In Draft</span>
            </div>
            <?php
          }
        ?>
      </div>
    <?php //endif; ?>
    <?php print render($title_suffix); ?>
    <div class="meta">
    <?php if ($display_submitted): ?>
      <p class="date">
        <?php //print $user_picture; ?>
        <?php print $submitted; ?>
      </p>
      <p>Proposal Type: Research Class</p>
        <div id="proposal-status" style="top:45px;">
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
    <p><?php print render($content['field_prc_software_requirements'][0]['#markup']); ?></p>
    <h4>Storage Requirements:</h4>
    <p><?php print render($content['field_prc_storage_requirements'][0]['#markup']); ?></p>
    <h4>Data Transfer</h4>
    <p><?php print render($content['field_prc_data_transfer'][0]['#markup']); ?></p>
    <h4>Project Team</h4>
    <?php 
    $content['nesi_project']['field_p_teamlist']['#label_display'] = 'hidden'; 
    $team = render($content['nesi_project']['field_p_teamlist']); 
    if (!empty($team)) { 
      print $team; 
    }
    else {
      print "<p>No current team members.</p>";
    }
    ?>
  </aside>
  <div class="content proposal-details">
    <section>
      <h2>Scientific Goals</h2>
      <?php print render($content['field_prc_scientific_goals'][0]['#markup']); ?>
      <h3>Benefits from HPC</h3>
      <?php print render($content['field_prc_hpc_benefits'][0]['#markup']); ?>
      <h3>Project Deliverables</h3>
      <?php print render($content['field_prc_project_deliverables'][0]['#markup']); ?>
    </section>
    <section>
      <h3>Estimated number of runs/simulations</h3>
      <?php print render($content['field_prc_estimated_simulations'][0]['#markup']); ?>
      <h3>Estimated average number of CPUS per run</h3>
      <?php print render($content['field_prc_estimated_cpus'][0]['#markup']); ?>
      <h3>Estimated average length of each run (in wall-clock hours)</h3>
      <?php print render($content['field_prc_estimated_wc_hours'][0]['#markup']); ?>
      <h3>Additional usage information</h3>
      <?php print render($content['field_prc_allocation_profile'][0]['#markup']); ?>
    </section>
    <section>
      <h3>HPC Background</h3>
      <?php print render($content['field_prc_hpc_background'][0]['#markup']); ?>
      <?php print render($content['field_prc_expert_support']); ?>
      <?php print render($content['field_prc_expert_support_notes']); ?>
    </section>
    <section>
      <h3>Name of peer-reviewed research grant provider</h3>
      <?php print render($content['field_prc_funding_provider'][0]['#markup']); ?>
      <h3>Funding Amount</h3>
      <?php print render($content['field_prc_funding_amount'][0]['#markup']); ?>
      <h3>Further Information</h3>
      <?php print render($content['field_prc_additional_information'][0]['#markup']); ?>
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
