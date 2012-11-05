<!DOCTYPE html>
<!--[if IE 6 ]> <html class="ie6"> <![endif]-->
<!--[if IE 7 ]> <html class="ie7"> <![endif]-->
<!--[if IE 8 ]> <html class="ie8"> <![endif]-->
<!--[if IE 9 ]> <html class="ie9"> <![endif]-->
<!--[if (gt IE 9)|!(IE)]><!-->
<html>
<!--<![endif]-->
<head>
	<meta charset="utf-8">
	<title>NeSI</title>
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<meta name="description" content="">
	<meta name="author" content="">

	<link rel="icon" type="image/ico" href="/favicon.ico" />

	<!-- Le styles -->
	<link href="/assets/css/bootstrap.css" rel="stylesheet">
	<link href="/assets/css/responsive.css" rel="stylesheet">
		<link href="/assets/css/docs.css" rel="stylesheet">


	<!-- Le HTML5 shim, for IE6-8 support of HTML5 elements -->
	<!--[if lt IE 9]>
		<script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
	<![endif]-->

	<!-- Le fav and touch icons -->
	<link rel="shortcut icon" href="/assets/ico/favicon.ico">
	<link rel="apple-touch-icon-precomposed" sizes="144x144" href="/assets/ico/apple-touch-icon-144-precomposed.png">
	<link rel="apple-touch-icon-precomposed" sizes="114x114" href="/assets/ico/apple-touch-icon-114-precomposed.png">
	<link rel="apple-touch-icon-precomposed" sizes="72x72" href="/assets/ico/apple-touch-icon-72-precomposed.png">
	<link rel="apple-touch-icon-precomposed" href="/assets/ico/apple-touch-icon-57-precomposed.png">

	<script src="/assets/js/modernizr.custom.39236.js"></script>

</head>


<body class="styleguide">

	<header class="subhead" id="overview">
		<div class="container">
		<a class="brand" href="/index.php"><span>NeSI &ndash; New Zealand eScience Infrastructure</span></a>
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
						<!-- <li><a href="#buttons">Buttons</a></li> -->
						<li><a href="#images">Images</a></li>
						<!-- <li><a href="#icons">Icons by Glyphicons</a></li> -->
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
			  <p>Make a paragraph stand out by adding <code>.lead</code>. This should only be applied to the very first paragraph that proceeds a major page heading.</p>
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


			  <!-- <h2 id="addresses">Addresses</h2>
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
-->

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

				<!-- Code
				================================================== -->
				<section id="code">
				  <div class="page-header">
					<h1>Code</h1>
				  </div>

				  <h2>Inline</h2>
				  <p>Wrap inline snippets of code with <code>&lt;code&gt;</code>.</p>
		<div class="bs-docs-example">
		  For example, <code>&lt;section&gt;</code> should be wrapped as inline.
		</div>
<pre class="prettyprint linenums">
For example, &lt;code&gt;&lt;section&gt;&lt;/code&gt; should be wrapped as inline.
</pre>

				  <h2>Basic block</h2>
				  <p>Use <code>&lt;pre&gt;</code> for multiple lines of code. Be sure to escape any angle brackets in the code for proper rendering.</p>
		<div class="bs-docs-example">
		  <pre>&lt;p&gt;Sample text here...&lt;/p&gt;</pre>
		</div>
<pre class="prettyprint linenums" style="margin-bottom: 9px;">
&lt;pre&gt;
  &amp;lt;p&amp;gt;Sample text here...&amp;lt;/p&amp;gt;
&lt;/pre&gt;
</pre>
				  <p><span class="label label-info">Heads up!</span> Be sure to keep code within <code>&lt;pre&gt;</code> tags as close to the left as possible; it will render all tabs.</p>
				  <p>You may optionally add the <code>.pre-scrollable</code> class which will set a max-height of 350px and provide a y-axis scrollbar.</p>
				</section>



				<!-- Tables
				================================================== -->
				<section id="tables">
				  <div class="page-header">
					<h1>Tables</h1>
				  </div>

				  <h2>Default styles</h2>
				  <p>For basic styling&mdash;light padding and only horizontal dividers&mdash;add the base class <code>.table</code> to any <code>&lt;table&gt;</code>.</p>
				  <div class="bs-docs-example">
					<table class="table">
					  <thead>
						<tr>
						  <th>#</th>
						  <th>First Name</th>
						  <th>Last Name</th>
						  <th>Username</th>
						</tr>
					  </thead>
					  <tbody>
						<tr>
						  <td>1</td>
						  <td>Mark</td>
						  <td>Otto</td>
						  <td>@mdo</td>
						</tr>
						<tr>
						  <td>2</td>
						  <td>Jacob</td>
						  <td>Thornton</td>
						  <td>@fat</td>
						</tr>
						<tr>
						  <td>3</td>
						  <td>Larry</td>
						  <td>the Bird</td>
						  <td>@twitter</td>
						</tr>
					  </tbody>
					</table>
				  </div>
		<pre class="prettyprint linenums">
		&lt;table class="table"&gt;
		  …
		&lt;/table&gt;
		</pre>


				  <hr class="bs-docs-separator">


				  <h2>Optional classes</h2>
				  <p>Add any of the follow classes to the <code>.table</code> base class.</p>

				  <h3><code>.table-striped</code></h3>
				  <p>Adds zebra-striping to any table row within the <code>&lt;tbody&gt;</code> via the <code>:nth-child</code> CSS selector (not available in IE7-IE8).</p>
				  <div class="bs-docs-example">
					<table class="table table-striped">
					  <thead>
						<tr>
						  <th>#</th>
						  <th>First Name</th>
						  <th>Last Name</th>
						  <th>Username</th>
						</tr>
					  </thead>
					  <tbody>
						<tr>
						  <td>1</td>
						  <td>Mark</td>
						  <td>Otto</td>
						  <td>@mdo</td>
						</tr>
						<tr>
						  <td>2</td>
						  <td>Jacob</td>
						  <td>Thornton</td>
						  <td>@fat</td>
						</tr>
						<tr>
						  <td>3</td>
						  <td>Larry</td>
						  <td>the Bird</td>
						  <td>@twitter</td>
						</tr>
					  </tbody>
					</table>
				  </div>
		<pre class="prettyprint linenums" style="margin-bottom: 18px;">
		&lt;table class="table table-striped"&gt;
		  …
		&lt;/table&gt;
		</pre>

				  <h3><code>.table-bordered</code></h3>
				  <p>Add borders and rounded corners to the table.</p>
				  <div class="bs-docs-example">
					<table class="table table-bordered">
					  <thead>
						<tr>
						  <th>#</th>
						  <th>First Name</th>
						  <th>Last Name</th>
						  <th>Username</th>
						</tr>
					  </thead>
					  <tbody>
						<tr>
						  <td rowspan="2">1</td>
						  <td>Mark</td>
						  <td>Otto</td>
						  <td>@mdo</td>
						</tr>
						<tr>
						  <td>Mark</td>
						  <td>Otto</td>
						  <td>@TwBootstrap</td>
						</tr>
						<tr>
						  <td>2</td>
						  <td>Jacob</td>
						  <td>Thornton</td>
						  <td>@fat</td>
						</tr>
						<tr>
						  <td>3</td>
						  <td colspan="2">Larry the Bird</td>
						  <td>@twitter</td>
						</tr>
					  </tbody>
					</table>
				  </div>
		<pre class="prettyprint linenums">
		&lt;table class="table table-bordered"&gt;
		  …
		&lt;/table&gt;
		</pre>

				  <h3><code>.table-hover</code></h3>
				  <p>Enable a hover state on table rows within a <code>&lt;tbody&gt;</code>.</p>
				  <div class="bs-docs-example">
					<table class="table table-hover">
					  <thead>
						<tr>
						  <th>#</th>
						  <th>First Name</th>
						  <th>Last Name</th>
						  <th>Username</th>
						</tr>
					  </thead>
					  <tbody>
						<tr>
						  <td>1</td>
						  <td>Mark</td>
						  <td>Otto</td>
						  <td>@mdo</td>
						</tr>
						<tr>
						  <td>2</td>
						  <td>Jacob</td>
						  <td>Thornton</td>
						  <td>@fat</td>
						</tr>
						<tr>
						  <td>3</td>
						  <td colspan="2">Larry the Bird</td>
						  <td>@twitter</td>
						</tr>
					  </tbody>
					</table>
				  </div>
		<pre class="prettyprint linenums" style="margin-bottom: 18px;">
		&lt;table class="table table-hover"&gt;
		  …
		&lt;/table&gt;
		</pre>

				  <h3><code>.table-condensed</code></h3>
				  <p>Makes tables more compact by cutting cell padding in half.</p>
				  <div class="bs-docs-example">
					<table class="table table-condensed">
					  <thead>
						<tr>
						  <th>#</th>
						  <th>First Name</th>
						  <th>Last Name</th>
						  <th>Username</th>
						</tr>
					  </thead>
					  <tbody>
						<tr>
						  <td>1</td>
						  <td>Mark</td>
						  <td>Otto</td>
						  <td>@mdo</td>
						</tr>
						<tr>
						  <td>2</td>
						  <td>Jacob</td>
						  <td>Thornton</td>
						  <td>@fat</td>
						</tr>
						<tr>
						  <td>3</td>
						  <td colspan="2">Larry the Bird</td>
						  <td>@twitter</td>
						</tr>
					  </tbody>
					</table>
				  </div>
		<pre class="prettyprint linenums" style="margin-bottom: 18px;">
		&lt;table class="table table-condensed"&gt;
		  …
		&lt;/table&gt;
		</pre>


				  <hr class="bs-docs-separator">


				  <h2>Optional row classes</h2>
				  <p>Use contextual classes to color table rows.</p>
				  <table class="table table-bordered table-striped">
					<colgroup>
					  <col class="span1">
					  <col class="span7">
					</colgroup>
					<thead>
					  <tr>
						<th>Class</th>
						<th>Description</th>
					  </tr>
					</thead>
					<tbody>
					  <tr>
						<td>
						  <code>.success</code>
						</td>
						<td>Indicates a successful or positive action.</td>
					  </tr>
					  <tr>
						<td>
						  <code>.error</code>
						</td>
						<td>Indicates a dangerous or potentially negative action.</td>
					  </tr>
					  <tr>
						<td>
						  <code>.info</code>
						</td>
						<td>Used as an alternative to the default styles.</td>
					  </tr>
					</tbody>
				  </table>
				  <div class="bs-docs-example">
					<table class="table">
					  <thead>
						<tr>
						  <th>#</th>
						  <th>Product</th>
						  <th>Payment Taken</th>
						  <th>Status</th>
						</tr>
					  </thead>
					  <tbody>
						<tr class="success">
						  <td>1</td>
						  <td>TB - Monthly</td>
						  <td>01/04/2012</td>
						  <td>Approved</td>
						</tr>
						<tr class="error">
						  <td>2</td>
						  <td>TB - Monthly</td>
						  <td>02/04/2012</td>
						  <td>Declined</td>
						</tr>
						<tr class="info">
						  <td>3</td>
						  <td>TB - Monthly</td>
						  <td>03/04/2012</td>
						  <td>Pending</td>
						</tr>
					  </tbody>
					</table>
				  </div>
		<pre class="prettyprint linenums">
		...
		  &lt;tr class="success"&gt;
			&lt;td&gt;1&lt;/td&gt;
			&lt;td&gt;TB - Monthly&lt;/td&gt;
			&lt;td&gt;01/04/2012&lt;/td&gt;
			&lt;td&gt;Approved&lt;/td&gt;
		  &lt;/tr&gt;
		...
		</pre>


				  <hr class="bs-docs-separator">


				  <h2>Supported table markup</h2>
				  <p>List of supported table HTML elements and how they should be used.</p>
				  <table class="table table-bordered table-striped">
					<colgroup>
					  <col class="span1">
					  <col class="span7">
					</colgroup>
					<thead>
					  <tr>
						<th>Tag</th>
						<th>Description</th>
					  </tr>
					</thead>
					<tbody>
					  <tr>
						<td>
						  <code>&lt;table&gt;</code>
						</td>
						<td>
						  Wrapping element for displaying data in a tabular format
						</td>
					  </tr>
					  <tr>
						<td>
						  <code>&lt;thead&gt;</code>
						</td>
						<td>
						  Container element for table header rows (<code>&lt;tr&gt;</code>) to label table columns
						</td>
					  </tr>
					  <tr>
						<td>
						  <code>&lt;tbody&gt;</code>
						</td>
						<td>
						  Container element for table rows (<code>&lt;tr&gt;</code>) in the body of the table
						</td>
					  </tr>
					  <tr>
						<td>
						  <code>&lt;tr&gt;</code>
						</td>
						<td>
						  Container element for a set of table cells (<code>&lt;td&gt;</code> or <code>&lt;th&gt;</code>) that appears on a single row
						</td>
					  </tr>
					  <tr>
						<td>
						  <code>&lt;td&gt;</code>
						</td>
						<td>
						  Default table cell
						</td>
					  </tr>
					  <tr>
						<td>
						  <code>&lt;th&gt;</code>
						</td>
						<td>
						  Special table cell for column (or row, depending on scope and placement) labels<br>
						  Must be used within a <code>&lt;thead&gt;</code>
						</td>
					  </tr>
					  <tr>
						<td>
						  <code>&lt;caption&gt;</code>
						</td>
						<td>
						  Description or summary of what the table holds, especially useful for screen readers
						</td>
					  </tr>
					</tbody>
				  </table>
		<pre class="prettyprint linenums">
		&lt;table&gt;
		  &lt;caption&gt;...&lt;/caption&gt;
		  &lt;thead&gt;
			&lt;tr&gt;
			  &lt;th&gt;...&lt;/th&gt;
			  &lt;th&gt;...&lt;/th&gt;
			&lt;/tr&gt;
		  &lt;/thead&gt;
		  &lt;tbody&gt;
			&lt;tr&gt;
			  &lt;td&gt;...&lt;/td&gt;
			  &lt;td&gt;...&lt;/td&gt;
			&lt;/tr&gt;
		  &lt;/tbody&gt;
		&lt;/table&gt;
		</pre>

				</section>


				<!-- Forms
				================================================== -->
				<section id="forms">
				  <div class="page-header">
					<h1>Forms</h1>
				  </div>

				  <h2>Default styles</h2>
				  <p>Individual form controls receive styling, but without any required base class on the <code>&lt;form&gt;</code> or large changes in markup. Results in stacked, left-aligned labels on top of form controls.</p>
				  <form class="bs-docs-example">
					<legend>Legend</legend>
					<label>Label name</label>
					<input type="text" placeholder="Type something…">
					<span class="help-block">Example block-level help text here.</span>
					<label class="checkbox">
					  <input type="checkbox"> Check me out
					</label>
					<button type="submit" class="btn">Submit</button>
				  </form>
<pre class="prettyprint linenums">
&lt;form&gt;
  &lt;legend&gt;Legend&lt;/legend&gt;
  &lt;label&gt;Label name&lt;/label&gt;
  &lt;input type="text" placeholder="Type something…"&gt;
  &lt;span class="help-block"&gt;Example block-level help text here.&lt;/span&gt;
  &lt;label class="checkbox"&gt;
	&lt;input type="checkbox"&gt; Check me out
  &lt;/label&gt;
  &lt;button type="submit" class="btn"&gt;Submit&lt;/button&gt;
&lt;/form&gt;
</pre>


				  <hr class="bs-docs-separator">


				  <h2>Optional layouts</h2>
				  <p>Included with Bootstrap are three optional form layouts for common use cases.</p>

				  <h3>Search form</h3>
				  <p>Add <code>.form-search</code> to the form and <code>.search-query</code> to the <code>&lt;input&gt;</code> for an extra-rounded text input.</p>
				  <form class="bs-docs-example form-search">
					<input type="text" class="input-medium search-query">
					<button type="submit" class="btn">Search</button>
				  </form>
<pre class="prettyprint linenums">
&lt;form class="form-search"&gt;
  &lt;input type="text" class="input-medium search-query"&gt;
  &lt;button type="submit" class="btn"&gt;Search&lt;/button&gt;
&lt;/form&gt;
</pre>

				  <h3>Inline form</h3>
				  <p>Add <code>.form-inline</code> for left-aligned labels and inline-block controls for a compact layout.</p>
				  <form class="bs-docs-example form-inline">
					<input type="text" class="input-small" placeholder="Email">
					<input type="password" class="input-small" placeholder="Password">
					<label class="checkbox">
					  <input type="checkbox"> Remember me
					</label>
					<button type="submit" class="btn">Sign in</button>
				  </form>
<pre class="prettyprint linenums">
&lt;form class="form-inline"&gt;
  &lt;input type="text" class="input-small" placeholder="Email"&gt;
  &lt;input type="password" class="input-small" placeholder="Password"&gt;
  &lt;label class="checkbox"&gt;
	&lt;input type="checkbox"&gt; Remember me
  &lt;/label&gt;
  &lt;button type="submit" class="btn"&gt;Sign in&lt;/button&gt;
&lt;/form&gt;
</pre>

				  <h3>Horizontal form</h3>
				  <p>Right align labels and float them to the left to make them appear on the same line as controls. Requires the most markup changes from a default form:</p>
				  <ul>
					<li>Add <code>.form-horizontal</code> to the form</li>
					<li>Wrap labels and controls in <code>.control-group</code></li>
					<li>Add <code>.control-label</code> to the label</li>
					<li>Wrap any associated controls in <code>.controls</code> for proper alignment</li>
				  </ul>
				  <form class="bs-docs-example form-horizontal">
					<legend>Legend</legend>
					<div class="control-group">
					  <label class="control-label" for="inputEmail">Email</label>
					  <div class="controls">
						<input type="text" id="inputEmail" placeholder="Email">
					  </div>
					</div>
					<div class="control-group">
					  <label class="control-label" for="inputPassword">Password</label>
					  <div class="controls">
						<input type="password" id="inputPassword" placeholder="Password">
					  </div>
					</div>
					<div class="control-group">
					  <div class="controls">
						<label class="checkbox">
						  <input type="checkbox"> Remember me
						</label>
						<button type="submit" class="btn">Sign in</button>
					  </div>
					</div>
				  </form>
<pre class="prettyprint linenums">
&lt;form class="form-horizontal"&gt;
  &lt;div class="control-group"&gt;
	&lt;label class="control-label" for="inputEmail"&gt;Email&lt;/label&gt;
	&lt;div class="controls"&gt;
	  &lt;input type="text" id="inputEmail" placeholder="Email"&gt;
	&lt;/div&gt;
  &lt;/div&gt;
  &lt;div class="control-group"&gt;
	&lt;label class="control-label" for="inputPassword"&gt;Password&lt;/label&gt;
	&lt;div class="controls"&gt;
	  &lt;input type="password" id="inputPassword" placeholder="Password"&gt;
	&lt;/div&gt;
  &lt;/div&gt;
  &lt;div class="control-group"&gt;
	&lt;div class="controls"&gt;
	  &lt;label class="checkbox"&gt;
		&lt;input type="checkbox"&gt; Remember me
	  &lt;/label&gt;
	  &lt;button type="submit" class="btn"&gt;Sign in&lt;/button&gt;
	&lt;/div&gt;
  &lt;/div&gt;
&lt;/form&gt;
</pre>


				  <hr class="bs-docs-separator">


				  <h2>Supported form controls</h2>
				  <p>Examples of standard form controls supported in an example form layout.</p>

				  <h3>Inputs</h3>
				  <p>Most common form control, text-based input fields. Includes support for all HTML5 types: text, password, datetime, datetime-local, date, month, time, week, number, email, url, search, tel, and color.</p>
				  <p>Requires the use of a specified <code>type</code> at all times.</p>
				  <form class="bs-docs-example form-inline">
					<input type="text" placeholder="Text input">
				  </form>
<pre class="prettyprint linenums">
&lt;input type="text" placeholder="Text input"&gt;
</pre>

				  <h3>Textarea</h3>
				  <p>Form control which supports multiple lines of text. Change <code>row</code> attribute as necessary.</p>
				  <form class="bs-docs-example form-inline">
					<textarea rows="3"></textarea>
				  </form>
<pre class="prettyprint linenums">
&lt;textarea rows="3"&gt;&lt;/textarea&gt;
</pre>

				  <h3>Checkboxes and radios</h3>
				  <p>Checkboxes are for selecting one or several options in a list while radios are for selecting one option from many.</p>
				  <h4>Default (stacked)</h4>
				  <form class="bs-docs-example">
					<label class="checkbox">
					  <input type="checkbox" value="">
					  Option one is this and that&mdash;be sure to include why it's great
					</label>
					<br>
					<label class="radio">
					  <input type="radio" name="optionsRadios" id="optionsRadios1" value="option1" checked>
					  Option one is this and that&mdash;be sure to include why it's great
					</label>
					<label class="radio">
					  <input type="radio" name="optionsRadios" id="optionsRadios2" value="option2">
					  Option two can be something else and selecting it will deselect option one
					</label>
				  </form>
<pre class="prettyprint linenums">
&lt;label class="checkbox"&gt;
  &lt;input type="checkbox" value=""&gt;
  Option one is this and that&mdash;be sure to include why it's great
&lt;/label&gt;

&lt;label class="radio"&gt;
  &lt;input type="radio" name="optionsRadios" id="optionsRadios1" value="option1" checked&gt;
  Option one is this and that&mdash;be sure to include why it's great
&lt;/label&gt;
&lt;label class="radio"&gt;
  &lt;input type="radio" name="optionsRadios" id="optionsRadios2" value="option2"&gt;
  Option two can be something else and selecting it will deselect option one
&lt;/label&gt;
</pre>

				  <h4>Inline checkboxes</h4>
				  <p>Add the <code>.inline</code> class to a series of checkboxes or radios for controls appear on the same line.</p>
				  <form class="bs-docs-example">
					<label class="checkbox inline">
					  <input type="checkbox" id="inlineCheckbox1" value="option1"> 1
					</label>
					<label class="checkbox inline">
					  <input type="checkbox" id="inlineCheckbox2" value="option2"> 2
					</label>
					<label class="checkbox inline">
					  <input type="checkbox" id="inlineCheckbox3" value="option3"> 3
					</label>
				  </form>
<pre class="prettyprint linenums">
&lt;label class="checkbox inline"&gt;
  &lt;input type="checkbox" id="inlineCheckbox1" value="option1"&gt; 1
&lt;/label&gt;
&lt;label class="checkbox inline"&gt;
  &lt;input type="checkbox" id="inlineCheckbox2" value="option2"&gt; 2
&lt;/label&gt;
&lt;label class="checkbox inline"&gt;
  &lt;input type="checkbox" id="inlineCheckbox3" value="option3"&gt; 3
&lt;/label&gt;
</pre>

				  <h3>Selects</h3>
				  <p>Use the default option or specify a <code>multiple="multiple"</code> to show multiple options at once.</p>
				  <form class="bs-docs-example">
					<select>
					  <option>1</option>
					  <option>2</option>
					  <option>3</option>
					  <option>4</option>
					  <option>5</option>
					</select>
					<br>
					<select multiple="multiple">
					  <option>1</option>
					  <option>2</option>
					  <option>3</option>
					  <option>4</option>
					  <option>5</option>
					</select>
				  </form>
<pre class="prettyprint linenums">
&lt;select&gt;
  &lt;option&gt;1&lt;/option&gt;
  &lt;option&gt;2&lt;/option&gt;
  &lt;option&gt;3&lt;/option&gt;
  &lt;option&gt;4&lt;/option&gt;
  &lt;option&gt;5&lt;/option&gt;
&lt;/select&gt;

&lt;select multiple="multiple"&gt;
  &lt;option&gt;1&lt;/option&gt;
  &lt;option&gt;2&lt;/option&gt;
  &lt;option&gt;3&lt;/option&gt;
  &lt;option&gt;4&lt;/option&gt;
  &lt;option&gt;5&lt;/option&gt;
&lt;/select&gt;
</pre>


				  <hr class="bs-docs-separator">


				  <h2>Extending form controls</h2>
				  <p>Adding on top of existing browser controls, Bootstrap includes other useful form components.</p>

				  <h3>Prepended and appended inputs</h3>
				  <p>Add text or buttons before or after any text-based input. Do note that <code>select</code> elements are not supported here.</p>

				  <h4>Default options</h4>
				  <p>Wrap an <code>.add-on</code> and an <code>input</code> with one of two classes to prepend or append text to an input.</p>
				  <form class="bs-docs-example">
					<div class="input-prepend">
					  <span class="add-on">@</span>
					  <input class="span2" id="prependedInput" size="16" type="text" placeholder="Username">
					</div>
					<br>
					<div class="input-append">
					  <input class="span2" id="appendedInput" size="16" type="text">
					  <span class="add-on">.00</span>
					</div>
				  </form>
<pre class="prettyprint linenums">
&lt;div class="input-prepend"&gt;
  &lt;span class="add-on"&gt;@&lt;/span&gt;&lt;input class="span2" id="prependedInput" size="16" type="text" placeholder="Username"&gt;
&lt;/div&gt;
&lt;div class="input-append"&gt;
  &lt;input class="span2" id="appendedInput" size="16" type="text"&gt;&lt;span class="add-on"&gt;.00&lt;/span&gt;
&lt;/div&gt;
</pre>

				  <h4>Combined</h4>
				  <p>Use both classes and two instances of <code>.add-on</code> to prepend and append an input.</p>
				  <form class="bs-docs-example form-inline">
					<div class="input-prepend input-append">
					  <span class="add-on">$</span>
					  <input class="span2" id="appendedPrependedInput" size="16" type="text">
					  <span class="add-on">.00</span>
					</div>
				  </form>
<pre class="prettyprint linenums">
&lt;div class="input-prepend input-append"&gt;
  &lt;span class="add-on"&gt;$&lt;/span&gt;&lt;input class="span2" id="appendedPrependedInput" size="16" type="text"&gt;&lt;span class="add-on"&gt;.00&lt;/span&gt;
&lt;/div&gt;
</pre>

				  <h4>Buttons instead of text</h4>
				  <p>Instead of a <code>&lt;span&gt;</code> with text, use a <code>.btn</code> to attach a button (or two) to an input.</p>
				  <form class="bs-docs-example">
					<div class="input-append">
					  <input class="span2" id="appendedInputButton" size="16" type="text">
					  <button class="btn" type="button">Go!</button>
					</div>
					<br>
					<div class="input-append">
					  <input class="span2" id="appendedInputButtons" size="16" type="text">
					  <button class="btn" type="button">Search</button>
					  <button class="btn" type="button">Options</button>
					</div>
				  </form>
<pre class="prettyprint linenums">
&lt;div class="input-append"&gt;
  &lt;input class="span2" id="appendedInputButton" size="16" type="text"&gt;&lt;button class="btn" type="button"&gt;Go!&lt;/button&gt;
&lt;/div&gt;

&lt;div class="input-append"&gt;
  &lt;input class="span2" id="appendedInputButtons" size="16" type="text"&gt;&lt;button class="btn" type="button"&gt;Search&lt;/button&gt;&lt;button class="btn" type="button"&gt;Options&lt;/button&gt;
&lt;/div&gt;
</pre>

				  <h4>Search form</h4>
				  <form class="bs-docs-example form-search">
					<div class="input-append">
					  <input type="text" class="span2 search-query">
					  <button type="submit" class="btn">Search</button>
					</div>
					<div class="input-prepend">
					  <button type="submit" class="btn">Search</button>
					  <input type="text" class="span2 search-query">
					</div>
				  </form>
<pre class="prettyprint linenums">
&lt;form class="form-search"&gt;
  &lt;div class="input-append"&gt;
	&lt;input type="text" class="span2 search-query"&gt;
	&lt;button type="submit" class="btn"&gt;Search&lt;/button&gt;
  &lt;/div&gt;
  &lt;div class="input-prepend"&gt;
	&lt;button type="submit" class="btn"&gt;Search&lt;/button&gt;
	&lt;input type="text" class="span2 search-query"&gt;
  &lt;/div&gt;
&lt;/form&gt;
</pre>

				  <h3>Control sizing</h3>
				  <p>Use relative sizing classes like <code>.input-large</code> or match your inputs to the grid column sizes using <code>.span*</code> classes.</p>

				  <h4>Relative sizing</h4>
				  <form class="bs-docs-example" style="padding-bottom: 15px;">
					<div class="controls docs-input-sizes">
					  <input class="input-mini" type="text" placeholder=".input-mini">
					  <input class="input-small" type="text" placeholder=".input-small">
					  <input class="input-medium" type="text" placeholder=".input-medium">
					  <input class="input-large" type="text" placeholder=".input-large">
					  <input class="input-xlarge" type="text" placeholder=".input-xlarge">
					  <input class="input-xxlarge" type="text" placeholder=".input-xxlarge">
					</div>
				  </form>
<pre class="prettyprint linenums">
&lt;input class="input-mini" type="text" placeholder=".input-mini"&gt;
&lt;input class="input-small" type="text" placeholder=".input-small"&gt;
&lt;input class="input-medium" type="text" placeholder=".input-medium"&gt;
&lt;input class="input-large" type="text" placeholder=".input-large"&gt;
&lt;input class="input-xlarge" type="text" placeholder=".input-xlarge"&gt;
&lt;input class="input-xxlarge" type="text" placeholder=".input-xxlarge"&gt;
</pre>
				  <p>
					<span class="label label-info">Heads up!</span> In future versions, we'll be altering the use of these relative input classes to match our button sizes. For example, <code>.input-large</code> will increase the padding and font-size of an input.
				  </p>

				  <h4>Grid sizing</h4>
				  <p>Use <code>.span1</code> to <code>.span12</code> for inputs that match the same sizes of the grid columns.</p>
				  <form class="bs-docs-example" style="padding-bottom: 15px;">
					<div class="controls docs-input-sizes">
					  <input class="span1" type="text" placeholder=".span1">
					  <input class="span2" type="text" placeholder=".span2">
					  <input class="span3" type="text" placeholder=".span3">
					  <select class="span1">
						<option>1</option>
						<option>2</option>
						<option>3</option>
						<option>4</option>
						<option>5</option>
					  </select>
					  <select class="span2">
						<option>1</option>
						<option>2</option>
						<option>3</option>
						<option>4</option>
						<option>5</option>
					  </select>
					  <select class="span3">
						<option>1</option>
						<option>2</option>
						<option>3</option>
						<option>4</option>
						<option>5</option>
					  </select>
					</div>
				  </form>
		<pre class="prettyprint linenums">
		&lt;input class="span1" type="text" placeholder=".span1"&gt;
		&lt;input class="span2" type="text" placeholder=".span2"&gt;
		&lt;input class="span3" type="text" placeholder=".span3"&gt;
		&lt;select class="span1"&gt;
		  ...
		&lt;/select&gt;
		&lt;select class="span2"&gt;
		  ...
		&lt;/select&gt;
		&lt;select class="span3"&gt;
		  ...
		&lt;/select&gt;
		</pre>

				  <p>For multiple grid inputs per line, <strong>use the <code>.controls-row</code> modifier class for proper spacing</strong>. It floats the inputs to collapse white-space, sets the proper margins, and the clears the float.</p>
				  <form class="bs-docs-example" style="padding-bottom: 15px;">
					<div class="controls">
					  <input class="span5" type="text" placeholder=".span5">
					</div>
					<div class="controls controls-row">
					  <input class="span4" type="text" placeholder=".span4">
					  <input class="span1" type="text" placeholder=".span1">
					</div>
					<div class="controls controls-row">
					  <input class="span3" type="text" placeholder=".span3">
					  <input class="span2" type="text" placeholder=".span2">
					</div>
					<div class="controls controls-row">
					  <input class="span2" type="text" placeholder=".span2">
					  <input class="span3" type="text" placeholder=".span3">
					</div>
					<div class="controls controls-row">
					  <input class="span1" type="text" placeholder=".span1">
					  <input class="span4" type="text" placeholder=".span4">
					</div>
				  </form>
		<pre class="prettyprint linenums">
		&lt;div class="controls"&gt;
		  &lt;input class="span5" type="text" placeholder=".span5"&gt;
		&lt;/div&gt;
		&lt;div class="controls controls-row"&gt;
		  &lt;input class="span4" type="text" placeholder=".span4"&gt;
		  &lt;input class="span1" type="text" placeholder=".span1"&gt;
		&lt;/div&gt;
		...
		</pre>

				  <h3>Uneditable inputs</h3>
				  <p>Present data in a form that's not editable without using actual form markup.</p>
				  <form class="bs-docs-example">
					<span class="input-xlarge uneditable-input">Some value here</span>
				  </form>
		<pre class="prettyprint linenums">
		&lt;span class="input-xlarge uneditable-input"&gt;Some value here&lt;/span&gt;
		</pre>

				  <h3>Form actions</h3>
				  <p>End a form with a group of actions (buttons). When placed within a <code>.form-horizontal</code>, the buttons will automatically indent to line up with the form controls.</p>
				  <form class="bs-docs-example">
					<div class="form-actions">
					  <button type="submit" class="btn btn-primary">Save changes</button>
					  <button type="button" class="btn">Cancel</button>
					</div>
				  </form>
		<pre class="prettyprint linenums">
		&lt;div class="form-actions"&gt;
		  &lt;button type="submit" class="btn btn-primary"&gt;Save changes&lt;/button&gt;
		  &lt;button type="button" class="btn"&gt;Cancel&lt;/button&gt;
		&lt;/div&gt;
		</pre>

				  <h3>Help text</h3>
				  <p>Inline and block level support for help text that appears around form controls.</p>
				  <h4>Inline help</h4>
				  <form class="bs-docs-example form-inline">
					<input type="text"> <span class="help-inline">Inline help text</span>
				  </form>
		<pre class="prettyprint linenums">
		&lt;input type="text"&gt;&lt;span class="help-inline"&gt;Inline help text&lt;/span&gt;
		</pre>

				  <h4>Block help</h4>
				  <form class="bs-docs-example form-inline">
					<input type="text">
					<span class="help-block">A longer block of help text that breaks onto a new line and may extend beyond one line.</span>
				  </form>
		<pre class="prettyprint linenums">
		&lt;input type="text"&gt;&lt;span class="help-block"&gt;A longer block of help text that breaks onto a new line and may extend beyond one line.&lt;/span&gt;
		</pre>


				  <hr class="bs-docs-separator">


				  <h2>Form control states</h2>
				  <p>Provide feedback to users or visitors with basic feedback states on form controls and labels.</p>

				  <h3>Input focus</h3>
				  <p>We remove the default <code>outline</code> styles on some form controls and apply a <code>box-shadow</code> in its place for <code>:focus</code>.</p>
				  <form class="bs-docs-example form-inline">
					<input class="input-xlarge focused" id="focusedInput" type="text" value="This is focused...">
				  </form>
		<pre class="prettyprint linenums">
		&lt;input class="input-xlarge" id="focusedInput" type="text" value="This is focused..."&gt;
		</pre>

				  <h3>Disabled inputs</h3>
				  <p>Add the <code>disabled</code> attribute on an input to prevent user input and trigger a slightly different look.</p>
				  <form class="bs-docs-example form-inline">
					<input class="input-xlarge" id="disabledInput" type="text" placeholder="Disabled input here…" disabled>
				  </form>
		<pre class="prettyprint linenums">
		&lt;input class="input-xlarge" id="disabledInput" type="text" placeholder="Disabled input here..." disabled&gt;
		</pre>

				  <h3>Validation states</h3>
				  <p>Bootstrap includes validation styles for error, warning, and success messages. To use, add the appropriate class to the surrounding <code>.control-group</code>.</p>

				  <form class="bs-docs-example form-horizontal">
					<div class="control-group warning">
					  <label class="control-label" for="inputWarning">Input with warning</label>
					  <div class="controls">
						<input type="text" id="inputWarning">
						<span class="help-inline">Something may have gone wrong</span>
					  </div>
					</div>
					<div class="control-group error">
					  <label class="control-label" for="inputError">Input with error</label>
					  <div class="controls">
						<input type="text" id="inputError">
						<span class="help-inline">Please correct the error</span>
					  </div>
					</div>
					<div class="control-group success">
					  <label class="control-label" for="inputSuccess">Input with success</label>
					  <div class="controls">
						<input type="text" id="inputSuccess">
						<span class="help-inline">Woohoo!</span>
					  </div>
					</div>
				  </form>
		<pre class="prettyprint linenums">
		&lt;div class="control-group warning"&gt;
		  &lt;label class="control-label" for="inputWarning"&gt;Input with warning&lt;/label&gt;
		  &lt;div class="controls"&gt;
			&lt;input type="text" id="inputWarning"&gt;
			&lt;span class="help-inline"&gt;Something may have gone wrong&lt;/span&gt;
		  &lt;/div&gt;
		&lt;/div&gt;
		&lt;div class="control-group error"&gt;
		  &lt;label class="control-label" for="inputError"&gt;Input with error&lt;/label&gt;
		  &lt;div class="controls"&gt;
			&lt;input type="text" id="inputError"&gt;
			&lt;span class="help-inline"&gt;Please correct the error&lt;/span&gt;
		  &lt;/div&gt;
		&lt;/div&gt;
		&lt;div class="control-group success"&gt;
		  &lt;label class="control-label" for="inputSuccess"&gt;Input with success&lt;/label&gt;
		  &lt;div class="controls"&gt;
			&lt;input type="text" id="inputSuccess"&gt;
			&lt;span class="help-inline"&gt;Woohoo!&lt;/span&gt;
		  &lt;/div&gt;
		&lt;/div&gt;
		</pre>

				</section>


			<!-- Images
				================================================== -->
				<section id="images">
					<div class="page-header">
					<h1>Images</h1>
					</div>

					<p>Add classes to an <code>&lt;img&gt;</code> element to easily style images in any project. <code>&lt;div class="figure"&gt;&lt;/div&gt;</code> can be swapped out for the <code>&lt;figure&gt;&lt;/figure&gt;</code> element and a element with<code>.caption</code> can be replaced with <code>&lt;figcaption&gt;</code></p>
					<!-- Small Centered Image With Caption -->
				  <h2>Small centered image with caption</h2>
				  <div class="figure small centered">
				  <div class="liner">
					<img src="http://farm4.staticflickr.com/3298/3577042795_4ae17f1a3c_z.jpg" alt="" title="">
					<p class="caption">Giving credit where credit is due</p>
				  </div>
				</div>
	<pre class="prettyprint linenums">
	  &lt;div class="figure small centered"&gt;
	    &lt;div class="liner"&gt;
	      &lt;img src="..." alt="" title=""&gt;
	        &lt;p class="caption"&gt;...&lt;/p&gt;
	        &lt;p&gt;...&lt;/p&gt;
	    &lt;/div&gt;
	  &lt;/div&gt;
	</pre>
				   <!-- Medium Centered Image With Caption -->
				  <h2>Medium centered image with caption</h2>
				  <div class="figure medium centered">
				  <div class="liner">
					<img src="http://farm4.staticflickr.com/3298/3577042795_4ae17f1a3c_z.jpg" alt="" title="">
					<p class="caption">Giving credit where credit is due</p>
				  </div>
				</div>
	<pre class="prettyprint linenums">
	  &lt;div class="figure medium centered"&gt;
	    &lt;div class="liner"&gt;
	      &lt;img src="..." alt="" title=""&gt;
	        &lt;p class="caption"&gt;...&lt;/p&gt;
	        &lt;p&gt;...&lt;/p&gt;
	    &lt;/div&gt;
	  &lt;/div&gt;
	</pre>
				  <!-- Large Centered Image With Caption -->
				  <h2>Large centered image with caption</h2>
				  <div class="figure large centered">
				  <div class="liner">
					<img src="http://farm4.staticflickr.com/3298/3577042795_4ae17f1a3c_z.jpg" alt="" title="">
					<p class="caption">Giving credit where credit is due</p>
				  </div>
				</div>
	<pre class="prettyprint linenums">
	  &lt;div class="figure large centered"&gt;
	    &lt;div class="liner"&gt;
	      &lt;img src="..." alt="" title=""&gt;
	        &lt;p class="caption"&gt;...&lt;/p&gt;
	        &lt;p&gt;...&lt;/p&gt;
	    &lt;/div&gt;
	  &lt;/div&gt;
	</pre>
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
	<pre class="prettyprint linenums">
	  &lt;div class="figure large centered"&gt;
	    &lt;div class="liner"&gt;
	      &lt;img src="..." alt="" title=""&gt;
	      &lt;div&gt;
	        &lt;p class="caption"&gt;...&lt;/p&gt;
	        &lt;p&gt;...&lt;/p&gt;
	      &lt;/div&gt;
	    &lt;/div&gt;
	  &lt;/div&gt;
	</pre>
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
	<pre class="prettyprint linenums">
	  &lt;div class="figure large centered"&gt;
	    &lt;div class="liner"&gt;
	      &lt;img src="..." alt="" title=""&gt;
	      &lt;div&gt;
	        &lt;p class="caption"&gt;...&lt;/p&gt;
	        &lt;p&gt;...&lt;/p&gt;
	      &lt;/div&gt;
	    &lt;/div&gt;
	  &lt;/div&gt;
	</pre>

				  <h2>Large centered image without a caption</h2>
				  <img class="figure centered has-border" src="http://farm4.staticflickr.com/3298/3577042795_4ae17f1a3c_z.jpg" alt="" title="">

	      <p><code>&lt;img src="..." alt="" title="" class="figure centered has-border"&gt;</code></p>


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

	<pre class="prettyprint linenums">
	  &lt;div class="figure left"&gt;
	    &lt;div class="liner"&gt;
	      &lt;img src="..." alt="" title=""&gt;
	      &lt;p class="caption"&gt;...&lt;/p&gt;
	    &lt;/div&gt;
	  &lt;/div&gt;
	</pre>

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

	<pre class="prettyprint linenums">
	  &lt;div class="figure right"&gt;
	    &lt;div class="liner"&gt;
	      &lt;img src="..." alt="" title=""&gt;
	      &lt;p class="caption"&gt;...&lt;/p&gt;
	    &lt;/div&gt;
	  &lt;/div&gt;
	</pre>


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
