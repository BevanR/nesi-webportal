<?php $active = (isset($active)) ? $active : 0; ?>
<div class="navbar">
	<div class="navbar-inner">
		<div class="container">
			<a class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
			<span class="icon-bar"></span>
			<span class="icon-bar"></span>
			<span class="icon-bar"></span>
			</a>
			<a class="brand" href="/index.php"><span>NeSI &ndash; New Zealand eScience Infrastructure</span></a>
			<div class="nav-collapse collapse">
				<nav id="pnav">
					<ul class="nav">
						<li<?php if($active == 1) echo " class='active'"; ?>><a href="/content_page.php">Access</a></li>
						<li<?php if($active == 2) echo " class='active'"; ?>><a href="#">HPC Facilities</a></li>
						<li<?php if($active == 3) echo " class='active'"; ?>><a href="case_studies/index.php">Projects &amp; Case studies</a></li>
						<li<?php if($active == 4) echo " class='active'"; ?>><a href="about.php">About Nesi</a></li>
					</ul>
				</nav>
				<nav id="global-nav">
					<ul class="nav pull-right">
						<li><a href="#">Support</a></li>
						<li class="dropdown">
							<a href="#" class="dropdown-toggle" data-toggle="dropdown">Account <b class="caret"></b></a>
							<ul class="dropdown-menu">
								<li class="current-user">
									<a href="/username" class="account-summary account-summary-small js-nav" data-nav="profile">
										<div class="content">
											<div class="account-group">
												<img class="avatar size32" src="https://twimg0-a.akamaihd.net/profile_images/2255495760/lookylooky_normal.jpg" alt="Daniel Eberhardt">
												<b class="fullname">Daniel Eberhardt</b>
												<small class="metadata">
													View my profile page
												</small>
											</div>
										</div>
									</a>
								</li>
								<li class="divider"></li>
								<li><a href="#">Email</a></li>
								<li><a href="#">Another action</a></li>
								<li><a href="#">Something else here</a></li>
								<li class="divider"></li>
								<li><a href="#">Settings</a></li>
								<li><a href="#">Sign out</a></li>
							</ul>
						</li>
					</ul>
				</nav>
			</div>
		</div>
	</div>
</div>
