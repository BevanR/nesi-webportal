<?php
/**
 * This file is used to output the pdf proposal conent.
 *
 * @file nesi-mstep-proposal-pdf.tpl.php
 */
$data = $variables['data'];
//print_r($data);
$development_class_map = array(
  'software_installation' => 'Software Installation',
  'software_porting'      => 'Software Porting',
  'software_optimisation' => 'Software Optimisation',
  'scaling_performance'   => 'Scaling Performance',
);
?>
<?php foreach($data as $field => $val) :?>

  <h3><?php print $val['field_label']  ?></h3>

  <?php
    if(is_array($val['field_val'])):
      foreach($val['field_val'] as $key) {
        print $development_class_map[$key];
      }
    else:
  ?>
  <p><?php print $val['field_val']  ?></p>
  <?php  
    endif;
  ?>
  
<?php
  endforeach;
?>
