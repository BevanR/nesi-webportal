
  <?php print render($page['header']); ?>


	<div class="container news-events-overview">
		<div class="row-fluid">

			<div class="span6 news-overview">
				<section>
					<h1>Latest News</h1>

					<article class="o-item news-item">
						<header>
							<h1 class="o-title"><a href="/news_article.php">NZ researchers apply for 700,000 CPU core hours for amazing science</a></h1>
							<p class="meta meta-date">Jun 7 <span class="yr">2012</span></p>
						</header>
							<div class="summary">
								<p>The New Zealand eScience Infrastructure (NeSI) received applications for about 700,000 CPU core hours in its first call for access proposals from New Zealand researchers.</p>
							</div>
					</article>

					<article class="o-item news-item">
						<header>
							<h1 class="o-title"><a href="/news_article.php">Vacancy: Education leader now open.</a></h1>
							<p class="meta meta-date">Jun 7 <span class="yr">2012</span></p>
						</header>
							<div class="summary">
								<p>The Education Programme Leader leads activities for NeSI's professional education programme. This programme supports research communities across New Zealand with their ability to utilise High Performance Computing. </p>
							</div>
					</article>

					<article class="o-item news-item">
						<header>
							<h1 class="o-title"><a href="/news_article.php">Podcast: "Does this science compute?"</a></h1>
							<p class="meta meta-date">Jun 7 <span class="yr">2012</span></p>
						</header>
							<div class="summary">
								<p>Peter Griffin from Sciblogs recently interviewed our Director, Nick Jones as part of their weekly podcast. It is now available for download. The pair discussed the current call for access proposals as well as a few applications of NeSI's HPC facilities.</p>
							</div>
					</article>

					<footer>
						<a href="">More News</a>
					</footer>
				</section>
			</div>

			<div class="span6 events-overview">
				<section>
					<h1>Latest Events</h1>

					<article class="o-item event-item event-type-roadshow">
						<header>
							<h1 class="o-title"><a href="#">National Roadshow - September 2012</a></h1>
						</header>
						<div class="summary">
							<p>The team will visiting Dunedin, Christchurch, Wellington, Hamilton and Auckland, spending a day at each city.</p>
						</div>
						<aside class="event-dates">
							<p class="meta meta-date">Event Dates <span class="event-date-from">10/09/12</span> &ndash; <span class="event-date-to">14/09/12</span></p>
						</aside>
					</article>

					<article class="o-item event-item event-type-seminar">
						<header>
							<h1 class="o-title"><a href="#">"Modelling the superheating of small gallium clusters" - Christchurch</a></h1>
						</header>
						<aside class="event-dates">
							<p class="meta meta-date">Seminar <span class="event-date-from">20/08/12</span></p>
						</aside>
					</article>

					<article class="o-item event-item event-type-seminar">
						<header>
							<h1 class="o-title"><a href="#">"Discussing the What, Why and How To of NeSI" - Auckland</a></h1>
						</header>
						<aside class="event-dates">
							<p class="meta meta-date">Seminar <span class="event-date-from">20/08/12</span></p>
						</aside>
					</article>

					<article class="o-item event-item event-type-seminar">
						<header>
							<h1 class="o-title"><a href="#">"Benefiting from the New Zealand eScience Infrastructure" Wellington</a></h1>
						</header>
						<aside class="event-dates">
							<p class="meta meta-date">Seminar <span class="event-date-from">20/08/12</span></p>
						</aside>
					</article>
					<footer>
						<a href="">More Events</a>
					</footer>
				</section>
			</div>
		</div> <!-- /Row Fluid -->
	</div> <!-- /container -->

  <?php print render($page['directory']); ?>

  <?php print render($page['collaborators']); ?>

	<script src="<?php print $directory; ?>/assets/js/jquery.lettering.js"></script>

	<script type="text/javascript">
    jQuery(document).ready(function() {
      jQuery('[rel="tooltip"]').tooltip();
      jQuery('#home-hero').carousel();
      jQuery('#home-hero .slide-title').lettering('lines').children('words');
    });
	</script>
