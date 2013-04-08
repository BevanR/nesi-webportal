<!DOCTYPE html>
<!--[if IE 6 ]> <html class="ie6"> <![endif]-->
<!--[if IE 7 ]> <html class="ie7"> <![endif]-->
<!--[if IE 8 ]> <html class="ie8"> <![endif]-->
<!--[if IE 9 ]> <html class="ie9"> <![endif]-->
<!--[if (gt IE 9)|!(IE)]><!-->
<html lang="<?php print $language->language; ?>">
<!--<![endif]-->
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="shortcut icon" href="<?php print $directory; ?>/favicon.ico" type="image/x-icon" />
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>


  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
    <script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->

	<!-- Le fav and touch icons -->
	<link rel="apple-touch-icon-precomposed" sizes="144x144" href="/<?php print $directory; ?>/assets/ico/apple-touch-icon-144-precomposed.png">
	<link rel="apple-touch-icon-precomposed" sizes="114x114" href="/<?php print $directory; ?>/assets/ico/apple-touch-icon-114-precomposed.png">
	<link rel="apple-touch-icon-precomposed" sizes="72x72" href="/<?php print $directory; ?>/assets/ico/apple-touch-icon-72-precomposed.png">
	<link rel="apple-touch-icon-precomposed" href="/<?php print $directory; ?>/assets/ico/apple-touch-icon-57-precomposed.png">

</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>


	<div class="container">
		<div class="row-fluid collaborators">
			<div>
				<h3 class="span3">Our collaborators</h3>
				<div class="span9">
					<ul class="unstyled inline-list">
						<li>
							<a href="http://www.auckland.ac.nz/uoa/">
								<img src="/<?php print $directory; ?>/assets/img/logo-u-of-a.jpg" alt="logo">
							</a>
						</li>
						<li>
							<a href="http://www.canterbury.ac.nz/">
								<img src="/<?php print $directory; ?>/assets/img/logo-u-of-c.jpg" alt="logo">
							</a>
						</li>
						<li>
							<a href="http://www.niwa.co.nz/">
								<img src="/<?php print $directory; ?>/assets/img/logo-niwa.jpg" alt="logo">
							</a>
						</li>
						<li>
							<a href="http://www.msi.govt.nz/">
								<img src="/<?php print $directory; ?>/assets/img/logo-ministry-of-si.jpg" alt="logo">
							</a>
						</li>
						<li>
							<a href="http://www.otago.ac.nz/">
								<img src="/<?php print $directory; ?>/assets/img/logo-manaaki-whenua.jpg" alt="logo">
							</a>
						</li>
						<li>
							<a href="http://www.landcareresearch.co.nz/">
								<img src="/<?php print $directory; ?>/assets/img/logo-u-of-o.jpg" alt="logo">
							</a>
						</li>
					</ul>
				</div>
			</div>
		</div>
	</div>
	<footer>
    <div class="legal">
      <div class="container">&copy;<?php print date('Y'); ?> New Zealand eScience Infrastructure. All rights reserved</div>
    </div>
	</footer>
<script type="text/javascript" src="//assets.zendesk.com/external/zenbox/v2.5/zenbox.js"></script>
<style type="text/css" media="screen, projection">
  @import url(//assets.zendesk.com/external/zenbox/v2.5/zenbox.css);
</style>
<script type="text/javascript">
  if (typeof(Zenbox) !== "undefined") {
    Zenbox.init({
      dropboxID:   "20113316",
      url:         "https://nesi.zendesk.com",
      tabID:       "Support",
      tabColor:    "#2ba0c2",
      tabPosition: "Right"
    });
  }
</script>
<script type="text/javascript">
jQuery('#zenbox_tab').addClass('nesizen');
jQuery('#feedback_tab_text').addClass('nesizen');
</script>
<style type="text/css" media="screen, projection">
#zenbox_tab.nesizen #feedback_tab_text.nesizen {
    font-size: .9em;
    font-weight: bold;
    margin: 25px auto;
    text-align: center;
    color: #fff;
    letter-spacing: .09em;
    font-family: "Helvetica Neue", Helvetica, Arial, sans-serif;
}

#zenbox_tab.nesizen {
    right: 0px;
    background-position: left 0;
    -webkit-transform: rotate(90deg);
    -moz-transform: rotate(90deg);
    -o-transform: rotate(90deg);
    -ms-transform: rotate(90deg);
    transform: rotate(90deg);
}

#zenbox_tab.nesizen {
    font-family: "Helvetica Neue", Helvetica, Arial, sans-serif;
    border: 0;
    margin: 0;
    cursor: pointer;
    overflow: hidden;
    position: fixed;
    top: 23%;
    height: 15px;
    min-width: 90px;
    z-index: 10000;
    white-space: nowrap;
    padding: 0 10px 35px 10px;
    background-color: #2ba0c2;
    right: -40px;
}
</style>
</body>
</html>
