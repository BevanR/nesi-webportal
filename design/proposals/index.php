<?php include('../_inc/_html_head.php') ?>

<body class="">
	<?php $active = 0; include('../_inc/_navbar.php') ?>

	<div class="container">
		<div class="row-fluid">
			<div class="breadcrumbs">
				<ol>
					<li><a href="#">Dashboard</a></li>
					<li><a href="#">Proposals</a></li>
				</ol>
			</div>
		</div>
		<div class="row-fluid">
			<div class="span8">
				<article role="main">

					<div class="module centered-module bordered-module">
						<div>
							<article id="create-proposal">
								<h1>Create a proposal</h1>
								<div class="content">
									<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.</p>
									<div class="module-actions">
										<a href="#" class="btn btn-large">Development Proposal</a>
										<a href="#" class="btn btn-large">Research Proposal</a>
									</div>
								</div>
							</article>
						</div>
					</div>

					<div>
						<section>
							<h1>Apply for access to HPC facilities</h1>
								<article>
									<h1>Development Proposal</h1>
									<p>Easy to request with fast review cycles, open to receiving proposals on an ongoing on demand basis. PIs may request a single computational resource or a combination of resources.</p>
								</article>

								<article>
									<h1>Research Proposal</h1>
									<p>Research allocations often follow successful completion of Proposal Development allocations. A PI must either successfully complete a Proposal Development allocation or be able to demonstrate prior relevant experience and success in running their codes on HPC facilities prior to receiving a Research allocation. Research allocations can be proposed to any public research funding body and for any of our HPC facilities.</p>
								</article>
						</section>
					</div>

				</article>
			</div>
			<div class="span2 offset1">
				<nav class="sub-nav">
					<h2>Researcher Menu</h2>
					<ul>
						<li><a href="#">Dashboard</a></li>
						<li class="active"><a href="#">Add Proposal</a></li>
						<li><a href="#">Live Projects</a></li>
						<li><a href="#">History</a></li>
						<li><a href="#">HPC calculator</a></li>
					</ul>
				</nav>
			</div>
		</div> <!-- /Row Fluid -->
	</div> <!-- /container -->

	<?php include('../_inc/_footer.php') ?>
	<?php include('../_inc/_footer_scripts.php') ?>

	<script type="text/javascript">

	</script>
	</body>
</html>
