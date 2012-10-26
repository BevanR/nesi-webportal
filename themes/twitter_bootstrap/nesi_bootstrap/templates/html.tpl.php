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
	<style>
		body {
		padding-top: 90px; /* 90px to make the container go all the way to the bottom of the topbar */
		}
	</style>

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
<div class="row-fluid directorynav">
			<nav class="span3">
				<h3>Services</h3>
				<ul class="unstyled">
					<li><a href="#">HPC Online</a></li>
					<li><a href="#">Research data</a></li>
					<li><a href="#">Data Fabric</a></li>
					<li><a href="#">Data Transfer</a></li>
				</ul>
			</nav>
			<nav class="span3">
				<h3>Access &amp; Allocations</h3>
				<ul class="unstyled">
					<li><a href="/portal/hpc-calc">Calculator</a></li>
					<li><a href="/?q=apply">Propose</a></li>
					<li><a href="/?q=access-policy">Access Policy</a></li>
				</ul>
			</nav>
			<nav class="span3">
				<h3>Support</h3>
				<ul class="unstyled">
					<li><a href="https://support.nesi.org.nz/anonymous_requests/new">Submit a Request</a></li>
					<li><a href="https://support.nesi.org.nz/forums/20255713-knowledge-base">Knowledge base</a></li>
					<li><a href="https://support.nesi.org.nz/forums">FAQ</a></li>
				</ul>
			</nav>
			<nav class="span3">
				<h3>About NeSI</h3>
				<ul class="unstyled">
					<li><a href="/?q=news-events">News</a></li>
					<li><a href="/?q=news-events">Events</a></li>
					<li><a href="/?q=facilities">Facilitites</a></li>
					<li><a href="/?q=case-studies">Case Studies</a></li>
				</ul>
			</nav>
		</div>

		</div>
	</div> <!-- /container -->

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
