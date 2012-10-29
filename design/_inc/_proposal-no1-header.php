<?php $active = (isset($active)) ? $active : 0; ?>
<header>
	<h1 class="page-header">Current Proposal</h1>
</header>

<ul class="nav nav-tabs">
	<li<?php if($active == 1) echo " class='active'"; ?>>
		<a href="/proposals/proposal-no1.php"<?php if($active == 1) echo " class='active'"; ?>>View</a>
	</li>
	<li<?php if($active == 2) echo " class='active'"; ?>>
		<a href="/proposals/proposal-no1-edit.php"<?php if($active == 21) echo " class='active'"; ?>>Edit</a>
	</li>
	<li<?php if($active == 3) echo " class='active'"; ?>>
		<a href="/proposals/proposal-no1-team.php"<?php if($active == 3) echo " class='active'"; ?>>Manage Team</a>
	</li>
</ul>
<article role="main" class="proposal">
	<header>
		<h1>Regional Climate Simulations of New Zealand recent past climate change episodes</h1>
		<div class="meta">
			<p class="date">Submitted by <em>user name</em> on 31 May 2012 10:21</p>
			<p>Proposal Type: Research</p>
			<div id="proposal-status">
				<p><em>Current Status:</em> <strong>In draft</strong></p>
				<input type="submit" value="Submit proposal" class="btn btn-primary" id="proposal-submission-btn"/>
			</div>
		</div>
	</header>
