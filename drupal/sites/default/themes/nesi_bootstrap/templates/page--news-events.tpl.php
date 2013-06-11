  <?php print render($page['header']); ?>
  <?php print render($page['subheader']); ?>
	
<div class="container news">
	  
  <?php if ($breadcrumb): ?>
	<div class="row-fluid">
    <div class="breadcrumbs"><?php print $breadcrumb; ?></div>
  </div>
  <?php endif;?>
  <div class="row-fluid">
    <?php if ($page['sidebar_first']): ?>
      <aside class="span3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>  
	  
	  <section class="<?php print _bootstrap_content_span($columns); ?>">  
      <?php if ($page['highlighted']): ?>
        <div class="highlighted hero-unit"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
      <!--<a id="main-content"></a>-->
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
      <header>
      <h1><?php print $title; ?></h1>
      </header>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if ($tabs): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if ($page['help']): ?> 
        <div class="well"><?php print render($page['help']); ?></div>
      <?php endif; ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
	  </section>

    <?php if ($page['sidebar_second']): ?>
      <aside class="span3" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

  </div>
</div>

  <?php print render($page['footer']); ?>

  <?php print render($page['directory']); ?>

  <?php print render($page['collaborators']); ?>

