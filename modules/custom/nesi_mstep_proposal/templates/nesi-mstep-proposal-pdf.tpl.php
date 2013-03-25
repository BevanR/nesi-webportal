<?php
/**
 * This file is used to output the pdf proposal conent.
 *
 * @file nesi-mstep-proposal-pdf.tpl.php
 */
$data = $variables['data'];
//print_r($data);
?>
<?php foreach($data as $field => $val) :?>

  <?php// print_r($field)  ?>
  <h3><?php print $val['field_label']  ?></h3>

  <?php
    if(is_array($val['field_val'])):
      // Need to know how this is going to be formated
      // speak with Sam 
      print_r($val['field_val']);
    else:
  ?>
  <p><?php print $val['field_val']  ?></p>
  <?php  
    endif;
  ?>

  
<?php
  endforeach;
?>
