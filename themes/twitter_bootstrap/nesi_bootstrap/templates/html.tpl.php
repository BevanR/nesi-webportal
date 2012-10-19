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
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>

	<!-- Le styles -->
	<link href="/<?php print $directory; ?>/assets/css/bootstrap.css" rel="stylesheet">
	<link href="/<?php print $directory; ?>/assets/css/responsive.css" rel="stylesheet">

  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
    <script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->

	<!-- Le fav and touch icons -->
	<link rel="shortcut icon" href="/<?php print $directory; ?>/assets/ico/favicon.ico">
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
							<a href="#">
								<img src="/<?php print $directory; ?>/assets/img/logo-u-of-a.jpg" alt="logo">
							</a>
						</li>
						<li>
							<a href="#">
								<img src="/<?php print $directory; ?>/assets/img/logo-u-of-c.jpg" alt="logo">
							</a>
						</li>
						<li>
							<a href="#">
								<img src="/<?php print $directory; ?>/assets/img/logo-niwa.jpg" alt="logo">
							</a>
						</li>
						<li>
							<a href="#">
								<img src="/<?php print $directory; ?>/assets/img/logo-ministry-of-si.jpg" alt="logo">
							</a>
						</li>
						<li>
							<a href="#">
								<img src="/<?php print $directory; ?>/assets/img/logo-manaaki-whenua.jpg" alt="logo">
							</a>
						</li>
						<li>
							<a href="#">
								<img src="/<?php print $directory; ?>/assets/img/logo-u-of-o.jpg" alt="logo">
							</a>
						</li>
					</ul>
				</div>
			</div>
		</div>
	</div>
	<footer>
			<p class="legal">&copy;2011 New Zealand eScience Infrastructure. All rights reserved</p>
	</footer>
</body>
</html>
