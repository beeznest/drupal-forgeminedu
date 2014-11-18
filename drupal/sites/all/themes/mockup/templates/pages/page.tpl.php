<?php
/**
 * @author: Arojas
 * @description: Modified elements to html5 and add conditional
 **/
?>

<?php if ($page['header_top']): ?>
  <div class="header-top">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
        <?php print render($page['header_top']); ?>
        </div>
      </div>
    </div>
  </div>
<?php endif; ?>

  <div class="header">
    <div class="container">
      <div class="row">
        <div class="col-md-3">
          <?php if ($logo): ?>
            <?php print l('<img src="' . $logo . '" alt="' . $site_name . '" />', '', array('attributes' => array('title' => $site_name, 'class' => 'logo' ), 'html' => TRUE)); ?>
            <h1>
              <?php 
              if (!$is_front) :
                print l($site_name . ' <span>' . $title . '</span>', '', array('attributes' => array('title' => $site_name , 'class' => 'main-name'), 'html'=> TRUE));
              else :
                print l($site_name, '', array('attributes' => array('title' => $site_name , 'class' => 'main-name'), 'html'=> TRUE));
              endif; 
              ?>
            </h1>
          <?php endif; ?>
        </div>
        <?php if ($page['header']): ?>
        <div class="col-md-9">
          <?php print render($page['header']); ?>
        </div>
      <?php endif; ?>
      </div>  
    </div>
  </div>

<?php if ($page['header_bottom']): ?>
  <div class="header-bottom">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <?php print render($page['header_bottom']); ?>
        </div>
      </div>  
    </div>
  </div>
<?php endif; ?>

<?php if ($page['highlighted']): ?>
  <div class="highlighted">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <?php print render($page['highlighted']); ?>
        </div>
      </div>
    </div>
  </div>
<?php endif; ?>

<?php if ($page['before_content']): ?>
  <div class="before-content">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <?php print render($page['before_content']); ?>
        </div>
       </div>
    </div>
  </div>
<?php endif; ?>

<?php if ($page['content_top']): ?>
  <div class="content-top">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <?php print render($page['content_top']); ?>
        </div>
      </div>
    </div>
  </div>
<?php endif; ?>

<div class="main-content">
  <div class="container">
    <div class="row">
      <?php if ($page['sidebar_left']): ?>
      <div class="sidebar col-md-3">
        <?php print render($page['sidebar_left']); ?>
      </div>
      <?php endif; ?>

      <?php if ($page['content']): ?>
        <?php
          if ($page['sidebar_left'] && $page['sidebar_right']) {
            print "<div class='col-md-6'>";
          } elseif ($page['sidebar_left'] || $page['sidebar_right']) {
            print "<div class='col-md-9'>";
          } else {
            print "<div class='col-md-12'>";
          }
        ?>

        <?php if ($messages): ?>
          <div class="console clearfix">
            <?php print $messages; ?>
          </div>
        <?php endif; ?>
            
        <?php if ($tabs): ?>
          <?php print render($tabs); ?>
        <?php endif; ?>

          <h2 class="main-title"><?php print $title; ?></h2>
          <?php print render($page['content']); ?>
        </div>
      <?php endif; ?>

      <?php if ($page['sidebar_right']): ?>
      <div class="sidebar col-md-3">
        <?php print render($page['sidebar_right']); ?>
      </div>
      <?php endif; ?>
    </div>
  </div>
</div><!-- /.main-content -->

<?php if ($page['content_bottom']): ?>
  <div class="content-bottom">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <?php print render($page['content_bottom']); ?>
        </div>
      </div>
    </div>
  </div>
<?php endif; ?>

<?php if ($page['footer_top']): ?>
  <div class="footer-top">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <?php print render($page['footer_top']); ?>
        </div>
      </div>
    </div>
  </div>
<?php endif; ?>

<?php if ($page['footer']): ?>
  <div class="footer">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <?php print render($page['footer']); ?>
        </div>
      </div>
    </div>
  </div>
<?php endif; ?>

<?php if ($page['footer_bottom']): ?>
  <div class="footer-bottom">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
    <?php print render($page['footer_bottom']); ?>
        </div>
      </div>
    </div>
  </div>
<?php endif; ?>
