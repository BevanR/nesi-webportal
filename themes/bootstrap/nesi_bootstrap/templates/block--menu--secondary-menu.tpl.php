<nav class="span3">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h3>Access and Allocations</h3>
  <?php endif;?>
  <?php print render($title_suffix); ?>

  <?php print $content ?>
</nav>
