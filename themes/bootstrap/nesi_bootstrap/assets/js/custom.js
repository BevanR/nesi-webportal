( function($) {

	$(document).ready(function() {

  	/*
    $('[rel="tooltip"]').tooltip();
  	$('#home-hero').carousel();
  	$('#home-hero .slide-title').lettering('lines').children('words');
  	*/
  
  	/* Form labels */
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

  	/* Tooltips */
  	$('.ws-tooltip').each(function() {
    	var text = $(this).attr('title');
    	$(this).hover(
        function() {
      	  $(this).append('<span class="ws-tooltip-active">' + text + '</span>');
    	  },
    	  function() {
      	  $(this).find('.ws-tooltip-active').remove();
    	  }
    	);
  	});

  	/* Move form descriptions to be part of labels */
  	/* TODO: handle this in nese_mstep_proposal module instead? */
  	$('#nesi-mstep-proposal-step-2 .help-block').each(function() {
    	$(this).appendTo($(this).parent().prev('label'));
  	});

	});

} ) ( jQuery );