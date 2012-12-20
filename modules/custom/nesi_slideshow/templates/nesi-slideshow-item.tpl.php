<div class="item<?php if ($active) { print(' active'); } ?>" style="background-color:#<?php print $banner_bg_color; ?>;">
  <div class="container">
    <img src="<?php print $image_path; ?>">
    <div class="slide-content">
      <h2 class="slide-title">
        <span class="line1" style="color:#FFFFFF; background-color:#<?php print $primary_bg_color; ?>;"><?php print $primary_title; ?></span>
        <span class="line2" style="color:#FFFFFF; background-color:#<?php print $secondary_bg_color; ?>;"><?php print $secondary_title; ?></span>
      </h2>
      <p><a class="slide-link" href="<?php print $link_target; ?>" style="color:#<?php print $link_color; ?>;"><?php print $link_title; ?></a></p>
    </div>
  </div>
</div>
