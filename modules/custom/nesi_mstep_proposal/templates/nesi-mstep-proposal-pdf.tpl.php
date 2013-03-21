<?php

$data = $variables['data'];

?>
<h1>Coming from the Proposal Pdf template</h1>

<?php foreach($data as $field) :?>

<h3><?php print $field['field_label']  ?></h3>
<p><?php print $field['field_val']  ?></p>



<?php
  endforeach;
?>
