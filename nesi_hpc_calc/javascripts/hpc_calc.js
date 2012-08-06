/**
 * JavaScript code to be used in this module.
 * - Display the jquery-ui tabs
 * - Do the calculations and print results, based on input in the various form fields
 */

jQuery(document).ready(function() {
	jQuery("#tabs").tabs();

	// calculate the costs
	function do_calculation(platform) {
		var job_size = jQuery('#edit-'+platform+'-job-size').val();
		var wallclock_hours = jQuery('#edit-'+platform+'-wall-clock-hours').val();
		var number_job_runs = jQuery('#edit-'+platform+'-number-job-runs').val();
		var price_per_core_hour = jQuery('#edit-'+platform+'-price-per-core-hour').html().replace('$','');
		var cpu_cores_avail = jQuery('input[name='+platform+'_cpu_cores_avail]').val();
		var cpu_cores_per_machine = -1;
		
		var mode = jQuery('input[name='+platform+'_usage]:checked').val();
		if (mode == 'scaled') {
			var cpu_cores_per_machine = jQuery('#edit-'+platform+'-cpu-cores').val();
		}
		
		if (job_size == '') {
			job_size = 0;
		}
		if (wallclock_hours == '') {
			wallclock_hours = 0;
		}
		if (number_job_runs == '') {
			number_job_runs = 0;
		}
		if (cpu_cores_per_machine == '') {
			cpu_cores_per_machine = 0;
		}

		// show or hide shared/scaled box
		if (platform != "bluegene" && 0==1) {
			if ((job_size > 0) && ((job_size % cpu_cores_avail) != 0)) {
				jQuery('#'+platform+'_override_allocation').show();
			} else {
			    jQuery('#'+platform+'_override_allocation').hide();			
			}			
		}
		
		// TODO: don't hard-code 'bluegene'
		if (platform == 'bluegene') {
			if ((job_size % cpu_cores_avail) != 0) {
				job_size = (Math.floor(job_size/cpu_cores_avail) + 1) * cpu_cores_avail;
			}
		}
		cpu_core_hours = parseInt(job_size) * parseInt(wallclock_hours) * parseInt(number_job_runs);
		if (mode == 'shared' || platform == 'bluegene') {
			hpc_cost = cpu_core_hours * parseFloat(price_per_core_hour);
		} else {
			hpc_cost = (cpu_core_hours * parseFloat(price_per_core_hour)) / (cpu_cores_per_machine / cpu_cores_avail);
		}
		project_discount = (hpc_cost * 20) / 100;
		nesi_contribution = hpc_cost - project_discount;
		// display the calculated values
		jQuery('#edit-'+platform+'-core-cpu-hours-value').html(cpu_core_hours);
		jQuery('#edit-'+platform+'-hpc-cost-value').html(Math.round(hpc_cost));
		jQuery('#edit-'+platform+'-project-cost-value').html(Math.round(project_discount));
		jQuery('#edit-'+platform+'-nesi-contrib-value').html(Math.round(nesi_contribution));
	}
	
	// TODO: Check out closures to create event handlers for all platforms in a loop, instead of
	//       defining the same event handlers for each platform (http://www.mennovanslooten.nl/blog/post/62/)

	// Platform power6
	jQuery("#edit-power6-job-size").keyup(function() {
		do_calculation('power6');
	}).keyup();

	jQuery("input[name='power6_usage']").change(function() {
		do_calculation('power6');
	});

	jQuery("#edit-power6-cpu-cores").keyup(function() {
		do_calculation('power6');
	}).keyup();
	
	jQuery("#edit-power6-wall-clock-hours").keyup(function() {
		do_calculation('power6');
	}).keyup();

	jQuery("#edit-power6-number-job-runs").keyup(function() {
		do_calculation('power6');
	}).keyup();

	
	// Platform power7
	jQuery("#edit-power7-job-size").keyup(function() {
		do_calculation('power7');
	}).keyup();

	jQuery("input[name='power7_usage']").change(function() {
		do_calculation('power7');
	});

	jQuery("#edit-power7-cpu-cores").keyup(function() {
		do_calculation('power7');
	}).keyup();

	jQuery("#edit-power7-wall-clock-hours").keyup(function() {
		do_calculation('power7');
	}).keyup();

	jQuery("#edit-power7-number-job-runs").keyup(function() {
		do_calculation('power7');
	}).keyup();


	// Platform Intel
	jQuery("#edit-intel-job-size").keyup(function() {
		do_calculation('intel');
	}).keyup();

	jQuery("input[name='intel_usage']").change(function() {
		do_calculation('intel');
	});

	jQuery("#edit-intel-cpu-cores").keyup(function() {
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