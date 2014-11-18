<?php
/**
 * @file
 * easypage_informative_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function easypage_informative_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-informative_page-body'
  $field_instances['node-informative_page-body'] = array(
    'bundle' => 'informative_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Agregar descripción de la <b>página básica.</b>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
      'three_columns' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'two_columns' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Descripción',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Contenido limitado para @limit caracteres, quedan: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-informative_page-field_informative_page_file'
  $field_instances['node-informative_page-field_informative_page_file'] = array(
    'bundle' => 'informative_page',
    'deleted' => 0,
    'description' => 'Agregar archivos que se podrán descargar si es necesario.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'three_columns' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 3,
      ),
      'two_columns' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_informative_page_file',
    'label' => 'Archivo',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'informative_page/file',
      'file_extensions' => 'txt xls xlsx doc docx jpg jpeg png pdf mp3 odt ods odp',
      'max_filesize' => '4MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'maxlength_js_label' => 'Contenido limitado para @limit caracteres, quedan: <strong>@remaining</strong>',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-informative_page-field_informative_page_image'
  $field_instances['node-informative_page-field_informative_page_image'] = array(
    'bundle' => 'informative_page',
    'deleted' => 0,
    'description' => 'Agregar imágenes para la página informativa, de preferencia subir con el siguiente tamaño: <b>Ancho x Alto(720 x 500).</b>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'galleryformatter',
        'settings' => array(
          'link_to_full' => 1,
          'link_to_full_style' => '720x500',
          'linking_method' => 'show_full_link',
          'modal' => 'colorbox',
          'slide_style' => 'galleryformatter_slide',
          'style' => 'Greenarrows',
          'thumb_style' => 'galleryformatter_thumb',
        ),
        'type' => 'galleryformatter_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'three_columns' => array(
        'label' => 'hidden',
        'module' => 'galleryformatter',
        'settings' => array(
          'link_to_full' => 1,
          'link_to_full_style' => '720x500',
          'linking_method' => 'show_full_link',
          'modal' => 'colorbox',
          'slide_style' => 'galleryformatter_slide',
          'style' => 'Greenarrows',
          'thumb_style' => 'galleryformatter_thumb',
        ),
        'type' => 'galleryformatter_default',
        'weight' => 0,
      ),
      'two_columns' => array(
        'label' => 'hidden',
        'module' => 'galleryformatter',
        'settings' => array(
          'link_to_full' => 1,
          'link_to_full_style' => '720x500',
          'linking_method' => 'show_full_link',
          'modal' => 'colorbox',
          'slide_style' => 'galleryformatter_slide',
          'style' => 'Greenarrows',
          'thumb_style' => 'galleryformatter_thumb',
        ),
        'type' => 'galleryformatter_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_informative_page_image',
    'label' => 'Imagen',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'informative_page/image',
      'file_extensions' => 'png jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '800x550',
      'min_resolution' => '700x480',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'maxlength_js_label' => 'Contenido limitado para @limit caracteres, quedan: <strong>@remaining</strong>',
        'preview_image_style' => '180x125',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-informative_page-field_informative_page_video'
  $field_instances['node-informative_page-field_informative_page_video'] = array(
    'bundle' => 'informative_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Agregar video para la página informativa, <b>copiar la url del servidor Youtube o Vimeo y pegar en el campo.</b>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'three_columns' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
        'weight' => 2,
      ),
      'two_columns' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_informative_page_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'description_length' => 128,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(
        'maxlength_js_label' => 'Contenido limitado para @limit caracteres, quedan: <strong>@remaining</strong>',
      ),
      'type' => 'video_embed_field_video',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Agregar archivos que se podrán descargar si es necesario.');
  t('Agregar descripción de la <b>página básica.</b>');
  t('Agregar imágenes para la página informativa, de preferencia subir con el siguiente tamaño: <b>Ancho x Alto(720 x 500).</b>');
  t('Agregar video para la página informativa, <b>copiar la url del servidor Youtube o Vimeo y pegar en el campo.</b>');
  t('Archivo');
  t('Descripción');
  t('Imagen');
  t('Video');

  return $field_instances;
}
