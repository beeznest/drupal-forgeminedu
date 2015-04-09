<?php  
  /**
 * @author: Arojas
   * @description: tpl generated to rhow region's title.
  **/
?>
<?php if ($content): ?>

  <?php if ($is_admin): ?>
  <h3 class="region-title"><?php print $region; ?></h3>
  <?php endif; ?>
  <div class="<?php print $classes; ?>">
    <?php print $content; ?>
  </div>
<?php endif; ?>
