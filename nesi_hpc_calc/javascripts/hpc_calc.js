jQuery(document).ready(function() {
	jQuery("#tabs").tabs();

	// calculate the costs
	// TODO: include overriding cpu core allocation into the calculation
	function do_calculation(platform) {
		var job_size = jQuery('#edit-'+platform+'-job-size').val();
		var wallclock_hours = jQuery('#edit-'+platform+'-wall-clock-hours').val();
		var number_job_runs = jQuery('#edit-'+platform+'-number-job-runs').val();
		var price_per_core_hour = jQuery('#edit-'+platform+'-price-per-core-hour').html().replace('$','');
		if (job_size == '') {
			job_size = 0;
		}
		if (wallclock_hours == '') {
			wallclock_hours = 0;
		}
		if (number_job_runs == '') {
			number_job_runs = 0;
		}
		cpu_core_hours = parseInt(job_size) * parseInt(wallclock_hours) * parseInt(number_job_runs);
		hpc_cost = cpu_core_hours * parseFloat(price_per_core_hour);
		project_discount = (hpc_cost * 20) / 100;
		nesi_contribution = hpc_cost - project_discount;
		// display the calculated values
		jQuery('#edit-'+platform+'-core-cpu-hours-value').html(cpu_core_hours);
		jQuery('#edit-'+platform+'-hpc-cost-value').html(hpc_cost);
		jQuery('#edit-'+platform+'-project-cost-value').html(project_discount);
		jQuery('#edit-'+platform+'-nesi-contrib-value').html(nesi_contribution);
	}
	
	// Platform p6
	jQuery("#edit-p6-job-size").keyup(function() {
		do_calculation('p6');
	}).keyup();

	jQuery("#edit-p6-wall-clock-hours").keyup(function() {
		do_calculation('p6');
	}).keyup();

	jQuery("#edit-p6-number-job-runs").keyup(function() {
		do_calculation('p6');
	}).keyup();

	
	// Platform p7
	jQuery("#edit-p7-job-size").keyup(function() {
		do_calculation('p7');
	}).keyup();

	jQuery("#edit-p7-wall-clock-hours").keyup(function() {
		do_calculation('p7');
	}).keyup();

	jQuery("#edit-p7-number-job-runs").keyup(function() {
		do_calculation('p7');
	}).keyup();


	// Platform Intel
	jQuery("#edit-intel-job-size").keyup(function() {
		do_calculation('intel');
	}).keyup();

	jQuery("#edit-intel-wall-clock-hours").keyup(function() {
		do_calculation('intel');
	}).keyup();

	jQuery("#edit-intel-number-job-runs").keyup(function() {
		do_calculation('intel');
	}).keyup();

	
	// Platform Bluegene
	jQuery("#edit-bluegene-job-size").keyup(function() {
		do_calculation('bluegene');
	}).keyup();

	jQuery("#edit-bluegene-wall-clock-hours").keyup(function() {
		do_calculation('bluegene');
	}).keyup();

	jQuery("#edit-bluegene-number-job-runs").keyup(function() {
		do_calculation('bluegene');
	}).keyup();

});