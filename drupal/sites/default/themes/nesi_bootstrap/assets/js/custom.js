/*jslint white: true, browser: true, todo: true */
/*global jQuery, Drupal */
(function($) {
  "use strict";
  $(document).ready(function() {
    var hideLabel, initOverLabels, onFieldBlur, onFieldFocus, onLabelClick;

    /* Fancy field labels for login form. */
    initOverLabels = function() {
      var i, labels, id, field;
      if (!document.getElementById) {
        return;
      }

      // Set focus and blur handlers to hide and show ...
      labels = $('#nesiLoginModal .control-group').find('label');
      for (i = 0; i < labels.length; i += 1) {
        //if (id && field) {
          // ... with another field.
          id = labels[i].htmlFor || labels[i].getAttribute('for');
          field = document.getElementById(id);
          // Change the applied class to hover the label over the form field.
          labels[i].className = 'overlabel-apply';
          // Hide any fields having an initial value.
          if (field.value !== '') {
            hideLabel(field.getAttribute('id'), true);
          }
          // Set handlers to show and hide labels.
          field.onfocus = onFieldFocus;
          field.onblur = onFieldBlur;
          // Handle clicks to label elements (for Safari).
          labels[i].onclick = onLabelClick;
       // }
      }
    };

    // Handler to show and hide labels.
    onFieldFocus = function() {
      hideLabel(this.getAttribute('id'), true);
    };
    onFieldBlur = function() {
      if (this.value === '') {
        hideLabel(this.getAttribute('id'), false);
      }
    };

    // Handle clicks to label elements (for Safari).
    onLabelClick = function() {
      var id, field;
      id = this.getAttribute('for');
      field = document.getElementById(id);
      if (id && field) {
        field.focus();
      }
    };

    hideLabel = function(field_id, hide) {
      var labels, field_for, i;
      labels = document.getElementsByTagName('label');
      for (i = 0; i < labels.length; i += 1) {
        field_for = labels[i].htmlFor || labels[i].getAttribute('for');
        if (field_for === field_id) {
          labels[i].style.textIndent = (hide) ? '-9999em' : '0px';
          return true;
        }
      }
    };

    window.onload = function() {
      setTimeout(initOverLabels, 50);
    };

    /* Move form descriptions to be part of labels. */
    /* @todo Handle this in nese_mstep_proposal module and proposal node module using PHP instead. */
    $('#nesi-mstep-proposal-step-2 .help-block, #nesi-mstep-proposal-step-3 .help-block, #nesi-mstep-proposal-step-4 .help-block').each(function() {
      $(this).appendTo($(this).parent().prev('label'));
    });

    $('#proposal-research-class-node-form .help-block, #proposal-development-class-node-form .help-block').each(function() {
      $(this).appendTo($(this).parent().prev('label'));
    });

    /* Open Support modal when Contact links are clicked. */
    $('a[href="#contact"]').click(function() {
      $('#feedback_tab_text').click();
      return false;
    });

    /* Make elements be the same height. */
    $.fn.equalHeights = function(minHeight, maxHeight) {
      var tallest = minHeight || 0;
      this.each(function() {
        if ($(this).height() > tallest) {
          tallest = $(this).height();
        }
      });
      if ((maxHeight) && tallest > maxHeight) {
        tallest = maxHeight;
      }
      return this.each(function() {
        $(this).height(tallest).css("overflow", "auto");
      });
    };

    $('.node-proposal-research-class .fieldset-wrapper, .node-proposal-development-class .fieldset-wrapper').equalHeights();
    $('.node-proposal-research-class .field-group-fieldset:odd, .node-type-proposal-development-class .field-group-fieldset:odd').addClass('odd');
  });

  /* Init Datepicker on page load rather than first focus() event. */
  Drupal.behaviors.date_popup = {
    attach: function(context) {
      var id, $this;
      for (id in Drupal.settings.datePopup) {
        if (Drupal.settings.datePopup.hasOwnProperty(id)) {
          $this = $('#' + id, context);
          if (!$this.hasClass('date-popup-init')) {
            $this.datepicker(Drupal.settings.datePopup[id].settings).addClass('date-popup-init');
          }
        }
      }
    }
  };
} (jQuery));

// Opens the login overlay if the user is not logged in.
// @todo Refactor rest of this file to use Drupal JS API correctly, as below.
Drupal.behaviors.nesiLoginModal = {
  attach: function (context) {
    "use strict";
    if (Drupal.settings.nesiLoginModal && Drupal.settings.nesiLoginModal.open) {
      jQuery('#nesi-login-modal-button', context).click();
    }
  }
};
