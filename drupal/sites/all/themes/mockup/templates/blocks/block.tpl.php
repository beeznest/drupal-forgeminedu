<?php  
  /**
 * @author: Arojas
   * @description: tpl generated to change tag <h2> for <h3>.
  **/
?>
<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?> clearfix" <?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if ($block->subject): ?>
    <h3<?php print $title_attributes; ?>><?php print $block->subject ?></h3>
  <?php endif;?>
  <?php print render($title_suffix); ?>
  <div class="content"<?php print $content_attributes; ?>>
    <?php print $content ?>
  </div>
</div>
