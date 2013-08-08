<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<nav class="sub-nav">
  <h2>Events</h2>
<?php if (!empty($title)): ?>
  <h2><?php print $title; ?></h2>
<?php endif; ?>
<ul class="menu nav">
<?php foreach ($rows as $id => $row): ?>
    <li><?php print $row; ?></li>
<?php endforeach; ?>
</ul>
</nav>
