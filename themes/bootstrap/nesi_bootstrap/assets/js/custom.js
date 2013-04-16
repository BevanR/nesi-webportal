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

    /* Fancy field labels for login form */
    function initOverLabels () {
      if (!document.getElementById) return;
      var labels, id, field;  // Set focus and blur handlers to hide and show 
      labels = $('#nesiLoginModal').find('label');
      for (var i = 0; i < labels.length; i++) {
          // with another field.
          id = labels[i].htmlFor || labels[i].getAttribute ('for');
          if (!id || !(field = document.getElementById(id))) {
            continue;
          }
          // Change the applied class to hover the label 
          // over the form field.
          labels[i].className = 'overlabel-apply';
          // Hide any fields having an initial value.
          if (field.value !== '') {
            hideLabel(field.getAttribute('id'), true);
          }
          // Set handlers to show and hide labels.
          field.onfocus = function () {
            hideLabel(this.getAttribute('id'), true);
          };
          field.onblur = function () {
            if (this.value === '') {
              hideLabel(this.getAttribute('id'), false);
            }
          };
          // Handle clicks to label elements (for Safari).
          labels[i].onclick = function () {
            var id, field;
            id = this.getAttribute('for');
            if (id && (field = document.getElementById(id))) {
              field.focus();
            }
          };
      }
    };
    
    function hideLabel (field_id, hide) {
      var field_for;
      var labels = document.getElementsByTagName('label');
      for (var i = 0; i < labels.length; i++) {
        field_for = labels[i].htmlFor || labels[i]. getAttribute('for');
        if (field_for == field_id) {
          labels[i].style.textIndent = (hide) ? '-9999em' : '0px';
          return true;
        }
      }
    }
    
    window.onload = function () {
      setTimeout(initOverLabels, 50);
    };

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
    $('.node-proposal-research-class .field-group-fieldset:odd, .node-type-proposal-development-class .field-group-fieldset:odd').addClass('odd');

	});

} ) ( jQuery );