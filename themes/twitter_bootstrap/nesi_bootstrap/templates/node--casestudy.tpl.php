<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> case-study clearfix"<?php print $attributes; ?> role="main">


  <header>
    <?php print render($title_prefix); ?>
    <?php //if (!$page && $title): ?>
      <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
    <?php //endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($display_submitted): ?>
      <span class="submitted">
        <?php print $user_picture; ?>
        <?php print $submitted; ?>
      </span>
    <?php endif; ?>
  </header>
  
  <div class="entry">

      <?php print render($content['field_tags']); ?>
  <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    hide($content['field_pull_out_text']);
    //kpr($content);
    
    print render($content);
  ?>
  </div>

  <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
    <footer>
      <?php print render($content['field_tags']); ?>
      <?php print render($content['links']); ?>
    </footer>
  <?php endif; ?>

  <?php print render($content['comments']); ?>

</article> <!-- /.node -->
