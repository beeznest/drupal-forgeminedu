(function ($) {
  Drupal.behaviors.minedu = {
    attach: function(context, settings) {
      $(document).ready(function() {

        //Add Class to counter link
        $('.publish .file a:last-of-type').addClass('counter-link');
        $('.resource-document .file a:last-of-type').addClass('counter-link');

        // Accordion effect to blocks in sidebar 
        $('.user-button-option').unbind('click');
        $('.user-button-option').click(function () {
          $(this).addClass('active');
          if ((false == $('.user-option').is(':visible'))) {
            $(this).removeClass('active');
          }
          $('.user-option').slideToggle(250);
        });
      });
    }  
  }
})(jQuery);
