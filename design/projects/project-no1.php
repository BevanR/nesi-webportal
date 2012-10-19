<?php include('../_inc/_html_head.php') ?>

<body class="project-entry">
	<?php $active = 0; include('../_inc/_navbar.php') ?>

	<div class="container">
		<div class="row-fluid">
			<div class="breadcrumbs">
				<ol>
					<li><a href="/dashboard.php">Dashboard</a></li>
					<li><a href="/project/">Projects</a></li>
					<li><a href="/project/proposal-no1.php">Regional Climate Simulations of New Zealand recent past climate change episodes</a></li>
				</ol>
			</div>
		</div>
		<div class="row-fluid">
			<div class="span9">
				<section>
					<?php $active = 1; include('../_inc/_project-no1-header.php') ?>

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

						<div class="content proposal-details">
							<section>
								<h2>Scientific Goals</h2>
								<p>The main focus of the newly proposed Marsden project titled "Our Stormy Past: Resolving the role that tropical and high latitude climate modes have played in driving New Zealand¿s climate over the past 15,000 years" is to explore a 15,000 year record of storm intensity and precipitation over New Zealand at annual resolution. A feasibility study was recently conducted to investigate the quality of climate record captured in the sediment cores extracted from Lake Ohau located in the South Island. More detailed analysis will contribute to the reconstruction of the past inter-annual climate variability of run-off and precipitation in South Island catchments.</p>

								<p>The Regional Climate Model (RCM) simulations are on one hand, paramount in linking climate data derived from local proxies, here sediments, to wider regional (e.g. Kidson-type) patterns and large scale climate modes such as El-Nino Southern Oscillation (ENSO) and Interdecadal Pacific Oscillation (IPO). On the other hand, the high resolution regional climate model data can be validated and checked for consistency using the new independent high frequency climate record. Global and regional model transient simulations for warm, cool and transitional periods on multi-decadal time slices selected from the past 1000 years will be performed. Assessment of climate simulations will subsequently be conducted by comparing the model climatologies with those derived from Lake Ohau sediment records and related to the large scale climate modes.</p>

								<p>The Regional Climate Model (RCM) simulations are on one hand, paramount in linking climate data derived from local proxies, here sediments, to wider regional (e.g. Kidson-type) patterns and large scale climate modes such as El-Nino Southern Oscillation (ENSO) and Interdecadal Pacific Oscillation (IPO). On the other hand, the high resolution regional climate model data can be validated and checked for consistency using the new independent high frequency climate record. Global and regional model transient simulations for warm, cool and transitional periods on multi-decadal time slices selected from the past 1000 years will be performed. Assessment of climate simulations will subsequently be conducted by comparing the model climatologies with those derived from Lake Ohau sediment records and related to the large scale climate modes.</p>

								<h3>Further Information</h3>
								<p>The 2012 Marsden pre-proposal has been invited to submit a full proposal. Funding (20%) for HPC resources will be requested in the proposal.</p>
							</section>

						<section>
							<h2>Benefits from HPC</h2>
							<p>Regional Climate Model (RCM) simulations on decadal to centennial time scale are computationally extremely demanding. They are only feasible using HPC resources.</p>
						</section>

						<section>
							<h2>Project Deliverables</h2>
							<p>(a) 1 journal article </p>
							<p>(b) 2 conference contributions</p>
						</section>

					</article>
				</section>
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