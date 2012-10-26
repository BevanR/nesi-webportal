<?php $active = (isset($active)) ? $active : 0; ?>
<nav class="sub-nav">
	<h2>Researcher Menu</h2>
	<ul>
		<li<?php if($active == 1) echo " class='active'"; ?>><a href="/dashboard">Dashboard</a></li>
		<li<?php if($active == 2) echo " class='active'"; ?>><a href="/proposals/">Add Proposal</a></li>
		<li<?php if($active == 3) echo " class='active'"; ?>><a href="/projects/">Live Projects</a></li>
		<li<?php if($active == 4) echo " class='active'"; ?>><a href="#">History</a></li>
		<li<?php if($active == 5) echo " class='active'"; ?>><a href="/hpc_calculator.php">HPC calculator</a></li>
	</ul>
</nav>
