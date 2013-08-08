<nav class="span3">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h3><?php print $title; ?></h3>
  <?php endif;?>
  <?php print render($title_suffix); ?>

  <?php print $content ?>
</nav>
