<?php
/**
 * @file
 * easypage_informative_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function easypage_informative_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function easypage_informative_feature_node_info() {
  $items = array(
    'informative_page' => array(
      'name' => t('Página informativa'),
      'base' => 'node_content',
      'description' => t('Agregar página informativa con imagen, video, archivo y descripción. Las imágenes se verán como galería.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
