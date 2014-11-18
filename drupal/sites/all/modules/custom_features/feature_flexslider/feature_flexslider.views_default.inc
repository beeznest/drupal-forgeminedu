<?php
/**
 * @file
 * feature_flexslider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_flexslider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'flexslider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FlexSlider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FlexSlider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slider' => 'slider',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'flexslider_horizontal_fade';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_slider_image']['id'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['table'] = 'field_data_field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['field'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['label'] = '';
  $handler->display->display_options['fields']['field_slider_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slider_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_slider_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slider_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slider_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slider_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slider_image']['settings'] = array(
    'image_style' => 'flexslider_960x320',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Subtítulo */
  $handler->display->display_options['fields']['field_slider_subtitle']['id'] = 'field_slider_subtitle';
  $handler->display->display_options['fields']['field_slider_subtitle']['table'] = 'field_data_field_slider_subtitle';
  $handler->display->display_options['fields']['field_slider_subtitle']['field'] = 'field_slider_subtitle';
  $handler->display->display_options['fields']['field_slider_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_slider_subtitle']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_slider_subtitle']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_slider_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_subtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slider_subtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slider_subtitle']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slider_subtitle']['type'] = 'text_plain';
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_slider_description']['id'] = 'field_slider_description';
  $handler->display->display_options['fields']['field_slider_description']['table'] = 'field_data_field_slider_description';
  $handler->display->display_options['fields']['field_slider_description']['field'] = 'field_slider_description';
  $handler->display->display_options['fields']['field_slider_description']['label'] = '';
  $handler->display->display_options['fields']['field_slider_description']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_slider_description']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_slider_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slider_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slider_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slider_description']['type'] = 'text_plain';
  $export['flexslider'] = $view;

  return $export;
}
