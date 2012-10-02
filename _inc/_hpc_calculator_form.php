<form action="#" method="post">
	<fieldset>
			<div class="hpc_calc_inline">
				<div class="control-group form-type-textfield form-item-power6-job-size form-item">
					<label>
						Typical Job Size
						<i class="icon-question-sign" rel="popover" data-original-title="The number of CPU cores your job uses" data-content="For single-threaded and non-MPI jobs, use 1."></i>
					</label>
					<div class="controls">
						<input class="positive-integer form-text" type="text" id="edit-power6-job-size" name="power6_job_size" value="" size="6" maxlength="6">
						<span class="add-on">CPU core(s)</span>
					</div>
				</div>
				<div class="myerror">
					<div id="edit-power6-job-size-error" class="control-group form-type-item form-item">
						<div class="controls">
						</div>
					</div>
				</div>
			</div>

			<div class="hpc_calc_inline">
				<div class="control-group form-type-textfield form-item-power6-wall-clock-hours form-item">
					<label>
						Wall clock hours for a typical job
						<i class="icon-question-sign" rel="popover" data-content="Real time that elapses from start to end of your job."></i>
					</label>
					<div class="controls">
						<input class="positive-integer form-text" type="text" id="edit-power6-wall-clock-hours" name="power6_wall_clock_hours" value="" size="10" maxlength="10">
						<span class="add-on">Hour(s)</span>
					</div>
				</div>
				<div class="myerror">
					<div id="edit-power6-wall-clock-hours-error" class="control-group form-type-item form-item">
						<div class="controls"></div>
					</div>
				</div>
			</div>
	</fieldset>

	<fieldset id="power6_usage">
		<legend>Shared or Exclusive use of node(s)/partition(s)</legend>

		<div class="hpc_calc_inline" id="hpc_job_effeciency">
			<div id="edit-power6-job-efficiency-title" class="control-group form-type-item form-item">
				<div class="controls"> Job Efficiency: <span>0%</span></div>
			</div>
		</div>

		<div class="control-group form-type-radios form-item-power6-usage form-item">
			<div class="controls">
				<div id="edit-power6-usage" class="form-radios">

					<div class="control-group form-type-radio form-item-power6-usage form-item">
						<div class="controls">
							<label class="option radio control-label" for="edit-power6-usage-shared"><input type="radio" id="edit-power6-usage-shared" name="power6_usage" value="shared" checked="checked" class="form-radio">Shared </label>
						</div>
					</div>

					<div class="control-group form-type-radio form-item-power6-usage form-item">
						<div class="controls">
							<label class="option radio control-label" for="edit-power6-usage-exclusive"><input type="radio" id="edit-power6-usage-exclusive" name="power6_usage" value="exclusive" class="form-radio">Exclusive </label>
						</div>
					</div>

					<div id="hpc_calc_exclusive_options">
						<div id="edit-power6-cpu-cores-per-node-title" class="control-group form-type-item form-item">
							<div class="controls">
								<label>I would prefer <input class="positive-integer form-text" type="text" id="edit-power6-cpu-cores-per-node" name="power6_cpu_cores_per_node" value="" size="2" maxlength="2"> out of <strong>32</strong> CPU Cores to be allocated on each of the nodes for my job</label>
							</div>
						</div>
					</div>

					<div id="hpc_calc_shared_note" class="alert alert-info">
							Please make sure that the jobs will not reduce the performance of the shared resource. <a href="#">Read our terms</a>.
					</div>
				</div>
			</div>
		</div>

	</fieldset>

	<fieldset>
		<input type="hidden" name="power6_cpu_cores_avail" value="32">
		<input type="hidden" name="power6_price_per_core_hour" value="0.20">
		<label>
			Number of job runs required to complete my project
			<i class="icon-question-sign" rel="popover" data-content="How many times your job needs to run."></i>
		</label>
		<div class="control-group form-type-textfield form-item-power6-number-job-runs form-item">
			<div class="controls">
				<input class="positive-integer form-text" type="text" id="edit-power6-number-job-runs" name="power6_number_job_runs" value="" size="10" maxlength="10">
			</div>
		</div>
		<div class="myerror">
			<div id="edit-power6-number-job-runs-error" class="control-group form-type-item form-item">
				<div class="controls"></div>
			</div>
		</div>
	</fieldset>

	<table class="hpc_calc_summary">
		<tbody>
			<tr>
				<td class="hpc_calc">CPU core hours<br>
					<span class="hpc_calc_description">(Job size x Wall clock hours x Number job runs)</span>
				</td>
				<td>
					<div id="edit-power6-cpu-core-hours" class="control-group form-type-item form-item">0</div>
				</td>
			</tr>

			<tr>
				<td class="hpc_calc">HPC Cost<br>
					<span class="hpc_calc_description">(CPU core hours x $0.20)</span>
				</td>
				<td>
					<div id="edit-power6-hpc-cost" class="control-group form-type-item form-item">$0.00</div>
				</td>
			</tr>

			<tr class="hpc_contributions">
				<td class="hpc_calc">Project Cost - 20%</td>
				<td>
					<div id="edit-power6-project-cost" class="control-group form-type-item form-item">$0.00</div>
				</td>
			</tr>

			<tr>
				<td class="hpc_calc">NeSI Contribution - 80%</td>
				<td>
					<div id="edit-power6-nesi-contribution" class="control-group form-type-item form-item">$0.00</div>
				</td>
			</tr>
		</tbody>
	</table>

</form>
