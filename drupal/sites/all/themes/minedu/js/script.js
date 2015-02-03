(function ($) {
  Drupal.behaviors.minedu = {
    attach: function(context, settings) {
      $(document).ready(function() {

        //Add Class to counter link
        $('.main-content .publish .file a:nth-child(3)').addClass('counter-link');
        $('.node-type-resource-document .file a:nth-child(3)').addClass('counter-link');
        $('.main-content .resource-document .file a:nth-child(3)').addClass('counter-link');

        $( ".main-content .file a" ).each(function( index ) {
          if (!$('body').hasClass('node-type-publish')) {
            if (!$('body').hasClass('node-type-resource-document')) {
              if (!$(this).hasClass('counter-link')) {
                $(this).attr( "href", "#");
              };
            };
          };
        });

        // Accordion effect to blocks in sidebar 
        $('.user-button-option').unbind('click');
        $('.user-button-option').click(function () {
          $(this).addClass('active');
          if ((false == $('.user-option').is(':visible'))) {
            $(this).removeClass('active');
          }
          $('.user-option').slideToggle(250);
        });

        //
        $('.cb-inner-menu a.active').after('<span></span>');
      });
    }  
  }
})(jQuery);
