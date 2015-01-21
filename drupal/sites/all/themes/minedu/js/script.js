(function ($) {
  Drupal.behaviors.minedu = {
    attach: function(context, settings) {
      $(document).ready(function() {

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
