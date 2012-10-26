<?php include('../_inc/_html_head.php') ?>

<body class="proposal-entry">
	<?php $active = 0; include('../_inc/_navbar.php') ?>

	<div class="container">
		<div class="row-fluid">
			<div class="breadcrumbs">
				<ol>
					<li><a href="/dashboard.php">Dashboard</a></li>
					<li><a href="/proposals/">Proposals</a></li>
					<li><a href="/proposals/proposal-no1.php">Regional Climate Simulations of New Zealand recent past climate change episodes</a></li>
				</ol>
			</div>
		</div>
		<div class="row-fluid">
			<div class="span9">
				<section>
					<h1 class="page-header">Current Proposal</h1>

					<ul class="nav nav-tabs">
						<li>
							<a href="/proposals/proposal-no1.php" class="active">View</a>
						</li>
						<li class="">
							<a href="/proposals/proposal-no1-edit.php">Edit</a>
						</li>
						<li class="active">
							<a href="/proposals/proposal-no1-team.php">Manage Team</a>
						</li>
					</ul>
					<article role="main" class="proposal">
						<header>
							<h1>Regional Climate Simulations of New Zealand recent past climate change episodes</h1>
							<div class="meta">
								<p class="date">Submitted by <em>user name</em> on 31 May 2012 10:21</p>
								<p>Proposal Type: Research </p>
								<div id="proposal-status">
									<p><em>Current Status:</em> <strong>In draft</strong></p>
									<input type="submit" value="Submit proposal" class="btn btn-primary" id="proposal-submission-btn"/>
								</div>
							</div>
						</header>

						<div class="content">
							<section class="team">
								<h2>Team</h2>
								<div class="team-members">
									<form class="form-search">
										<h4>Add people to your team</h4>
										<input type="text" class="input-large search-query">
										<button type="submit" class="btn">Add to team</button>
									</form>
									<ul class="unstyled">
										<li id="principal">
											<strong>Principal Investigator:</strong> Abha Sood <a href="mailto:abha.sood@niwa.co.nz">abha.sood@niwa.co.nz</a> Phone: +64-4-386-0577
										</li>
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
