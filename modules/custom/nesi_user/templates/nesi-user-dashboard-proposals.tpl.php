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
    <h1 class="proposal-title"><a href="<?php print $proposal_link; ?>"><strong><?php print $type; ?> - <?php print $proposal_platform; ?></strong><?php print $proposal_title; ?></a></h1>
  </header>
  <div class="proposal-status">
    <small>Status</small>
    <span class="label label-info"><?php print $proposal_state; ?></span>
    <?php print $proposal_operations; ?>
  </div>
</article>
