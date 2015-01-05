<?php
/**
 * @author: arojas
 * @description: modified elements to html5 and add conditional
 **/
?>
<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>" <?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>

  <?php print $head; ?>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  
  <!--[if lt ie 9]> 
    <script type="text/javascript" src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->

</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>

  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('skip to main content'); ?></a>

  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>

</body>
</html>
