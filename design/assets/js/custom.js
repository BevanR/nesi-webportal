$(document).ready(function() {
	$('[rel="tooltip"]').tooltip();
	$('#home-hero').carousel();
	$('#home-hero .slide-title').lettering('lines').children('words');
});