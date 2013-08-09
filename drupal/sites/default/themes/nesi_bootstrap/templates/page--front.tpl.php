
  <?php print render($page['header']); ?>

  <?php if ( isset($messages) && !empty($messages) ) : ?>
    <div class="container">
      <div class="fluid">
        <?php print $messages; ?>
      </div>
    </div>
  <?php endif; ?>
  
  <?php print render($page['subheader']); ?>

  <?php print render($page['directory']); ?>

  <?php print render($page['collaborators']); ?>

	<script src="<?php print $directory; ?>/assets/js/jquery.lettering.js"></script>

	<script type="text/javascript">
    jQuery(document).ready(function() {
      jQuery('[rel="tooltip"]').tooltip();
      jQuery('#home-hero').carousel();
      //jQuery('#home-hero .slide-title').lettering('lines').children('words');
    });
	</script>
