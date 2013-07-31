<?php
switch ( $proposal_type ) {
  case 'proposal_research_class' :
    $type = 'Research Proposal';
    break;
  case 'proposal_development_class' :
    $type = 'Development Proposal';
    break;
  case 'proposal_postgrad_class' :
    $type = 'Postgraduate Proposal';
    break;
}
?>
<div class="proposal-outline-wrapper">
  <article class="proposal-outline">
    <header>
      <h1 class="proposal-title"><a href="<?php print $proposal_link; ?>"><strong><?php print $type; ?><?php if ( $proposal_platform != 'unknown' ) : ?> - <?php print strtoupper($proposal_platform); ?><?php endif; ?></strong></a><span class="proposal-operations"><?php print $proposal_operations; ?></span><br /><?php print $proposal_title; ?></h1>
    </header>
    <div class="proposal-meta">
      <!--
      <div>
        <?php print $proposal_id; ?>
      </div>
      -->
      <div>
        <?php print $proposal_start_date; ?>
      </div>
      <!--
      <div>
        TODO
      </div>
      -->
      <div>
        <?php //print $proposal_cpu_hours; ?>
      </div>
    </div>
  </article>
</div>
