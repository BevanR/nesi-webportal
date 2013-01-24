<article class="project-outline">
  <header>
    <h1 class="project-title"><a href="<?php print $proposal_link; ?>"><?php print $proposal_title; ?></a></h1>
  </header>
  <div class="stats-pane">
    <!--<div class="project-allocation-summary">
      <h3 class="allocation-title">Allocation Summary</h3>
      <p class="date">Allocation begins: 12/10/2012</p>
      <p class="date">Allocation ends: 12/11/2012</p>
    </div>-->
    <div class="allocation-stats">
      <!--<h2 class="project-platform-title">Platform: POWER 7</h2>-->
      <div class="project-status">
        <small>Status</small>
        <span class="label label-info"><?php print $proposal_state; ?></span>
        <!--<small>Progress</small>
        <div style="width: 20%;" class="bar"></div>-->
      </div>
      <!--<ul class="stats-tabs">
        <li>12 <span>CPUs</span></li>
        <li>7680 <span>CPU hours</span></li>
        <li>80 <span>Wall clock hours</span></li>
      </ul>-->
    </div>
  </div>
</article>
