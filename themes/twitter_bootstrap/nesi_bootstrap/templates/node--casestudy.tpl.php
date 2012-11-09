<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> case-study clearfix"<?php print $attributes; ?> role="main">


  <header>
    <?php print render($title_prefix); ?>
    <?php //if (!$page && $title): ?>
      <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
    <?php //endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($display_submitted): ?>
      <p class="meta meta-date">
        <?php print $user_picture; ?>
        <?php print $submitted; ?>
      </p>
    <?php endif; ?>
  </header>
  <div class="main-cs-image">
  
    <figure><?php print render($content['field_image']); ?></figure>
  </div>
  <div class="entry">

   <blockquote><p><?php print $content['field_pull_out_text'][0]['#markup']; ?></p></blockquote>
      <?php print render($content['field_tags']); ?>
  <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    hide($content['field_pull_out_text']);
    print $content['body'][0]['#markup'];
    //print render($content);
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
