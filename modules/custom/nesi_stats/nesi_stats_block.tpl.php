<?php
  # There is a wrapper template to this template in the theme
  # folder named block--nesi-stats--front-stats.tpl.php
  #
  # Template for stats block that appears on the front page
  $data = $variables['data'];
?>
<div class="row-fluid">
  <div id="stats_cpu_cores" class="span4">
    <div class="stats-header">CPU Cores</div>
    <div class="stats-stat"><?php print $data['stats_cpu_cores'] ?></div>
    <div class="stats-description">Distributed across facilities</div>
  </div>
  <div id="stats_memory" class="span4">
    <div class="stats-header">Memory</div>
    <div class="stats-stat"><?php print $data['stats_memory'] ?></div>
    <div class="stats-description">GB of RAM</div>
  </div>
  <div id="stats_peak_speeds" class="span4">
    <div class="stats-header">Peak Speeds</div>
    <div class="stats-stat"><?php print $data['stats_peak_speeds'] ?></div>
    <div class="stats-description">&nbsp;</div>
  </div>
  <div id="stats_disk_storage" class="span4">
    <div class="stats-header">Disk Storage</div>
    <div class="stats-stat"><?php print $data['stats_disk_storage'] ?></div>
    <div class="stats-description">Distributed across facilities</div>
  </div>
</div>