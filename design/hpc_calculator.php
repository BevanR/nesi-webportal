<?php include('_inc/_html_head.php') ?>

<body class="">
		<?php $active = 1; include('_inc/_navbar.php') ?>

		<div class="container">
			<div class="row-fluid">
				<div class="breadcrumbs span12">
						<ol>
								<li><a href="#">HPC Calculator</a></li>
						</ol>
				</div>
			</div>
				<div class="row-fluid">
						<div class="span9">
							<section role="main" class="post">
								<header>
										<h1>HPC Calculator</h1>
								</header>

								<div class="content" id="hpc-calculator">
									<ul class="nav nav-tabs">
									  <li class="active"><a href="#tab01" data-toggle="tab">POWER6 <span>$0.20 per CPU core hour</span></a> <i class="icon-info-sign" id="power6_platform_info">info on this platform</i></li>
									  <li><a href="#tab02" data-toggle="tab">POWER7 <span>$0.20 per CPU core hour</span></a> <i class="icon-info-sign" id="power7_platform_info">info on this platform</i></li>
									  <li><a href="#tab03" data-toggle="tab">Intel Cluster <span>$0.20 per CPU core hour</span></a> <i class="icon-info-sign" id="intel_platform_info">info on this platform</i></li>
									  <li><a href="#tab04" data-toggle="tab">BlueGene/P <span>$0.05 per CPU core hour</span></a> <i class="icon-info-sign" id="bluegene_platform_info">info on this platform</i></li>
									</ul>
									<div class="tab-content">
										<div class="tab-pane fade active in" id="tab01">
	  										<aside id="power6_platform_detail" class="platform_details">
	  											<h4>P575/POWER6</h4>
	  											<div class="platform-hardware">
	  												<h5>Hardware</h5>
	  												<div>
	  													58 nodes each with 32 cores (1856 4.7 GHz processor cores) with 64 and 128 GB RAM
	  													nodes total 5376 GB RAM increasing to 108 nodes (3456 processor cores) total 8704
	  													GB RAM from 2012<br>
	  													DDR Infiniband interconnect between nodes
	  												</div>
	  											</div>

	  											<div class="platform-operating-environment">
	  												<h5>Operating Environment</h5>
	  												<div>
	  													AIX<br>GPFS high performance parallel file system<br>LoadLeveler workload scheduler and TSM-SM Hierarchical Storage Management (HSM)
	  												</div>
	  											</div>

	  											<footer class="facility">
	  												<h5>Facility</h5>
	  												<p><a href="#">FitzRoy High Performance Computing Facility, NIWA</a></p>
	  											</footer>
	  										</aside>

	  										<div class="platform_form">
	  											<?php include('_inc/_hpc_calculator_form.php') ?>
	  										</div>

	  									</div>
									  <div class="tab-pane fade" id="tab02">
									  		<aside id="power7_platform_detail" class="platform_details">
									  			<h4>P755/POWER7</h4>
	  											<div class="platform-hardware">
	  												<h5>Hardware</h5>
	  												<div>
	  													13 nodes, each with four 8-core CPUs (416 3.3 GHz processor cores)<br>
	  													128 GB RAM per node, total 1664 GB RAM<br>
	  													Infiniband interconnect between nodes
	  												</div>
	  											</div>

	  											<div class="platform-operating-environment">
	  												<h5>Operating Environment</h5>
	  												<div>
	  													Linux, AIX<br>
														GPFS high performance parallel file system<br>
														LoadLeveler workload scheduler and TSM-SM Hierarchical Storage Management (HSM)
	  												</div>
	  											</div>

	  											<footer class="facility">
	  												<h5>Facility</h5>
	  												<p><a href="#">FitzRoy High Performance Computing Facility, NIWA</a></p>
	  											</footer>
									  		</aside>

									  		<div class="platform_form">
	  											<?php include('_inc/_hpc_calculator_form.php') ?>
	  										</div>
									  </div>
									  <div class="tab-pane fade" id="tab03">
									  		<aside id="intel_platform_detail" class="platform_details">
									  			<h4>Intel Cluster</h4>
	  											<div class="platform-hardware">
	  												<h5>Hardware</h5>
	  												<div>
	  													176 nodes, each with dual 6-core CPUs (912 2.67 GHz processor cores)<br>
														12 nodes, each with 2 Tesla M2090 GPUs<br>
														96 GB RAM per node<br>
														QDR Infiniband interconnect
	  												</div>
	  											</div>

	  											<div class="platform-operating-environment">
	  												<h5>Operating Environment</h5>
	  												<div>
	  													Linux<br>
														GPFS high performance parallel file system<br>
														LoadLeveler workload scheduler and TSM-SM Hierarchical Storage Management (HSM)
	  												</div>
	  											</div>

	  											<footer class="facility">
	  												<h5>Facility</h5>
	  												<p><a href="#">FitzRoy High Performance Computing Facility, NIWA</a></p>
	  											</footer>
									  		</aside>

									  		<div class="platform_form">
	  											<?php include('_inc/_hpc_calculator_form.php') ?>
	  										</div>
									  </div>
									  <div class="tab-pane fade" id="tab04">
									  		<aside id="bluegene_platform_detail" class="platform_details">
									  			<h4>BlueGene/P</h4>
	  											<div class="platform-hardware">
	  												<h5>Hardware</h5>
	  												<div>
	  													2048 4-core CPUs (8196 0.8 GHz processor cores)<br>
														8192 GB RAM, 1 GB RAM per core<br>
														3 Dimensional Torus interconnect between CPUs
	  												</div>
	  											</div>

	  											<div class="platform-operating-environment">
	  												<h5>Operating Environment</h5>
	  												<div>
	  													Linux<br>
														GPFS high performance parallel file system<br>
														LoadLeveler workload scheduler and TSM-SM Hierarchical Storage Management (HSM)
	  												</div>
	  											</div>

	  											<footer class="facility">
	  												<h5>Facility</h5>
	  												<p><a href="#">FitzRoy High Performance Computing Facility, NIWA</a></p>
	  											</footer>
									  		</aside>

									  		<div class="platform_form">
	  											<?php include('_inc/_hpc_calculator_form.php') ?>
	  										</div>
									  </div>
									</div>
								</div>
							</section>
						</div>
				</div> <!-- /Row Fluid -->
		</div> <!-- /container -->

		<?php include('_inc/_footer.php') ?>
		<?php include('_inc/_footer_scripts.php') ?>
		<script type="text/javascript" src="/assets/js/hpc_calculator.js"></script>
		<script type="text/javascript">
			$('#myTab a').click(function (e) {
			  e.preventDefault();
			  $(this).tab('show');
			})

			$('input[value="exclusive"]').click(function() {
  				$("#hpc_calc_exclusive_options").show('fast');
  				$("#hpc_job_effeciency").show('fast');
  				$("#hpc_calc_shared_note").hide('fast');
			});
			$('input[value="shared"]').click(function() {
  				$("#hpc_calc_shared_note").show('fast');
  				$("#hpc_calc_exclusive_options").hide('fast');
  				$("#hpc_job_effeciency").hide('fast');
			});


			// popover demo
			$("i[rel=popover]")
				.popover()
				.click(function(e) {
					e.preventDefault()
			})



			$('#power6_platform_info').click(function (e) {
			  e.preventDefault();
			  $('#power6_platform_detail').slideToggle('fast', function() {});
			});

			$('#power7_platform_info').click(function (e) {
			  e.preventDefault();
			  $('#power7_platform_detail').slideToggle('fast', function() {});
			});

			$('#intel_platform_info').click(function (e) {
			  e.preventDefault();
			  $('#intel_platform_detail').slideToggle('fast', function() {});
			});

			$('#bluegene_platform_info').click(function (e) {
			  e.preventDefault();
			  $('#bluegene_platform_detail').slideToggle('fast', function() {});
			});
		</script>
		</body>
</html>
