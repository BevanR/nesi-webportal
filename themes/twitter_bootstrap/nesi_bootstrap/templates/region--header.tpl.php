<div class="navbar">
  <div class="navbar-inner">
  	<div class="container">
  	  <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
  	  <a class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
  		<span class="icon-bar"></span>
  		<span class="icon-bar"></span>
  		<span class="icon-bar"></span>
  	  </a>
  	  
		<a class="brand" href="/"><span>NeSI &ndash; New Zealand eScience Infrastructure</span></a>
  	  <div class="nav-collapse collapse">
    	  <nav id="pnav" role="navigation">
		<ul class="nav">
			<li><a href="/?q=access-policy">Access</a></li>
			<li><a href="/?q=facilities">HPC Facilities</a></li>
			<li><a href="/?q=case-studies">Projects &amp; Case studies</a></li>
			<li><a href="/?q=background">About Nesi</a></li>
		</ul>
      		<?php if ($primary_nav): ?>
      		  <?php //print $primary_nav; ?>
      		<?php endif; ?>
      	  
      		<?php if ($search): ?>
      		  <?php if ($search): print render($search); endif; ?>
      		<?php endif; ?>
      		
      		<?php if ($secondary_nav) { ?>
      		  <?php print $secondary_nav; ?>
      		<?php } else { ?>
      <nav id="global-nav">
      <ul class="nav pull-right">
        <li><a href="https://support.nesi.org.nz/">Support</a></li>
        <li><a href="/portal/user/login">Login</a></li>
 	    </ul>
		  </nav>

          <?php }; ?>
    		</nav>
  	  </div>         
  	</div>
  </div>
</div>
<?php if ($content): ?>
<div class="container">
<div class="row-fluid">
  <?php print $content; ?>
</div>
</div>
<?php endif; ?>
