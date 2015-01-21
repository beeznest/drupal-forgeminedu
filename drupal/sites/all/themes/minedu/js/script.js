(function ($) {
  Drupal.behaviors.minedu = {
    attach: function(context, settings) {
      $(document).ready(function() {

        // Accordion effect to blocks in sidebar 
        $('.user-button-option').unbind('click');
        $('.user-button-option').click(function () {
         /* $(this).addClass('accordion-active');
          if (!(false == $(this).next().is(':visible'))) {
            $(this).removeClass('accordion-active');
          }
          $(this).next().slideToggle(300);*/
        });
      });
    }  
  }
})(jQuery);
