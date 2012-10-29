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
			<div class="span9">
				<article role="main">

					<section class="clearfix">
						<h1>Projects in progress</h1>

						<article class="project-outline">
							<header>
								<h1 class="project-title"><a href="#">Research into waste disposal across New Zealand</a></h1>
							</header>
							<div class="stats-pane">
								<div class="project-allocation-summary">
									<h3 class="allocation-title">Allocation Summary</h3>
									<p class="date">Allocation begins: 12/10/2012</p>
									<p class="date">Allocation ends: 12/11/2012</p>
								</div>

								<div class="allocation-stats">
									<h2 class="project-platform-title">Platform: POWER 7</h2>
									<div class="project-progress">
										<small>Progress</small>
										<div class="bar" style="width: 20%;"></div>
									</div>
									<ul class="stats-tabs">
										<li>12 <span>CPUs</span></li>
										<li>7680 <span>CPU hours</span></li>
										<li>80 <span>Wall clock hours</span></li>
									</ul>

								</div>
							</div>
						</article>

						<article class="project-outline">
							<header>
								<h1 class="project-title"><a href="#">Research of plastic recycling</a></h1>
							</header>
							<div class="stats-pane">
								<div class="project-allocation-summary">
									<h3 class="allocation-title">Allocation Summary</h3>
									<p class="date">Allocation begins: 12/10/2012</p>
									<p class="date">Allocation ends: 12/11/2012</p>
								</div>

								<div class="allocation-stats">
									<h2 class="project-platform-title">Platform: POWER 7</h2>
									<div class="project-progress">
										<small>Progress</small>
										<div class="bar" style="width: 60%;"></div>
									</div>
									<ul class="stats-tabs">
										<li>12 <span>CPUs</span></li>
										<li>7680 <span>CPU hours</span></li>
										<li>80 <span>Wall clock hours</span></li>
									</ul>

								</div>
							</div>
						</article>

					</section>



					<div class="alert alert-info">
						Hi Oscar, it doesn't look like you have any saved or pending proposals yet, get started by creating one.
					</div>

					<div class="module centered-module bordered-module">
						<div>
							<article id="create-proposal">
								<h1>Create a proposal</h1>
								<div class="content">
									<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.</p>
									<div class="module-actions">
										<a href="#" class="btn btn-large">Development Proposal</a>
										<a href="#" class="btn btn-large">Research Proposal</a>
										<a href="/proposals" class="learn-more">Learn more about the different proposals</a>
									</div>

								</div>
							</article>
						</div>
					</div>



				</article>
			</div>
			<div class="span2 offset1">
				<?php $active = 1; include('_inc/_researcher_nav.php') ?>
			</div>
		</div> <!-- /Row Fluid -->
	</div> <!-- /container -->

	<?php include('_inc/_footer.php') ?>
	<?php include('_inc/_footer_scripts.php') ?>

	<script type="text/javascript">

	</script>
	</body>
</html>
