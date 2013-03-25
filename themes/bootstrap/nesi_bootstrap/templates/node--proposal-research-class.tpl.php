<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?> role="main">

  <header>
    <?php print render($title_prefix); ?>
    <?php //if (!$page && $title): ?>
      <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
    <?php //endif; ?>
    <?php print render($title_suffix); ?>
  </header>

  <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    print render($content);
  ?>

  <footer>
    <?php print l('Edit proposal', 'node/' . $node->nid . '/edit', array('attributes' => array('id' => 'edit-proposal', 'class' => 'btn nesi-btn'))); ?>
  </footer>

</article> <!-- /.node -->