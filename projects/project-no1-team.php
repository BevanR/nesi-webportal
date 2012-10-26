<?php include('../_inc/_html_head.php') ?>

<body class="project-entry">
	<?php $active = 0; include('../_inc/_navbar.php') ?>

	<div class="container">
		<div class="row-fluid">
			<div class="breadcrumbs">
				<ol>
					<li><a href="/dashboard.php">Dashboard</a></li>
					<li><a href="/projects/">Projects</a></li>
					<li><a href="/projects/project-no1.php">Regional Climate Simulations of New Zealand recent past climate change episodes</a></li>
				</ol>
			</div>
		</div>
		<div class="row-fluid">
			<div class="span9">
				<section>
					<?php $active = 2; include('../_inc/_project-no1-header.php') ?>

						<div class="content">
							<section class="team">
								<h2>Team</h2>
								<div class="team-members">
									<div id="principal">
										<strong>Principal Investigator:</strong> Abha Sood <a href="mailto:abha.sood@niwa.co.nz">abha.sood@niwa.co.nz</a> Phone: +64-4-386-0577
									</div>
									<form class="form-search">
										<label>Search and add more people to your team</label>
										<input type="text" class="input-medium search-query" placeholder="Name"> <input type="email" class="input-medium search-query" placeholder="address@example.com">
										<button type="submit" class="btn">Add to team</button>
									</form>
									<ul class="unstyled">

										<li class="field-multiple-drag">
											<a href="#" class="tabledrag-handle tabledrag-handle-hover" title="Drag to re-order" style=""><div class="handle">&nbsp;</div></a>
											Another members name and details.
										</li>
										<li class="field-multiple-drag">
											<a href="#" class="tabledrag-handle tabledrag-handle-hover" title="Drag to re-order" style=""><div class="handle">&nbsp;</div></a>
											Another members name and details.
										</li>
									</ul>
								</div>


    						</section>
    						<section>
								<h2>Background</h2>
									<p>(a) using UMv4,5 for NIWA climate modelling projects</p>
									<p>(b) user on P575/POWER6 </p>
									<p>(c) Fortran</p>
								</section>
						</div>
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
