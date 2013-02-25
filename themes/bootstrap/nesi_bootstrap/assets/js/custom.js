( function($) {

	$(document).ready(function() {

  	/*
    $('[rel="tooltip"]').tooltip();
  	$('#home-hero').carousel();
  	$('#home-hero .slide-title').lettering('lines').children('words');
  	*/
  
  	/* Forms */
  	$('#nesi-mstep-proposal-step-1 .form-text').each(function() {
    	$('#nesi-mstep-proposal-step-1 .form-type-textfield label').hide();
    	$('.form-required').remove();
    	var id = $(this).attr('id');
    	var label = $("label[for=" + id +"]").text();
    	$(this).val(label);
    	$(this).focus(function() {
      	if ( $(this).val() == label ) {
        	$(this).val('');
      	}
    	});
    	$(this).blur(function() {
      	if ( $(this).val() == '' ) {
        	$(this).val(label);
      	}
    	});
  	});

	});

} ) ( jQuery );