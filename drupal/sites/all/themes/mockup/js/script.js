(function ($) {
  Drupal.behaviors.mockup = { 
    attach: function(context, settings) {
      $(document).ready(function() {
        //Add Class to table
        $('table').addClass('table');

        // Accordion effect to blocks in sidebar 
        $('.region-title').unbind('click');
        $('.region-title').click(function () {
          $(this).removeClass('active');

          if (!(false == $(this).next().is(':visible'))) {
            $(this).addClass('active');
          }   
          $(this).next().slideToggle(300);
        });

        //Relationship links
        $('.view-relationship-links-page-views .views-row:not(:has(img))').addClass('text-block');
        var height_array = new Array();
        $(".main-content .jheight .views-row").each(function(index) {
          height_array[index] = $(this).height();
        }); 
        var max_height =  Math.max.apply(null, height_array); 
        $(".main-content .jheight .views-row").height(max_height);
      });
    }
  }
})(jQuery);  
