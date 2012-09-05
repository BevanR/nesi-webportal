/**
 * JavaScript code to be used in this module.
 * - Display the jquery-ui tabs
 * - Do the calculations and print results, based on input in the various form fields
 */

jQuery(document).ready(function() {

	// display the tabs
	jQuery("#tabs").tabs();
	bind_qtip();

	function bind_qtip() {
		jQuery('#power6_info').qtip({style:{width:'200px'},position:{corner:{target:'bottomRight',tooltip:'topLeft'}}});
		jQuery('#power7_info').qtip({style:{width:'200px'},position:{corner:{target:'bottomMiddle',tooltip:'topMiddle'}}});
		jQuery('#intel_info').qtip({style:{width:'200px'},position:{corner:{target:'bottomMiddle',tooltip:'topMiddle'}}});
		jQuery('#bluegene_info').qtip({style:{width:'200px'},position:{corner:{target:'bottomLeft',tooltip:'topRight'}}});
		jQuery('#job_size_info').qtip({style:{width:'100px'},position:{corner:{target:'bottomMiddle',tooltip:'topMiddle'}}});
		jQuery('#wall_clock_hours_info').qtip({style:{width:'100px'},position:{corner:{target:'bottomMiddle',tooltip:'topMiddle'}}});
		jQuery('#number_job_runs_info').qtip({style:{width:'100px'},position:{corner:{target:'bottomMiddle',tooltip:'topMiddle'}}});
	}
	
	function isPositiveInteger(val) {
		return (val|0) > 0 && val % 1 == 0;
	}
	  
	function get_platform(id_name) {
		if (id_name.indexOf('power6') > -1) {
			return 'power6';
		} else if (id_name.indexOf('power7') > -1) {
			return 'power7';
		} else if (id_name.indexOf('bluegene') > -1) {
			return 'bluegene';
		} else if (id_name.indexOf('intel') > -1) {
			return 'intel';
		} else {
			return 'unknown';
		}
	}
	
	// calculate the costs
	function do_calculation(platform, valid_input) {
		var cpu_core_hours = 0;
		var hpc_cost = 0;
		var project_discount = 0;
		var nesi_contribution = 0;
		var job_efficiency = 0;
		
		if (valid_input) {
			var job_size = jQuery('#edit-'+platform+'-job-size').val();
			var wallclock_hours = jQuery('#edit-'+platform+'-wall-clock-hours').val();
			var number_job_runs = jQuery('#edit-'+platform+'-number-job-runs').val();
			var price_per_core_hour = jQuery('input[name='+platform+'_price_per_core_hour]').val();
			var cpu_cores_avail = jQuery('input[name='+platform+'_cpu_cores_avail]').val();
			var cpu_cores_per_machine = -1;
		
			var mode = jQuery('input[name='+platform+'_usage]:checked').val();
			if (mode == 'exclusive') {
				var cpu_cores_per_node = jQuery('#edit-'+platform+'-cpu-cores-per-node').val();
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
			if (cpu_cores_per_node == '') {
				cpu_cores_per_node = 0;
			}

			if (mode == 'exclusive') {
				var job_efficiency = jQuery('#edit-'+platform+'-job-efficiency').html().replace('%','');
				job_efficiency = (parseFloat(cpu_cores_per_node) / parseInt(cpu_cores_avail)) * 100;
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
				hpc_cost = (cpu_core_hours * parseFloat(price_per_core_hour)) / (cpu_cores_per_node / cpu_cores_avail);
			}
			project_discount = (hpc_cost * 20) / 100;
			nesi_contribution = hpc_cost - project_discount;
		}
		
		// display the calculated values
		jQuery('#edit-'+platform+'-cpu-core-hours').html(cpu_core_hours);
		jQuery('#edit-'+platform+'-hpc-cost').html('$' + hpc_cost.toFixed(2));
		jQuery('#edit-'+platform+'-project-cost').html('$' + project_discount.toFixed(2));
		jQuery('#edit-'+platform+'-nesi-contribution').html('$' + nesi_contribution.toFixed(2));
		jQuery('#edit-'+platform+'-job-efficiency').html(Math.round(job_efficiency) + '%');
	}
	
	function verify_input(platform) {
		
		rc = true;
		
		var ids = new Array();
		ids['job_size_id'] = '#edit-' + platform + '-job-size';
		ids['wall_clock_hours_id'] = '#edit-' + platform + '-wall-clock-hours';
		ids['number_job_runs_id'] = '#edit-' + platform + '-number-job-runs';
		if (platform != 'bluegene') {
			ids['cpu_cores_per_node_id'] = '#edit-' + platform + '-cpu-cores-per-node';
		}
		
		var error_ids = new Array();
		error_ids['job_size_id'] = '#edit-' + platform + '-job-size-error';
		error_ids['wall_clock_hours_id'] = '#edit-' + platform + '-wall-clock-hours-error';
		error_ids['number_job_runs_id'] = '#edit-' + platform + '-number-job-runs-error';
		if (platform != 'bluegene') {
			error_ids['cpu_cores_per_node_id'] = '#edit-' + platform + '-cpu-cores-per-node-error';
		}
		
		var cpu_cores_avail_id = 'input[name=' + platform + '_cpu_cores_avail]';
		var mode_id = 'input[name=\'' + platform + '_usage\']:checked';
		var value = '';
		
		// checks for all elements
		for (var key in ids) {
			value = jQuery(ids[key]).val();
			// hide all error elements for fields without any content
			if (value != "") {
				// verify positive integer
				if (isPositiveInteger(value)) {
					jQuery(error_ids[key]).hide();
				} else {
					jQuery(error_ids[key]).html("Only positive numbers permitted<br>").show();
					rc = false;
				}	
			}
		}
		
		if (platform != "bluegene") {
			// specific checks
			var cpu_cores_per_node = jQuery(ids['cpu_cores_per_node_id']).val();
			var job_size = jQuery(ids['job_size_id']).val();
			var cpu_cores_avail = jQuery(cpu_cores_avail_id).val();
			var mode = jQuery(mode_id).val();

			cpu_cores_per_node = (cpu_cores_per_node == '') ? -1 : parseInt(cpu_cores_per_node);
			job_size = (job_size == '') ? -1 : parseInt(job_size);
			cpu_cores_avail = parseInt(cpu_cores_avail);
			// verify cpu cores <= job size
			if (mode == 'exclusive') {
				if (cpu_cores_per_node > job_size) {
					jQuery(error_ids['cpu_cores_per_node_id']).html("Number of requested CPU cores greater than job size").show();
					rc = false;
				} else if (cpu_cores_per_node == -1) {
					rc = false;
				}
			} else {
				jQuery(error_ids['cpu_cores_per_node_id']).hide();			
			}
			// verify cpu cores <= cpu cores avail
			if (mode == 'exclusive') {
				if (cpu_cores_per_node > cpu_cores_avail) {
					jQuery(error_ids['cpu_cores_per_node_id']).html("No values greater than " + cpu_cores_avail + " permitted").show();
					rc = false;
				} else if (cpu_cores_per_node == -1) {
					rc = false;
				}
			} else {
				jQuery(error_ids['cpu_cores_per_node_id']).hide();			
			}
		}

		return rc;
	}
	
    // changes in input fields
	jQuery(".positive-integer").keyup(function() {
		var id = jQuery(this).attr('id');
		var platform = get_platform(id);
		if (jQuery(this).val() == "") {
			jQuery(id).hide();
		}
		do_calculation(platform, verify_input(platform));
	}).keyup();
	
	
	
	// Clicks on radio buttons Shared/Exclusive
	jQuery("input[name='power6_usage']").change(function() {
		do_calculation('power6', verify_input('power6'));
	});

	jQuery("input[name='power7_usage']").change(function() {
		do_calculation('power7', verify_input('power7'));
	});

	jQuery("input[name='intel_usage']").change(function() {
		do_calculation('intel', verify_input('intel'));
	});

});