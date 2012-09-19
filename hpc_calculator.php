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
						<div class="span8">
							<section role="main" class="post">
									<header>
											<h1>HPC Calculator</h1>
									</header>

									<div class="content">
										<ul class="nav nav-tabs">
											<li class="active"><a href="#tab1" data-toggle="tab">POWER6 <br/><small>$0.20 per CPU core hour</small></a></li>
											<li><a href="#tab2" data-toggle="tab">POWER7 <br/><small>$0.20 per CPU core hour</small></a></li>
											<li><a href="#tab3" data-toggle="tab">Intel Cluster <br/><small>$0.20 per CPU core hour</small></a></li>
											<li><a href="#tab4" data-toggle="tab">BlueGene/P <br/><small>$0.05 per CPU core hour</small></a></li>
										</ul>
										<div class="tab-content">
											<div class="tab-pane active" id="tab1">
												<article>
													<header><h1>P575/POWER6</h1></header>
														<aside class="platform-info">
															<h2>P575/POWER6 specifications</h2>
																<dl>
																		<dt>Hardware</dt>
																		<dd>
																				58 nodes each with 32 cores (1856 4.7 GHz processor cores) with 64 and 128 GB RAM
																				nodes total 5376 GB RAM increasing to 108 nodes (3456 processor cores) total 8704
																				GB RAM from 2012
																		</dd>
																		<dd>DDR Infiniband interconnect between nodes</dd>

																		<dt>Operating Environment</dt>
																		<dd>
																				AIX
																				GPFS high performance parallel file system
																				LoadLeveler workload scheduler and
																				TSM-SM Hierarchical Storage Management (HSM)
																		</dd>
																		<dt>Facility</dt>
																		<dd>
																				FitzRoy High Performance Computing Facility, NIWA
																		</dd>
																</dl>
														</aside>
														<div class="platform-form">
															<form action="#" method="post">
																<p>Job Efficiency: 0%</p>
																<fieldset>
																	<div class="hpc_calc_inline">
																			<label>Typical Job Size</label>
																			<div class="control-group form-type-textfield form-item-power6-job-size form-item">
																			<div class="controls">
																					<input class="positive-integer form-text" type="text" id="edit-power6-job-size" name="power6_job_size" value="" size="6" maxlength="6"> <small>CPU core(s)</small>
																			</div>
																			<div class="myerror"></div>
																	</div>
																	<div class="hpc_calc_inline">
																			<label>Wall clock hours for a typical job</label>
																			<div class="control-group form-type-textfield form-item-power6-job-size form-item">
																			<div class="controls">
																					<input class="positive-integer form-text" type="text" id="edit-power6-job-size" name="power6_job_size" value="" size="6" maxlength="6"> <small>Hour(s)</small>
																			</div>
																			<div class="myerror"></div>
																	</div>
																</fieldset>
																<fieldset>
																	<div>
																		<legend>Shared or Exclusive use of node(s)/partition(s)</legend>
																			<div class="field-group">
																					<label class="option radio control-label" for="edit-power6-usage-shared"> <input type="radio" id="edit-power6-usage-shared" name="power6_usage" value="shared" checked="checked" class="form-radio">Shared </label>
																					<label class="option radio control-label" for="edit-power6-usage-exclusive"> <input type="radio" id="edit-power6-usage-exclusive" name="power6_usage" value="exclusive" class="form-radio">Exclusive </label>
																			</div>
																			<p class="note">If you select Shared please make sure that the jobs will not reduce the performance of the shared resource. <a href="#">Read our terms</a>.</p>
																			<p>I would prefer <input class="positive-integer form-text" type="text" id="edit-power6-cpu-cores-per-node" name="power6_cpu_cores_per_node" value="" size="2" maxlength="2" /> out of 32 CPU Cores to be allocated on each of the nodes for my job</p>
																	</div>
																</fieldset>
																<fieldset>
																	<div>
																		<label>Number of job runs required to complete my project</label>
																		<input class="positive-integer form-text" type="text" id="edit-power6-number-job-runs" name="power6_number_job_runs" value="" size="10" maxlength="10" />
																	</div>
																	<div class="myerror"></div>
																</fieldset>

																<table class="hpc-alloation-costs">
																	<tr>
																		<th>CPU core hours <small>(Job size x Wall clock hours x Number job runs)</small></th>
																		<td>0</td>
																	</tr>
																	<tr>
																		<th>HPC Cost <small>(CPU core hours x $0.20)</small></th>
																		<td>$0.00</td>
																	</tr>
																	<tr>
																		<th>Project Cost - 20%</th>
																		<td>$0.00</td>
																	</tr>
																	<tr>
																		<th>Nesi Contribution - 80%</th>
																		<td>$0.00</td>
																	</tr>
																	<thead>
																	</thead>
																</table>
															</form>
														</div>
												</article>
											</div>
											<div class="tab-pane" id="tab2">
												<article>
													<header><h1>POWER7</h1></header>
													<aside class="platform-info">
														<h2>P575/POWER6 specifications</h2>
															<dl>
																	<dt>Hardware</dt>
																	<dd>
																			58 nodes each with 32 cores (1856 4.7 GHz processor cores) with 64 and 128 GB RAM
																			nodes total 5376 GB RAM increasing to 108 nodes (3456 processor cores) total 8704
																			GB RAM from 2012
																	</dd>
																	<dd>DDR Infiniband interconnect between nodes</dd>

																	<dt>Operating Environment</dt>
																	<dd>
																			AIX
																			GPFS high performance parallel file system
																			LoadLeveler workload scheduler and
																			TSM-SM Hierarchical Storage Management (HSM)
																	</dd>
																	<dt>Facility</dt>
																	<dd>
																			FitzRoy High Performance Computing Facility, NIWA
																	</dd>
															</dl>
													</aside>
													<div class="platform-form">
														<form action="#" method="post">
															<p>Job Efficiency: 0%</p>
															<fieldset>
																<div class="hpc_calc_inline">
																		<label>Typical Job Size</label>
																		<div class="control-group form-type-textfield form-item-power6-job-size form-item">
																		<div class="controls">
																				<input class="positive-integer form-text" type="text" id="edit-power6-job-size" name="power6_job_size" value="" size="6" maxlength="6"> <small>CPU core(s)</small>
																		</div>
																		<div class="myerror"></div>
																</div>
																<div class="hpc_calc_inline">
																		<label>Wall clock hours for a typical job</label>
																		<div class="control-group form-type-textfield form-item-power6-job-size form-item">
																		<div class="controls">
																				<input class="positive-integer form-text" type="text" id="edit-power6-job-size" name="power6_job_size" value="" size="6" maxlength="6"> <small>Hour(s)</small>
																		</div>
																		<div class="myerror"></div>
																</div>
															</fieldset>
															<fieldset>
																<div>
																	<legend>Shared or Exclusive use of node(s)/partition(s)</legend>
																		<div class="field-group">
																				<label class="option radio control-label" for="edit-power6-usage-shared"> <input type="radio" id="edit-power6-usage-shared" name="power6_usage" value="shared" checked="checked" class="form-radio">Shared </label>
																				<label class="option radio control-label" for="edit-power6-usage-exclusive"> <input type="radio" id="edit-power6-usage-exclusive" name="power6_usage" value="exclusive" class="form-radio">Exclusive </label>
																		</div>
																		<p class="note">If you select Shared please make sure that the jobs will not reduce the performance of the shared resource. <a href="#">Read our terms</a>.</p>
																		<p>I would prefer <input class="positive-integer form-text" type="text" id="edit-power6-cpu-cores-per-node" name="power6_cpu_cores_per_node" value="" size="2" maxlength="2" /> out of 32 CPU Cores to be allocated on each of the nodes for my job</p>
																</div>
															</fieldset>
															<fieldset>
																<div>
																	<label>Number of job runs required to complete my project</label>
																	<input class="positive-integer form-text" type="text" id="edit-power6-number-job-runs" name="power6_number_job_runs" value="" size="10" maxlength="10" />
																</div>
																<div class="myerror"></div>
															</fieldset>

															<table class="hpc-alloation-costs">
																<tr>
																	<th>CPU core hours <small>(Job size x Wall clock hours x Number job runs)</small></th>
																	<td>0</td>
																</tr>
																<tr>
																	<th>HPC Cost <small>(CPU core hours x $0.20)</small></th>
																	<td>$0.00</td>
																</tr>
																<tr>
																	<th>Project Cost - 20%</th>
																	<td>$0.00</td>
																</tr>
																<tr>
																	<th>Nesi Contribution - 80%</th>
																	<td>$0.00</td>
																</tr>
																<thead>
																</thead>
															</table>
														</form>
													</div>
												</article>
											</div>
											<div class="tab-pane" id="tab3">
												<article>
													<header><h1>Intel Cluster</h1></header>
													<aside class="platform-info">
														<h2>P575/POWER6 specifications</h2>
															<dl>
																	<dt>Hardware</dt>
																	<dd>
																			58 nodes each with 32 cores (1856 4.7 GHz processor cores) with 64 and 128 GB RAM
																			nodes total 5376 GB RAM increasing to 108 nodes (3456 processor cores) total 8704
																			GB RAM from 2012
																	</dd>
																	<dd>DDR Infiniband interconnect between nodes</dd>

																	<dt>Operating Environment</dt>
																	<dd>
																			AIX
																			GPFS high performance parallel file system
																			LoadLeveler workload scheduler and
																			TSM-SM Hierarchical Storage Management (HSM)
																	</dd>
																	<dt>Facility</dt>
																	<dd>
																			FitzRoy High Performance Computing Facility, NIWA
																	</dd>
															</dl>
													</aside>
													<div class="platform-form">
														<form action="#" method="post">
															<p>Job Efficiency: 0%</p>
															<fieldset>
																<div class="hpc_calc_inline">
																		<label>Typical Job Size</label>
																		<div class="control-group form-type-textfield form-item-power6-job-size form-item">
																		<div class="controls">
																				<input class="positive-integer form-text" type="text" id="edit-power6-job-size" name="power6_job_size" value="" size="6" maxlength="6"> <small>CPU core(s)</small>
																		</div>
																		<div class="myerror"></div>
																</div>
																<div class="hpc_calc_inline">
																		<label>Wall clock hours for a typical job</label>
																		<div class="control-group form-type-textfield form-item-power6-job-size form-item">
																		<div class="controls">
																				<input class="positive-integer form-text" type="text" id="edit-power6-job-size" name="power6_job_size" value="" size="6" maxlength="6"> <small>Hour(s)</small>
																		</div>
																		<div class="myerror"></div>
																</div>
															</fieldset>
															<fieldset>
																<div>
																	<legend>Shared or Exclusive use of node(s)/partition(s)</legend>
																		<div class="field-group">
																				<label class="option radio control-label" for="edit-power6-usage-shared"> <input type="radio" id="edit-power6-usage-shared" name="power6_usage" value="shared" checked="checked" class="form-radio">Shared </label>
																				<label class="option radio control-label" for="edit-power6-usage-exclusive"> <input type="radio" id="edit-power6-usage-exclusive" name="power6_usage" value="exclusive" class="form-radio">Exclusive </label>
																		</div>
																		<p class="note">If you select Shared please make sure that the jobs will not reduce the performance of the shared resource. <a href="#">Read our terms</a>.</p>
																		<p>I would prefer <input class="positive-integer form-text" type="text" id="edit-power6-cpu-cores-per-node" name="power6_cpu_cores_per_node" value="" size="2" maxlength="2" /> out of 32 CPU Cores to be allocated on each of the nodes for my job</p>
																</div>
															</fieldset>
															<fieldset>
																<div>
																	<label>Number of job runs required to complete my project</label>
																	<input class="positive-integer form-text" type="text" id="edit-power6-number-job-runs" name="power6_number_job_runs" value="" size="10" maxlength="10" />
																</div>
																<div class="myerror"></div>
															</fieldset>

															<table class="hpc-alloation-costs">
																<tr>
																	<th>CPU core hours <small>(Job size x Wall clock hours x Number job runs)</small></th>
																	<td>0</td>
																</tr>
																<tr>
																	<th>HPC Cost <small>(CPU core hours x $0.20)</small></th>
																	<td>$0.00</td>
																</tr>
																<tr>
																	<th>Project Cost - 20%</th>
																	<td>$0.00</td>
																</tr>
																<tr>
																	<th>Nesi Contribution - 80%</th>
																	<td>$0.00</td>
																</tr>
																<thead>
																</thead>
															</table>
														</form>
													</div>
												</article>
											</div>
											<div class="tab-pane" id="tab4">
												<article>
													<header><h1>BlueGene/P</h1></header>
													<aside class="platform-info">
														<h2>P575/POWER6 specifications</h2>
															<dl>
																	<dt>Hardware</dt>
																	<dd>
																			58 nodes each with 32 cores (1856 4.7 GHz processor cores) with 64 and 128 GB RAM
																			nodes total 5376 GB RAM increasing to 108 nodes (3456 processor cores) total 8704
																			GB RAM from 2012
																	</dd>
																	<dd>DDR Infiniband interconnect between nodes</dd>

																	<dt>Operating Environment</dt>
																	<dd>
																			AIX
																			GPFS high performance parallel file system
																			LoadLeveler workload scheduler and
																			TSM-SM Hierarchical Storage Management (HSM)
																	</dd>
																	<dt>Facility</dt>
																	<dd>
																			FitzRoy High Performance Computing Facility, NIWA
																	</dd>
															</dl>
													</aside>
													<div class="platform-form">
														<form action="#" method="post">
															<p>Job Efficiency: 0%</p>
															<fieldset>
																<div class="hpc_calc_inline">
																		<label>Typical Job Size</label>
																		<div class="control-group form-type-textfield form-item-power6-job-size form-item">
																		<div class="controls">
																				<input class="positive-integer form-text" type="text" id="edit-power6-job-size" name="power6_job_size" value="" size="6" maxlength="6"> <small>CPU core(s)</small>
																		</div>
																		<div class="myerror"></div>
																</div>
																<div class="hpc_calc_inline">
																		<label>Wall clock hours for a typical job</label>
																		<div class="control-group form-type-textfield form-item-power6-job-size form-item">
																		<div class="controls">
																				<input class="positive-integer form-text" type="text" id="edit-power6-job-size" name="power6_job_size" value="" size="6" maxlength="6"> <small>Hour(s)</small>
																		</div>
																		<div class="myerror"></div>
																</div>
															</fieldset>
															<fieldset>
																<div>
																	<legend>Shared or Exclusive use of node(s)/partition(s)</legend>
																		<div class="field-group">
																				<label class="option radio control-label" for="edit-power6-usage-shared"> <input type="radio" id="edit-power6-usage-shared" name="power6_usage" value="shared" checked="checked" class="form-radio">Shared </label>
																				<label class="option radio control-label" for="edit-power6-usage-exclusive"> <input type="radio" id="edit-power6-usage-exclusive" name="power6_usage" value="exclusive" class="form-radio">Exclusive </label>
																		</div>
																		<p class="note">If you select Shared please make sure that the jobs will not reduce the performance of the shared resource. <a href="#">Read our terms</a>.</p>
																		<p>I would prefer <input class="positive-integer form-text" type="text" id="edit-power6-cpu-cores-per-node" name="power6_cpu_cores_per_node" value="" size="2" maxlength="2" /> out of 32 CPU Cores to be allocated on each of the nodes for my job</p>
																</div>
															</fieldset>
															<fieldset>
																<div>
																	<label>Number of job runs required to complete my project</label>
																	<input class="positive-integer form-text" type="text" id="edit-power6-number-job-runs" name="power6_number_job_runs" value="" size="10" maxlength="10" />
																</div>
																<div class="myerror"></div>
															</fieldset>

															<table class="hpc-alloation-costs">
																<tr>
																	<th>CPU core hours <small>(Job size x Wall clock hours x Number job runs)</small></th>
																	<td>0</td>
																</tr>
																<tr>
																	<th>HPC Cost <small>(CPU core hours x $0.20)</small></th>
																	<td>$0.00</td>
																</tr>
																<tr>
																	<th>Project Cost - 20%</th>
																	<td>$0.00</td>
																</tr>
																<tr>
																	<th>Nesi Contribution - 80%</th>
																	<td>$0.00</td>
																</tr>
																<thead>
																</thead>
															</table>
														</form>
													</div>
												</article>
											</div>
										</div>
									</div>
							</section>
						</div>

						<aside class="span3 offset1" role="complementary">
						  <div class="region region-sidebar-first">
						    <section id="block-search-form" class="block block-search contextual-links-region">
								  <form action="/rebuild/hpc-calc" method="post" id="search-block-form" accept-charset="UTF-8">
								  	<div>
								  		<div class="container-inline">
								      	<h2 class="element-invisible">Search form</h2>
								    			<div class="control-group form-type-textfield form-item-search-block-form form-item">
								  					<label class="element-invisible control-label" for="edit-search-block-form--2">Search </label>
														<div class="controls">
															<input title="Enter the terms you wish to search for." type="text" id="edit-search-block-form--2" name="search_block_form" value="" size="15" maxlength="128" class="form-text">
														</div>
													</div>
												<button class="btn btn-primary form-submit" id="edit-submit" name="op" value="Search" type="submit">Search</button>
								    		<input type="hidden" name="form_build_id" value="form-lnNnItEzq6ZcUnD3tjUKhnl7bQK3_rVacwrFs38yUo4">
												<input type="hidden" name="form_token" value="cIMvx_c9AeUGgVNZfOJY_-3uV7o99iKhjyfK-muSpxc">
												<input type="hidden" name="form_id" value="search_block_form">
											</div>
										</div>
									</form>
								</section> <!-- /.block -->
								<section id="block-nesi-portal-researcher-navigation" class="block block-nesi-portal contextual-links-region">
						      <h2 class="block-title">Researcher menu</h2>
						  		<ul class="menu nav">
				            <li class="first leaf"><a title="Review your proposals" href="http://web.dev.nesi.org.nz/rebuild/researcher-my-proposals">My Proposals</a></li>
										<li class="collapsed"><a href="http://web.dev.nesi.org.nz/rebuild/node/add">Add Proposal</a></li>
										<li class="last leaf"><a href="http://web.dev.nesi.org.nz/rebuild/hpc-calc">HPC Calculator</a></li>
						      </ul>
								</section> <!-- /.block -->
								<section id="block-system-navigation" class="block block-system contextual-links-region block-menu">
									<h2 class="block-title">Navigation</h2>
						  		<ul class="menu nav">
						  			<li class="first leaf"><a href="/rebuild/researcher-my-proposals" title="Summary of site content">My Proposals</a></li>
										<li class="collapsed"><a href="/rebuild/node/add">Add Proposal</a></li>
										<li class="last leaf active-trail"><a href="/rebuild/hpc-calc" class="active-trail active">HPC Calculator</a></li>
									</ul>
								</section> <!-- /.block -->
						  </div>
						</aside>
				</div> <!-- /Row Fluid -->
		</div> <!-- /container -->

		<?php include('_inc/_footer.php') ?>
		<?php include('_inc/_footer_scripts.php') ?>

		<script type="text/javascript">

		</script>
		</body>
</html>
