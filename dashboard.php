<?php include('_inc/_html_head.php') ?>

<body class="dashboard">
	<?php $active = 0; include('_inc/_navbar.php') ?>

	<div class="container">
		<div class="row-fluid">
			<div class="breadcrumbs">
				<ol>
					<li><a href="#">Dashboard</a></li>
				</ol>
			</div>
		</div>
		<div class="row-fluid">
			<div class="span8">
				<article role="main" class="post">

				</article>
			</div>
			<div class="span2 offset1">
				<nav class="sub-nav">
					<h2>Researcher Menu</h2>
					<ul>
						<li class="active"><a href="#">Dashboard</a></li>
						<li><a href="#">Current Proposal</a></li>
						<li><a href="#">Live Projects</a></li>
						<li><a href="#">History</a></li>
						<li><a href="#">HPC calculator</a></li>
					</ul>
				</nav>
			</div>
		</div> <!-- /Row Fluid -->
	</div> <!-- /container -->

	<?php include('_inc/_footer.php') ?>
	<?php include('_inc/_footer_scripts.php') ?>

	<script type="text/javascript">

	</script>
	</body>
</html>
