( function($) {

	$(document).ready(function() {

  	/*
    $('[rel="tooltip"]').tooltip();
  	$('#home-hero').carousel();
  	$('#home-hero .slide-title').lettering('lines').children('words');
  	*/
  
  	/* Form labels */
  	$('#nesi-mstep-proposal-step-1 .form-text, #nesiLoginModal .form-text').each(function() {
    	$('#nesi-mstep-proposal-step-1 .form-type-textfield label, #nesiLoginModal .form-type-textfield label, #nesiLoginModal .form-type-password label').hide();
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

  	/* Fancy form elements */
  	$('.form-type-radio input').uniform();

  	/* Tooltips */
/*
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
*/

  	/* Move form descriptions to be part of labels */
  	/* TODO: handle this in nese_mstep_proposal module and proposal node module using PHP instead */
  	$('#nesi-mstep-proposal-step-2 .help-block, #nesi-mstep-proposal-step-3 .help-block, #nesi-mstep-proposal-step-4 .help-block').each(function() {
    	$(this).appendTo($(this).parent().prev('label'));
  	});

  	$('#proposal-research-class-node-form .help-block, #proposal-development-class-node-form .help-block').each(function() {
    	$(this).appendTo($(this).parent().prev('label'));
  	});

  	/* Open Support modal when Contact links are clicked */
  	$('a[href="#contact"]').click(function() {
    	$('#feedback_tab_text').click();
    	return false;
  	});

  	/* Make elements be the same height */
  	$.fn.equalHeights = function(minHeight, maxHeight) {
  		tallest = (minHeight) ? minHeight : 0;
  		this.each(function() {
  			if($(this).height() > tallest) {
  				tallest = $(this).height();
  			}
  		});
  		if((maxHeight) && tallest > maxHeight) tallest = maxHeight;
  		return this.each(function() {
  			$(this).height(tallest).css("overflow","auto");
  		});
  	}

    $('.node-proposal-research-class .fieldset-wrapper, .node-proposal-development-class .fieldset-wrapper').equalHeights();

	});

} ) ( jQuery );