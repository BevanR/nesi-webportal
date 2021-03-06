<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */
?>
<?php //print l('Submit a proposal', 'apply/nojs/create-proposal', array('attributes' => array('id' => 'submit-proposal', 'class' => 'btn'))); ?>
<div class="profile"<?php print $attributes; ?>>
<?php 
  $account = menu_get_object('user');
  $r_profile = profile2_load_by_user($account->uid); 
?>
  <div class="module-wrapper module-wrapper-first">
    <h2>Account information</h2>
    <div class="module module-account">
      <div class="account-photo"><?php print render($user_profile['user_picture']); ?></div>
      <div class="account-name"><?php print format_username($account); ?></div>
      <div class="account-mail"><?php print $account->mail; ?></div>
      <div class="account-history"><?php print render($user_profile['summary']['member_for']); ?></div>
    </div>
  </div>

  <div class="module-wrapper">
    <h2>Researcher information</h2>
    <div class="module module-researcher">
      <!--<div class="researcher-logo">TODO: Add institution logo</div>-->
      <div class="researcher-institution">
        <strong>Institution</strong><br />
        <?php print $r_profile['researcher_profile']->field_user_institution[LANGUAGE_NONE][0]['value']; ?>
      </div>
      <div class="researcher-department">
        <strong>Department / Group</strong><br />
        <?php print $r_profile['researcher_profile']->field_user_department[LANGUAGE_NONE][0]['value']; ?>
      </div>
      <div class="researcher-position">
        <strong>Position / Job title</strong><br />
        <?php print $r_profile['researcher_profile']->field_user_position[LANGUAGE_NONE][0]['value']; ?>
      </div>
    </div>
  </div>

  <div class="module-wrapper module-wrapper-last">
    <h2>Contact information</h2>
    <div class="module module-contact">
      <div class="contact-telephone">
        <strong>Telephone</strong><br />
        <?php print $r_profile['researcher_profile']->field_user_phone[LANGUAGE_NONE][0]['value']; ?>
      </div>
      <div class="contact-address">
        <strong>Address</strong><br />
        <?php print $r_profile['researcher_profile']->field_user_address[LANGUAGE_NONE][0]['value']; ?>
      </div>
      <div class="contact-email">
        <strong>Alternate email</strong><br />
        <?php print $r_profile['researcher_profile']->field_user_altemail[LANGUAGE_NONE][0]['value']; ?>
      </div>
    </div>
  </div>

  <?php print l('Edit profile', 'user/' . $account->uid . '/edit', array('attributes' => array('id' => 'edit-profile', 'class' => 'btn nesi-btn'))); ?>

</div>
