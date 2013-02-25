<?php
  # There is a wrapper template to this template in the theme
  # folder named block--nesi-stats--front-stats.tpl.php
  #
  # Template for stats block that appears on the front page
  $data = $variables['data'];
?>
<div class="row-fluid">
  <div id="stats_cpu_cores" class="span4">
    <span class="stats-header">CPU Cores</span>
    <div class="stats-stat"><?php print $data['stats_cpu_cores'] ?></div>
    <span class="stats-description">Distributed across facilities</span>
  </div>
  <div id="stats_memory" class="span4">
    <span class="stats-header">Memory</span>
    <div class="stats-stat"><?php print $data['stats_memory'] ?></div>
    <span class="stats-description">GB of RAM</span>
  </div>
  <div id="stats_peak_speeds" class="span4">
    <span class="stats-header">Peak Speeds</span>
    <div class="stats-stat"><?php print $data['stats_peak_speeds'] ?></div>
    <span class="stats-description">&nbsp;</span>
  </div>
  <div id="stats_disk_storage" class="span4">
    <span class="stats-header">Disk Storage</span>
    <div class="stats-stat"><?php print $data['stats_disk_storage'] ?></div>
    <span class="stats-description">Distributed across facilities</span>
  </div>
</div>