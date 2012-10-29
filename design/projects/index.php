<?php include('../_inc/_html_head.php') ?>

<body class="">
	<?php $active = 0; include('../_inc/_navbar.php') ?>

	<div class="container">
		<div class="row-fluid">
			<div class="breadcrumbs">
				<ol>
					<li><a href="#">Dashboard</a></li>
					<li><a href="#">Projects</a></li>
				</ol>
			</div>
		</div>
		<div class="row-fluid">
			<div class="span9">
				<article role="main">
					<h1>Current Projects</h1>
					<ol>
						<li><a href="/projects/project-no1.php">Regional Climate Simulations of New Zealand recent past climate change episodes</a></li>
					</ol>

				</article>
			</div>
			<div class="span2 offset1">
				<?php $active = 3; include('../_inc/_researcher_nav.php') ?>
			</div>
		</div> <!-- /Row Fluid -->
	</div> <!-- /container -->

	<?php include('../_inc/_footer.php') ?>
	<?php include('../_inc/_footer_scripts.php') ?>

	<script type="text/javascript">

	</script>
	</body>
</html>
