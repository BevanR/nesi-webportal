<div class="item<?php if ($active) { print(' active'); } ?>" style="background-color:#<?php print $banner_bg_color; ?>;">
  <div class="container">
    <a href="<?php print $link_target; ?>"><img src="<?php print $image_path; ?>"></a>
    <div class="slide-content">
      <h2 class="slide-title">
        <a href="<?php print $link_target; ?>"><span class="line1" style="color:#FFFFFF; background-color:#<?php print $primary_bg_color; ?>;"><?php print $primary_title; ?></span></a>
      </h2>
      <h3>
        <a href="<?php print $link_target; ?>"><span class="line2" style="color:#FFFFFF; background-color:#<?php print $secondary_bg_color; ?>;"><?php print $secondary_title; ?></span></a>
        <a href="<?php print $link_target; ?>"><span class="line2" style="color:#FFFFFF; background-color:#<?php print $secondary_bg_color; ?>;"><?php print $secondary_title_line_2; ?></span></a>
      </h3>
    </div>
  </div>
</div>
