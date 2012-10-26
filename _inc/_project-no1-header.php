<?php $active = (isset($active)) ? $active : 0; ?>
<ul class="nav nav-tabs">
	<li<?php if($active == 1) echo " class='active'"; ?>>
		<a href="/projects/project-no1.php"<?php if($active == 1) echo " class='active'"; ?>>View</a>
	</li>
	<li<?php if($active == 2) echo " class='active'"; ?>>
		<a href="/projects/project-no1-team.php" <?php if($active == 2) echo " class='active'"; ?>>Manage Team</a>
	</li>
</ul>
<article role="main" class="project">
	<header>
		<h1>Regional Climate Simulations of New Zealand recent past climate change episodes</h1>
		<div class="meta">
			<p class="date">Submitted by <em>user name</em> on 31 May 2012 10:21</p>
			<p class="date date-accepted">Accepted by <em>user name</em> on 26 Sep 2012 10:21</p>
			<p>Project Type: Research</p>
		</div>
	</header>
