<?php
/**
 * @file
 * feature_flexslider.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_flexslider_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-slider-field_slider_description'
  $field_instances['node-slider-field_slider_description'] = array(
    'bundle' => 'slider',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Permite añadir una descripción del contenido.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slider_description',
    'label' => 'Descripción',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-slider-field_slider_image'
  $field_instances['node-slider-field_slider_image'] = array(
    'bundle' => 'slider',
    'deleted' => 0,
    'description' => 'Permite subir archivo de tipo imagen',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slider_image',
    'label' => 'Imagen',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'slider',
      'file_extensions' => 'png jpg jpeg',
      'max_filesize' => '1mb',
      'max_resolution' => '',
      'min_resolution' => '960x320',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-slider-field_slider_subtitle'
  $field_instances['node-slider-field_slider_subtitle'] = array(
    'bundle' => 'slider',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Campo para añadir un subtítulo al slider',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slider_subtitle',
    'label' => 'Subtítulo',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Campo para añadir un subtítulo al slider');
  t('Descripción');
  t('Imagen');
  t('Permite añadir una descripción del contenido.');
  t('Permite subir archivo de tipo imagen');
  t('Subtítulo');

  return $field_instances;
}
