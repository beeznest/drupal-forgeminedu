<?php
/**
 * @file
 * Contains theme override functions and preprocess functions for the MINEDU theme.
 */

/**
 * Changes the default meta content-type tag to the shorter HTML5 version
 */
/**
 * Uses RDFa attributes if the RDF module is enabled
 */
function minedu_preprocess_html(&$vars) {
  // Ensure that the $vars['rdf'] variable is an object.
  if (!isset($vars['rdf']) || !is_object($vars['rdf'])) {
    $vars['rdf'] = new StdClass();
  }

  if (module_exists('rdf')) {
    $vars['doctype'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD HTML+RDFa 1.1//EN">' . "\n";
    $vars['rdf']->version = 'version="HTML+RDFa 1.1"';
    $vars['rdf']->namespaces = $vars['rdf_namespaces'];
    $vars['rdf']->profile = ' profile="' . $vars['grddl_profile'] . '"';
  } else {
    $vars['doctype'] = '<!DOCTYPE html>' . "\n";
    $vars['rdf']->version = '';
    $vars['rdf']->namespaces = '';
    $vars['rdf']->profile = '';
  }
      drupal_add_css(path_to_theme() . '/css/ie-lte-8.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
}

function minedu_media_formatter_large_icon($variables) {
  $file = $variables['file'];
  $icon_dir = drupal_get_path('theme', 'minedu') . '/img/resource';
  $icon_url = file_icon_url($file, $icon_dir);
  $mime = check_plain($file->filemime);
  /*$variables['path'] = $icon_url;
  // theme_image() requires the 'alt' attribute passed as its own variable.
  if (!isset($variables['alt']) && isset($variables['attributes']['alt'])) {
    $variables['alt'] = $variables['attributes']['alt'];
  }
  return theme('image', $variables);*/

  return '<img alt="" class="file-icon" src="'. $icon_url .'" title="'. $mime .'"/>';
}
