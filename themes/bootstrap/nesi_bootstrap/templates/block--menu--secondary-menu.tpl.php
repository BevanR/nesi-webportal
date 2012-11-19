<nav class="sub-nav">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h2>Access and Allocations</h2>
  <?php endif;?>
  <?php print render($title_suffix); ?>

  <?php print $content ?>
</nav>
