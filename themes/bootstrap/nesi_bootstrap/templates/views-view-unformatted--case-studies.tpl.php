<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php $count = 0; ?>
<?php foreach ($rows as $id => $row): ?>
<?php $count++; ?>
<?php if ($count == 1) { echo('<section class="featured">'); } ?>
<?php if ($count == 2) { echo('<section id="case-study-teasers" class="teasers" role="main">'); } ?>
<article class="teaser">
    <?php print $row; ?>
</article>
<?php if ($count == 1) { echo('</section>'); } ?>
<?php endforeach; ?>
</section>
