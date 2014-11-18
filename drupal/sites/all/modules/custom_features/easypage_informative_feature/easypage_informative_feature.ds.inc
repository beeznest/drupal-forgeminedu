<?php
/**
 * @file
 * easypage_informative_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function easypage_informative_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|informative_page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'informative_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|informative_page|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function easypage_informative_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|informative_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'informative_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_informative_page_image',
        1 => 'field_informative_page_video',
      ),
      'right' => array(
        2 => 'body',
        3 => 'field_informative_page_file',
        4 => 'links',
      ),
    ),
    'fields' => array(
      'field_informative_page_image' => 'left',
      'field_informative_page_video' => 'left',
      'body' => 'right',
      'field_informative_page_file' => 'right',
      'links' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|informative_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|informative_page|three_columns';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'informative_page';
  $ds_layout->view_mode = 'three_columns';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_informative_page_image',
      ),
      'header' => array(
        1 => 'body',
      ),
      'middle' => array(
        2 => 'field_informative_page_video',
      ),
      'right' => array(
        3 => 'field_informative_page_file',
      ),
    ),
    'fields' => array(
      'field_informative_page_image' => 'left',
      'body' => 'header',
      'field_informative_page_video' => 'middle',
      'field_informative_page_file' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'left' => array(
        'col-md-4' => 'col-md-4',
      ),
      'middle' => array(
        'col-md-4' => 'col-md-4',
      ),
      'right' => array(
        'col-md-4' => 'col-md-4',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|informative_page|three_columns'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|informative_page|two_columns';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'informative_page';
  $ds_layout->view_mode = 'two_columns';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'body',
      ),
      'left' => array(
        1 => 'field_informative_page_image',
      ),
    ),
    'fields' => array(
      'body' => 'right',
      'field_informative_page_image' => 'left',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'header' => array(
        'col-md-12' => 'col-md-12',
      ),
      'left' => array(
        'col-md-6' => 'col-md-6',
      ),
      'right' => array(
        'col-md-6' => 'col-md-6',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|informative_page|two_columns'] = $ds_layout;

  return $export;
}
