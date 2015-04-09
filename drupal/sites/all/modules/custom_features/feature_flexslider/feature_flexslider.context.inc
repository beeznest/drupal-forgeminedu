<?php
/**
 * @file
 * feature_flexslider.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_flexslider_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = 'Context para el home';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-flexslider-block' => array(
          'module' => 'views',
          'delta' => 'flexslider-block',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context para el home');
  $export['home'] = $context;

  return $export;
}
