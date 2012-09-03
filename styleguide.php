<?php include('_inc/_html_head.php') ?>

<body class="styleguide">
	<?php $active = 1; include('_inc/_navbar.php') ?>

	<header class="jumbotron subhead" id="overview">
		<div class="container">
			<h1>Base CSS</h1>
			<p class="lead">Fundamental HTML elements styled and enhanced with extensible classes.</p>
		</div>
	</header>

	<div class="container">
		<div class="row-fluid">
			<div class="span3 bs-docs-sidebar">
				<nav class="sub-nav" data-spy="affix" data-offset-top="140">
					<h2>Content types</h2>
					<ul class="nav nav-list bs-docs-sidenav">
						<li><a href="#typography">Typography</a></li>
						<li><a href="#code">Code</a></li>
						<li><a href="#tables">Tables</a></li>
						<li><a href="#forms">Forms</a></li>
						<li><a href="#buttons">Buttons</a></li>
						<li><a href="#images">Images</a></li>
						<li><a href="#icons">Icons by Glyphicons</a></li>
					</ul>
				</nav>
			</div>


			<div class="span8">
			<!-- Typography
			================================================== -->
			<section id="typography">
			  <div class="page-header">
				<h1>Typography</h1>
			  </div>

			  <h2 id="headings">Headings</h2>
			  <p>All HTML headings, <code>&lt;h1&gt;</code> through <code>&lt;h6&gt;</code> are available.</p>
			  <div class="bs-docs-example">
				<h1>h1. Heading 1</h1>
				<h2>h2. Heading 2</h2>
				<h3>h3. Heading 3</h3>
				<h4>h4. Heading 4</h4>
				<h5>h5. Heading 5</h5>
				<h6>h6. Heading 6</h6>
			  </div>

			  <h2 id="body-copy">Body copy</h2>
			  <p>Bootstrap's global default <code>font-size</code> is <strong>14px</strong>, with a <code>line-height</code> of <strong>20px</strong>. This is applied to the <code>&lt;body&gt;</code> and all paragraphs. In addition, <code>&lt;p&gt;</code> (paragraphs) receive a bottom margin of half their line-height (9px by default).</p>
			  <div class="bs-docs-example">
				<p>Nullam quis risus eget urna mollis ornare vel eu leo. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nullam id dolor id nibh ultricies vehicula.</p>
				<p>Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec ullamcorper nulla non metus auctor fringilla. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit. Donec ullamcorper nulla non metus auctor fringilla.</p>
				<p>Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Duis mollis, est non commodo luctus, nisi erat porttitor ligula, eget lacinia odio sem nec elit.</p>
			  </div>
			  <pre class="prettyprint">&lt;p&gt;...&lt;/p&gt;</pre>

			  <h3>Lead body copy</h3>
			  <p>Make a paragraph stand out by adding <code>.lead</code>.</p>
			  <div class="bs-docs-example">
				<p class="lead">Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Duis mollis, est non commodo luctus.</p>
			  </div>
			  <pre class="prettyprint">&lt;p class="lead"&gt;...&lt;/p&gt;</pre>

			  <h3>Built with Less</h3>
			  <p>The typographic scale is based on two LESS variables in <strong>variables.less</strong>: <code>@baseFontSize</code> and <code>@baseLineHeight</code>. The first is the base font-size used throughout and the second is the base line-height. We use those variables and some simple math to create the margins, paddings, and line-heights of all our type and more. Customize them and Bootstrap adapts.</p>


			  <hr class="bs-docs-separator">


			  <h2 id="emphasis">Emphasis</h2>
			  <p>Make use of HTML's default emphasis tags with lightweight styles.</p>

			  <h3><code>&lt;small&gt;</code></h3>
			  <p>For de-emphasizing inline or blocks of text, <small>use the small tag.</small></p>
			  <div class="bs-docs-example">
				<p><small>This line of text is meant to be treated as fine print.</small></p>
			  </div>
	<pre class="prettyprint">
	&lt;p&gt;
	  &lt;small&gt;This line of text is meant to be treated as fine print.&lt;/small&gt;
	&lt;/p&gt;
	</pre>

			  <h3><code>&lt;strong&gt;</code></h3>
			  <p>For emphasizing a snippet of text with <strong>important</strong></p>
			  <div class="bs-docs-example">
				<p>The following snippet of text is <strong>rendered as bold text</strong>.</p>
			  </div>
			  <pre class="prettyprint">&lt;strong&gt;rendered as bold text&lt;/strong&gt;</pre>

			  <h3><code>&lt;em&gt;</code></h3>
			  <p>For emphasizing a snippet of text with <em>stress</em></p>
			  <div class="bs-docs-example">
				<p>The following snippet of text is <em>rendered as italicized text</em>.</p>
			  </div>
			  <pre class="prettyprint">&lt;em&gt;rendered as italicized text&lt;/em&gt;</pre>

			  <p><span class="label label-info">Heads up!</span> Feel free to use <code>&lt;b&gt;</code> and <code>&lt;i&gt;</code> in HTML5. <code>&lt;b&gt;</code> is meant to highlight words or phrases without conveying additional importance while <code>&lt;i&gt;</code> is mostly for voice, technical terms, etc.</p>


			  <hr class="bs-docs-separator">


			  <h2 id="abbreviations">Abbreviations</h2>
			  <p>Stylized implemenation of HTML's <code>&lt;abbr&gt;</code> element for abbreviations and acronyms to show the expanded version on hover. Abbreviations with a <code>title</code> attribute have a light dotted bottom border and a help cursor on hover, providing additional context on hover.</p>

			  <h3><code>&lt;abbr&gt;</code></h3>
			  <p>For expanded text on long hover of an abbreviation, include the <code>title</code> attribute.</p>
			  <div class="bs-docs-example">
				<p>An abbreviation of the word attribute is <abbr title="attribute">attr</abbr>.</p>
			  </div>
			  <pre class="prettyprint">&lt;abbr title="attribute"&gt;attr&lt;/abbr&gt;</pre>

			  <h3><code>&lt;abbr class="initialism"&gt;</code></h3>
			  <p>Add <code>.initialism</code> to an abbreviation for a slightly smaller font-size.</p>
			  <div class="bs-docs-example">
				<p><abbr title="HyperText Markup Language" class="initialism">HTML</abbr> is the best thing since sliced bread.</p>
			  </div>
			  <pre class="prettyprint">&lt;abbr title="attribute" class="initialism"&gt;attr&lt;/abbr&gt;</pre>


			  <hr class="bs-docs-separator">


			  <h2 id="addresses">Addresses</h2>
			  <p>Present contact information for the nearest ancestor or the entire body of work.</p>

			  <h3><code>&lt;address&gt;</code></h3>
			  <p>Preserve formatting by ending all lines with <code>&lt;br&gt;</code>.</p>
			  <div class="bs-docs-example">
				<address>
				  <strong>Twitter, Inc.</strong><br>
				  795 Folsom Ave, Suite 600<br>
				  San Francisco, CA 94107<br>
				  <abbr title="Phone">P:</abbr> (123) 456-7890
				</address>
				<address>
				  <strong>Full Name</strong><br>
				  <a href="mailto:#">first.last@gmail.com</a>
				</address>
			  </div>
	<pre class="prettyprint linenums">
	&lt;address&gt;
	  &lt;strong&gt;Twitter, Inc.&lt;/strong&gt;&lt;br&gt;
	  795 Folsom Ave, Suite 600&lt;br&gt;
	  San Francisco, CA 94107&lt;br&gt;
	  &lt;abbr title="Phone"&gt;P:&lt;/abbr&gt; (123) 456-7890
	&lt;/address&gt;

	&lt;address&gt;
	  &lt;strong&gt;Full Name&lt;/strong&gt;&lt;br&gt;
	  &lt;a href="mailto:#"&gt;first.last@gmail.com&lt;/a&gt;
	&lt;/address&gt;
	</pre>


			  <hr class="bs-docs-separator">


			  <h2 id="blockquotes">Blockquotes</h2>
			  <p>For quoting blocks of content from another source within your document.</p>

			  <h3>Default blockqoute</h3>
			  <p>Wrap <code>&lt;blockquote&gt;</code> around any <abbr title="HyperText Markup Language">HTML</abbr> as the quote. For straight quotes we recommend a <code>&lt;p&gt;</code>.</p>
			  <div class="bs-docs-example">
				<blockquote>
				  <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer posuere erat a ante.</p>
				</blockquote>
			  </div>
	<pre class="prettyprint linenums">
	&lt;blockquote&gt;
	  &lt;p&gt;Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer posuere erat a ante.&lt;/p&gt;
	&lt;/blockquote&gt;
	</pre>

			  <h3>Blockquote options</h3>
			  <p>Style and content changes for simple variations on a standard blockquote.</p>

			  <h4>Naming a source</h4>
			  <p>Add <code>&lt;small&gt;</code> tag for identifying the source. Wrap the name of the source work in <code>&lt;cite&gt;</code>.</p>
			  <div class="bs-docs-example">
				<blockquote>
				  <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer posuere erat a ante.</p>
				  <small>Someone famous in <cite title="Source Title">Source Title</cite></small>
				</blockquote>
			  </div>
	<pre class="prettyprint linenums">
	&lt;blockquote&gt;
	  &lt;p&gt;Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer posuere erat a ante.&lt;/p&gt;
	  &lt;small&gt;Someone famous &lt;cite title="Source Title"&gt;Source Title&lt;/cite&gt;&lt;/small&gt;
	&lt;/blockquote&gt;
	</pre>

			  <h4>Alternate displays</h4>
			  <p>Use <code>.pull-right</code> for a floated, right-aligned blockquote.</p>
			  <div class="bs-docs-example" style="overflow: hidden;">
				<blockquote class="pull-right">
				  <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer posuere erat a ante.</p>
				  <small>Someone famous in <cite title="Source Title">Source Title</cite></small>
				</blockquote>
			  </div>
	<pre class="prettyprint linenums">
	&lt;blockquote class="pull-right"&gt;
	  ...
	&lt;/blockquote&gt;
	</pre>


			  <hr class="bs-docs-separator">


			  <!-- Lists -->
			  <h2 id="lists">Lists</h2>

			  <h3>Unordered</h3>
			  <p>A list of items in which the order does <em>not</em> explicitly matter.</p>
			  <div class="bs-docs-example">
				<ul>
				  <li>Lorem ipsum dolor sit amet</li>
				  <li>Consectetur adipiscing elit</li>
				  <li>Integer molestie lorem at massa</li>
				  <li>Facilisis in pretium nisl aliquet</li>
				  <li>Nulla volutpat aliquam velit
					<ul>
					  <li>Phasellus iaculis neque</li>
					  <li>Purus sodales ultricies</li>
					  <li>Vestibulum laoreet porttitor sem</li>
					  <li>Ac tristique libero volutpat at</li>
					</ul>
				  </li>
				  <li>Faucibus porta lacus fringilla vel</li>
				  <li>Aenean sit amet erat nunc</li>
				  <li>Eget porttitor lorem</li>
				</ul>
			  </div>
	<pre class="prettyprint linenums">
	&lt;ul&gt;
	  &lt;li&gt;...&lt;/li&gt;
	&lt;/ul&gt;
	</pre>

			  <h3>Ordered</h3>
			  <p>A list of items in which the order <em>does</em> explicitly matter.</p>
			  <div class="bs-docs-example">
				<ol>
				  <li>Lorem ipsum dolor sit amet</li>
				  <li>Consectetur adipiscing elit</li>
				  <li>Integer molestie lorem at massa</li>
				  <li>Facilisis in pretium nisl aliquet</li>
				  <li>Nulla volutpat aliquam velit</li>
				  <li>Faucibus porta lacus fringilla vel</li>
				  <li>Aenean sit amet erat nunc</li>
				  <li>Eget porttitor lorem</li>
				</ol>
			  </div>
	<pre class="prettyprint linenums">
	&lt;ol&gt;
	  &lt;li&gt;...&lt;/li&gt;
	&lt;/ol&gt;
	</pre>

			<h3>Unstyled</h3>
			<p>A list of items with no <code>list-style</code> or additional left padding.</p>
			<div class="bs-docs-example">
			  <ul class="unstyled">
				<li>Lorem ipsum dolor sit amet</li>
				<li>Consectetur adipiscing elit</li>
				<li>Integer molestie lorem at massa</li>
				<li>Facilisis in pretium nisl aliquet</li>
				<li>Nulla volutpat aliquam velit
				  <ul>
					<li>Phasellus iaculis neque</li>
					<li>Purus sodales ultricies</li>
					<li>Vestibulum laoreet porttitor sem</li>
					<li>Ac tristique libero volutpat at</li>
				  </ul>
				</li>
				<li>Faucibus porta lacus fringilla vel</li>
				<li>Aenean sit amet erat nunc</li>
				<li>Eget porttitor lorem</li>
			  </ul>
			</div>
	<pre class="prettyprint linenums">
	&lt;ul class="unstyled"&gt;
	  &lt;li&gt;...&lt;/li&gt;
	&lt;/ul&gt;
	</pre>

			<h3>Description</h3>
			<p>A list of terms with their associated descriptions.</p>
			<div class="bs-docs-example">
			  <dl>
				<dt>Description lists</dt>
				<dd>A description list is perfect for defining terms.</dd>
				<dt>Euismod</dt>
				<dd>Vestibulum id ligula porta felis euismod semper eget lacinia odio sem nec elit.</dd>
				<dd>Donec id elit non mi porta gravida at eget metus.</dd>
				<dt>Malesuada porta</dt>
				<dd>Etiam porta sem malesuada magna mollis euismod.</dd>
			  </dl>
			</div>
	<pre class="prettyprint linenums">
	&lt;dl&gt;
	  &lt;dt&gt;...&lt;/dt&gt;
	  &lt;dd&gt;...&lt;/dd&gt;
	&lt;/dl&gt;
	</pre>

			<h4>Horizontal description</h4>
			<p>Make terms and descriptions in <code>&lt;dl&gt;</code> line up side-by-side.</p>
			<div class="bs-docs-example">
			  <dl class="dl-horizontal">
				<dt>Description lists</dt>
				<dd>A description list is perfect for defining terms.</dd>
				<dt>Euismod</dt>
				<dd>Vestibulum id ligula porta felis euismod semper eget lacinia odio sem nec elit.</dd>
				<dd>Donec id elit non mi porta gravida at eget metus.</dd>
				<dt>Malesuada porta</dt>
				<dd>Etiam porta sem malesuada magna mollis euismod.</dd>
				<dt>Felis euismod semper eget lacinia</dt>
				<dd>Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.</dd>
			  </dl>
			</div>
	<pre class="prettyprint linenums">
	&lt;dl class="dl-horizontal"&gt;
	  &lt;dt&gt;...&lt;/dt&gt;
	  &lt;dd&gt;...&lt;/dd&gt;
	&lt;/dl&gt;
	</pre>
			<p>
			  <span class="label label-info">Heads up!</span>
			  Horizontal description lists will truncate terms that are too long to fit in the left column fix <code>text-overflow</code>. In narrower viewports, they will change to the default stacked layout.
			</p>
		  </section>

			<!-- Images
				================================================== -->
				<section id="images">
					<div class="page-header">
					<h1>Images</h1>
					</div>

					<p>Add classes to an <code>&lt;img&gt;</code> element to easily style images in any project.</p>
					<!-- Small Centered Image With Caption -->
				  <h2>Small centered image with caption</h2>
				  <div class="figure small centered">
				  <div class="liner">
					<img src="http://farm4.staticflickr.com/3298/3577042795_4ae17f1a3c_z.jpg" alt="" title="">
					<p class="caption">Giving credit where credit is due</p>
				  </div>
				</div>

				   <!-- Medium Centered Image With Caption -->
				  <h2>Medium centered image with caption</h2>
				  <div class="figure medium centered">
				  <div class="liner">
					<img src="http://farm4.staticflickr.com/3298/3577042795_4ae17f1a3c_z.jpg" alt="" title="">
					<p class="caption">Giving credit where credit is due</p>
				  </div>
				</div>

				  <!-- Large Centered Image With Caption -->
				  <h2>Large centered image with caption</h2>
				  <div class="figure large centered">
				  <div class="liner">
					<img src="http://farm4.staticflickr.com/3298/3577042795_4ae17f1a3c_z.jpg" alt="" title="">
					<p class="caption">Giving credit where credit is due</p>
				  </div>
				</div>

					<!-- Large Centered Image With Extended Caption -->
				  <h2>Large centered image with extended caption</h2>
				  <div class="figure large centered">
				  <div class="liner">
					<img src="http://farm4.staticflickr.com/3298/3577042795_4ae17f1a3c_z.jpg" alt="" title="">
					<p class="caption">Giving credit where credit is due</p>
				  </div>
				  <p>Lorem ipsum nostrud irure sed id ut non ut adipisicing dolor qui esse elit. Lorem ipsum sed nisi dolore non officia ullamco in eiusmod amet velit incididunt sunt sed dolore ad aliquip proident in aliqua proident sed aliqua esse aliquip nostrud reprehenderit voluptate deserunt.
				  </p>
				</div>

				   <!-- Large Centered Image With padding on caption -->
				  <h2>Same as above but with left and right padding on caption</h2>
				   <div class="figure large centered">
				  <div class="liner">
					<img src="http://farm4.staticflickr.com/3298/3577042795_4ae17f1a3c_z.jpg" alt="" title="">
					   <div>
					<p class="caption">Giving credit where credit is due</p>
					<p>Lorem ipsum nostrud irure sed id ut non ut adipisicing dolor qui esse elit. Lorem ipsum sed nisi dolore non officia ullamco in eiusmod amet velit incididunt sunt sed dolore ad aliquip proident in aliqua proident sed aliqua esse aliquip nostrud reprehenderit voluptate deserunt.
					</p>
					   </div>
				  </div>
				</div>

				  <h2>Large centered image without a caption</h2>
				  <img class="figure centered has-border" src="http://farm4.staticflickr.com/3298/3577042795_4ae17f1a3c_z.jpg" alt="" title="">



					<h2>Left aligned image with caption</h2>
					<div class="figure left">
					   <div class="liner">
						 <img src="http://farm4.staticflickr.com/3298/3577042795_4ae17f1a3c_n.jpg" alt="" title="">
							<p class="caption">Giving credit where credit is due</p>
					   </div>
				  </div>

				  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>

				  <p>Lorem ipsum id occaecat officia ex laboris tempor commodo et tempor ea sed. Lorem ipsum culpa sit consequat eiusmod officia ea ut Excepteur consectetur et occaecat occaecat mollit aliquip dolore adipisicing ad velit voluptate cillum amet in exercitation velit aliqua laborum Excepteur aliquip in ex exercitation ad adipisicing nostrud minim magna cillum pariatur ut ullamco officia adipisicing elit pariatur culpa nostrud ex do sed aliquip Duis dolor ad mollit voluptate tempor in ut eu ullamco enim pariatur aliqua in anim voluptate ut culpa elit proident do qui laboris adipisicing reprehenderit elit commodo dolor.  </p>

				  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>

				  <!-- Right aligned image with caption -->
				  <h2>Right aligned image with caption</h2>
					 <div class="figure right">
					   <div class="liner">
						 <img src="http://farm4.staticflickr.com/3298/3577042795_4ae17f1a3c_n.jpg" alt="" title="">
							<p class="caption">Giving credit where credit is due</p>
					   </div>
				  </div>

				  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>

				  <p>Lorem ipsum id occaecat officia ex laboris tempor commodo et tempor ea sed. Lorem ipsum culpa sit consequat eiusmod officia ea ut Excepteur consectetur et occaecat occaecat mollit aliquip dolore adipisicing ad velit voluptate cillum amet in exercitation velit aliqua laborum Excepteur aliquip in ex exercitation ad adipisicing nostrud minim magna cillum pariatur ut ullamco officia adipisicing elit pariatur culpa nostrud ex do sed aliquip Duis dolor ad mollit voluptate tempor in ut eu ullamco enim pariatur aliqua in anim voluptate ut culpa elit proident do qui laboris adipisicing reprehenderit elit commodo dolor.  </p>

				  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>

				  <p><span class="label label-info">Heads up!</span> <code>.img-rounded</code> and <code>.img-circle</code> do not work in IE7-8 due to lack of <code>border-radius</code> support.</p>


			</section>

			</div>
		</div> <!-- /Row Fluid -->
	</div> <!-- /container -->

	<?php include('_inc/_footer_scripts.php') ?>

	<script type="text/javascript">

	</script>
	</body>
</html>
