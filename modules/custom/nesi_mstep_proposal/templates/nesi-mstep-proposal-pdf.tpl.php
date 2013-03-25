<?php

$data = $variables['data'];
?>
<h1>Coming from the Proposal Pdf template</h1>

<?php foreach($data as $field => $val) :?>

<h3><?php print $val['field_label']  ?></h3>
<p><?php print $val['field_val']  ?></p>

<?php
  endforeach;

?>
