<?php

/**
 * @file field.tpl.php
 * Default template implementation to display the value of a field.
 *
 * This file is not used and is here as a starting point for customization only.
 * @see theme_field()
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 */
?>
<!--
THIS FILE IS NOT USED AND IS HERE AS A STARTING POINT FOR CUSTOMIZATION ONLY.
See http://api.drupal.org/api/function/theme_field/7 for details.
After copying this file to your theme's folder and customizing it, remove this
HTML comment.
-->
<?php 
  $node_item = FALSE;
  $project_node = FALSE;
  $project_pi = FALSE;
  $manage_team = arg(2); 
  if (arg(0) == 'node') {
    $node_item = node_load(arg(1));
    if (($node_item->type == 'proposal_development_class') || ($node_item->type == 'proposal_research_class') ) {
      $project_node = node_load($node_item->field_p_project_id[LANGUAGE_NONE][0]['nid']);
      if (!empty($project_node->field_p_principal_investigator[LANGUAGE_NONE][0]['uid'])) {
        $project_pi = user_load($project_node->field_p_principal_investigator[LANGUAGE_NONE][0]['uid']);
      }
    }
  }
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <?php if ($manage_team == 'team') { ?>
      <h2><?php print $label ?>&nbsp;</h2>
      <?php if ($node_item) { ?>
        <div class="team-members"> <!-- begin team-members -->
        <?php if (($project_node) && ($project_pi)) { ?>
          <div id="principal">
            <strong>Principal Investigator:</strong>
            <?php
            $pi_member_profile = profile2_load_by_user($project_pi->uid);
            if (!empty($pi_member_profile['researcher_profile'])) {
              $name = $pi_member_profile['researcher_profile']->field_user_firstname[LANGUAGE_NONE][0]['value'].' '.$pi_member_profile['researcher_profile']->field_user_lastname[LANGUAGE_NONE][0]['value'];
              print $name.'&nbsp;&nbsp;';
              print '<a href="mailto:'.$project_pi->mail.'">'.$project_pi->mail.'</a>'.'&nbsp;&nbsp;';
              print 'Phone: '.$pi_member_profile['researcher_profile']->field_user_phone[LANGUAGE_NONE][0]['value'];
            }
            ?>
          </div> 
        <?php } ?>
      <?php } ?>
    <?php } else { ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
    <?php } ?>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
    <?php if ($manage_team == 'team') { ?>
      <table class="table">
      <thead></th><th>Name</th><th>Contact Email</th><th>&nbsp;</th></tr></thead>
      <tbody>
    <?php foreach ($items as $delta => $item): 
      /* ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>> */ ?>
      <?php 
        //print render($item); 
	      // Load researcher profile
	      $team_member_profile = profile2_load_by_user($item['#options']['entity']->uid);
	    ?>
      <tr>
      <td><?php 
        //print $item['#title'];
	      if (!empty($team_member_profile['researcher_profile'])) {
		      $name = $team_member_profile['researcher_profile']->field_user_firstname[LANGUAGE_NONE][0]['value'].' '.$team_member_profile['researcher_profile']->field_user_lastname[LANGUAGE_NONE][0]['value'];
		      print $name;
	      }
	  ?></td>
      <td><?php print '<a href="mailto:'.$item['#options']['entity']->mail.'">'.$item['#options']['entity']->mail.'</a>'; ?></td>
      <td>
      <?php 
        if ($node_item) {
          if ($node_item->uid == $item['#options']['entity']->uid) {
            ?><p>Project Submitter</p><?php
          }
          else {
            ?><a class="btn" href="/<?php print current_path(); ?>/<?php print($item['#options']['entity']->uid); ?>/remove">Remove</a><?php
          }
        }
      ?>
      </td>
      </tr>
      <?php //</div> ?>
    <?php endforeach; ?>
      </tbody>
      </table>
      </div> <!-- end team-members -->
    <?php 
      }
      else {
        ?><p><?php
        foreach ($items as $delta => $item): 
	        $team_member_profile = profile2_load_by_user($item['#options']['entity']->uid);
	        if (!empty($team_member_profile['researcher_profile'])) {
		        $name = $team_member_profile['researcher_profile']->field_user_firstname[LANGUAGE_NONE][0]['value'].' '.$team_member_profile['researcher_profile']->field_user_lastname[LANGUAGE_NONE][0]['value'];
		        print $name.'<br />';
	        }
          //print $item['#title'].'<br />'; 
        endforeach;
        ?></p><?php
      }
    ?>
  </div>
</div>
