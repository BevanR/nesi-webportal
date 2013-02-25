<?php
  # Template for stats block that appears on the front page
  $data = $variables['data'];
?>
<div id="stats_cpu_cores">
  <?php print $data['stats_cpu_cores'] ?>
</div>
<div id="stats_memory">
  <?php print $data['stats_memory'] ?>
</div>
<div id="stats_peak_speeds">
  <?php print $data['stats_peak_speeds'] ?>
</div>
<div id="stats_disk_storage">
  <?php print $data['stats_disk_storage'] ?>
</div>
