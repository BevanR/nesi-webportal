<?php include('_inc/_html_head.php') ?>

<body class="single-post">
	<?php $active = 1; include('_inc/_navbar.php') ?>

	<div class="container">
		<div class="row-fluid">
			<div class="breadcrumbs">
				<ol>
					<li><a href="#">Home</a></li>
					<li><a href="#">Contact</a></li>
				</ol>
			</div>
		</div>
		<div class="row-fluid">
			<section class="span7" role="main">
				<h1 class="page-header">Contact</h1>
				<p class="lead">We welcome any queries or comments you may have. Get in touch with us using the form below.</p>

				<form class="user-info-from-cookie contact-form form-horizontal" action="/contact" method="post" id="contact-site-form" accept-charset="UTF-8"><div><div class="control-group form-type-textfield form-item-name form-item">
					<label for="edit-name" class="control-label">Your name <span class="form-required" title="This field is required.">*</span></label>
					<div class="controls"> <input type="text" id="edit-name" name="name" value="" size="60" maxlength="255" class="form-text required">
					</div></div>
					<div class="control-group form-type-textfield form-item-mail form-item">
						<label for="edit-mail" class="control-label">Your e-mail address <span class="form-required" title="This field is required.">*</span></label>
						<div class="controls"> <input type="text" id="edit-mail" name="mail" value="" size="60" maxlength="255" class="form-text required">
						</div></div>
						<div class="control-group form-type-textfield form-item-subject form-item">
							<label for="edit-subject" class="control-label">Subject <span class="form-required" title="This field is required.">*</span></label>
							<div class="controls"> <input type="text" id="edit-subject" name="subject" value="" size="60" maxlength="255" class="form-text required">
							</div></div>
							<div class="control-group form-type-textarea form-item-message form-item">
								<label for="edit-message" class="control-label">Message <span class="form-required" title="This field is required.">*</span></label>
								<div class="controls"> <div class="form-textarea-wrapper resizable textarea-processed resizable-textarea"><textarea id="edit-message" name="message" cols="60" rows="5" class="form-textarea required"></textarea><div class="grippie"></div></div>
							</div></div>
							<input type="hidden" name="form_build_id" value="form-Y3RTzUZW5R5515IxZ0DRSaszG7Z-0LOVe7ktapd1qs8">
							<input type="hidden" name="form_id" value="contact_site_form">
							<button class="btn form-submit" id="edit-submit" name="op" value="Send message" type="submit">Send message</button>
						</div>
					</form>
				</section>
			<div class="span5">
				<div class="module" id="contact-address">
					<h4>Contact details</h4>
					<dl class="dl-horizontal">
						<dt>Address:</dt>
						<dd>Auckland University City Campus, Auckland, 1010, New Zealand</dd>
						<dt>Email:</dt>
						<dd><a href="mailto:info@nesi.org.nz">info@nesi.org.nz</a></dd>
					</dl>
				</div>
				<div class="module">
					<h4>Other facilities</h4>
					<p>NeSI supports HPC systems at three facilities</p>
					<ol>
					 	<li>The University of Auckland</li>
					 	<li>Canterbury University </li>
					 	<li>NIWA</li>
					 </ol>
					 <p>The groups supporting HPC at each site are the Centre for eResearch, BlueFern, and FitzRoy High Performance Computing Facility respectively. <a href="facilities">Learn more about our facilities.</a></p>
				</div>
			</div>
		</div> <!-- /Row Fluid -->
	</div> <!-- /container -->

	<?php include('_inc/_footer.php') ?>
	<?php include('_inc/_footer_scripts.php') ?>

	<script type="text/javascript">

	</script>
	</body>
</html>
