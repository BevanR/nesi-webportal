<?php
switch ( $proposal_type ) {
  case 'proposal_research_class' :
    $type = 'Research Proposal';
    break;
  case 'proposal_development_class' :
    $type = 'Development Proposal';
    break;
  case 'proposal_collaborator_class' :
    $type = 'Collaborator Proposal';
    break;
}
?>
<article class="proposal-outline">
  <header>
    <h1 class="proposal-title"><a href="<?php print $proposal_link; ?>"><strong><?php print $type; ?> - <?php print $proposal_platform; ?><?php if ($proposal_state) : ?> - <span><?php print $proposal_state; ?></span><?php endif; ?></strong><?php print $proposal_title; ?></a></h1>
  </header>
  <div class="proposal-status">
    <div>
      <div class="dashboard-label">START</div>
      <?php print $proposal_start_date; ?>
    </div>
    <div>
      <div class="dashboard-label">CPU HOURS</div>
      <?php print $proposal_cpu_hours; ?>
    </div>
  </div>
</article>
