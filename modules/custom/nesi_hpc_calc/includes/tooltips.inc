<?php

/**
 * Tooltips for the Tabs
 */

// TODO: What tool do we use for HTML tooltips?
// TODO: Fill in content for tooltips for power7, intel, bluegene

$tooltips = Array();

$tooltips['job_size'] = '
	The number of CPU cores your job uses.<br>
	For single-threaded and non-MPI jobs, use 1.';

$tooltips['wall_clock_hours'] = '
	Real time that elapses from start to end of your job.';

$tooltips['number_job_runs'] = '
	How many times your job needs to run.';
	
$tooltips['power6'] = '
	<h4>P575/POWER6</h4>
	<table>
	<tr>
		<td><b>Hardware</b></td>
		<td><b>Operating Environment</b></td>
	</tr>
	<tr>
		<td>58 nodes each with 32 cores (1856 4.7 GHz processor cores) with 64 and 128 GB RAM
			nodes total 5376 GB RAM increasing to 108 nodes (3456 processor cores) total 8704
			GB RAM from 2012<br>
			DDR Infiniband interconnect between nodes
		</td>
		<td>AIX<br>GPFS high performance parallel file system<br>LoadLeveler workload scheduler and
			TSM-SM Hierarchical Storage Management (HSM)
		</td>
	</tr>
	</table>
	<b>Facility</b><br>
	FitzRoy High Performance Computing Facility, NIWA';

$tooltips['power7'] = '
	<h4>P755/POWER7</h4>
	<table>
	<tr>
		<td><b>Hardware</b></td>
		<td><b>Operating Environment</b></td>
	</tr>
	<tr>
		<td>13 nodes, each with four 8-core CPUs (416 3.3 GHz processor cores)<br>
			128 GB RAM per node, total 1664 GB RAM<br>
			Infiniband interconnect between nodes
		</td>
		<td>Linux, AIX<br>
			GPFS high performance parallel file system<br>
			LoadLeveler workload scheduler and TSM-SM Hierarchical Storage Management (HSM)
		</td>
	</tr>
	</table>
	<b>Facility</b><br>
	BlueFern, University of Canterbury';

$tooltips['intel'] = '
	<h4>Intel Cluster</h4>
	<table>
		<tr>
			<td><b>Hardware</b></td>
			<td><b>Operating Environment</b></td>
		</tr>
		<tr>
			<td>176 nodes, each with dual 6-core CPUs (912 2.67 GHz processor cores)<br>
			12 nodes, each with 2 Tesla M2090 GPUs<br>
			96 GB RAM per node<br>
			QDR Infiniband interconnect
		</td>
		<td>Linux<br>
			GPFS high performance parallel file system<br>
			LoadLeveler workload scheduler and TSM-SM Hierarchical Storage Management (HSM)
		</td>
	</tr>
	</table>
	<b>Facility</b><br>
	Centre for eResearch, The University of Auckland';

$tooltips['bluegene'] = '
	<h4>BlueGene/P</h4>
	<table>
		<tr>
			<td><b>Hardware</b></td>
			<td><b>Operating Environment</b></td>
		</tr>
		<tr>
			<td>2048 4-core CPUs (8196 0.8 GHz processor cores)<br>
				8192 GB RAM, 1 GB RAM per core<br>
				3 Dimensional Torus interconnect between CPUs
			</td>
			<td>Linux<br>
				GPFS high performance parallel file system<br>
				LoadLeveler workload scheduler and TSM-SM Hierarchical Storage Management (HSM)
			</td>
		</tr>
	</table>
	<b>Facility</b><br>
	BlueFern, University of Canterbury';



