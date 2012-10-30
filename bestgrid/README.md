# Instructions for BeSTGRID header changes

## Bestgrid.org

1. Copy all styles from `style.css` to `/sites/all/themes/bestgrid/style.css`
2. Add this code block between the `<div id="header"> </div>`
	<div id="logo-floater">
		<h1>
			<a href="./index.html" title="">
				<img src="./BeSTGRID DataFabric_files/nesi_logo_small.png" alt="" id="logo-nesi">
				<img src="./BeSTGRID DataFabric_files/bestgrid_logo.png" alt="" id="logo">
			</a>
		</h1>
	</div>
3. Add `nesi_logo_small.png` and `bestgrid_logo.png` to the `/images/` directory


## df.bestgrid.org

1. Copy all styles from bg_style.css to `/bg_style.css`
2. Replace this code from the template
	<table width="100%">
		<tbody><tr><th align="LEFT"><img id="logo" src="/images/lg_BeSTGRID-DataFabric.gif" alt="BeSTGRID logo"></th></tr></tbody>
	</table>
With this:
	<div id="header">
		<div id="logo-floater">
			<h1>
				<a href="./index.html" title="">
					<img src="./BeSTGRID DataFabric_files/nesi_logo_small.png" alt="" id="logo-nesi">
					<img src="./BeSTGRID DataFabric_files/bestgrid_logo.png" alt="" id="logo">
				</a>
			</h1>
		</div>
	</div>
3. Add `nesi_logo_small.png` and `bestgrid_logo.png` to the `/images/` directory
