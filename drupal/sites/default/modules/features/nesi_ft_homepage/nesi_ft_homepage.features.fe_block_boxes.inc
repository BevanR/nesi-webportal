<?php
/**
 * @file
 * nesi_ft_homepage.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function nesi_ft_homepage_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home intro block';
  $fe_block_boxes->format = '3';
  $fe_block_boxes->machine_name = 'homepage_intro_items';
  $fe_block_boxes->body = '<div class="container page-intro full-width">
  <div class="page-intro-inner">
    <section class="home-intro">
    NeSI provides High Performance Computing (HPC) facilities to New Zealand, supporting researchers across the public research sector and private industry
    </section>
  </div>
</div>
<div class="container">			
  <div class="row-fluid">
    <div class="nesi-intro-item">
    	<article class="sub-feature" id="apply-intro">
    		<a href="/apply/nojs/create-proposal"><h1 class="feature-title">Apply for Access</h1></a>
    		<p>Use High Performance Computing in your research</p>
                                      <p class="sub"><a href="/apply/nojs/create-proposal" class="l-more">Apply now</a></p>
    	</article>
    </div>
    <div class="nesi-intro-item">
    	<article class="sub-feature" id="nesi-intro">
    		<a href="/facilities"><h1 class="feature-title">What is NeSI</h1></a>
    		<p>NeSI provides High Performance Computing (HPC) facilities</p>
                                      <p class="sub"><a href="/facilities" class="l-more">Find out more</a></p>
    	</article>
    </div>
    <div class="nesi-intro-item">
    	<article class="sub-feature" id="projects-intro">
    		<a href="/projects"><h1 class="feature-title">Who uses NeSI</h1></a>
    		<p>Find out how NeSI is being used by other researchers and institutions</p>
                                      <p class="sub"><a href="/projects" class="l-more">Find out more</a></p>
    	</article>
    </div>
    <div class="nesi-intro-item">
    	<article class="sub-feature" id="news-intro">
    		<a href="/news-events"><h1 class="feature-title">News and Events</h1></a>
    		<p>Get up-to-date with the goings on nationwide at NeSI</p>
                                      <p class="sub"><a href="/news-events" class="l-more">Find out more</a></p>
    	</article>
    </div>
    <div class="nesi-intro-item">
    	<article class="sub-feature" id="support-intro">
    		<a href="/node/141"><h1 class="feature-title">Computational Sciences Support</h1></a>
    		<p>Get up-to-date with the goings on nationwide at NeSI</p>
                                      <p class="sub"><a href="/node/141" class="l-more">Find out more</a></p>
    	</article>
    </div>
  </div>
</div>
<!-- https://www.dropbox.com/s/yg9rzlozdygmqfq/Nesi-mega-user.jpg / https://www.dropbox.com/s/yg9rzlozdygmqfq/Nesi-mega-user.jpg -->';

  $export['homepage_intro_items'] = $fe_block_boxes;

  return $export;
}
