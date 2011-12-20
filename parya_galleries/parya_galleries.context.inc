<?php
/**
 * @file
 * parya_galleries.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function parya_galleries_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'galleries';
  $context->description = 'when viewing the gallery page';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'galleries' => 'galleries',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'news',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('when viewing the gallery page');
  $export['galleries'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'gallery';
  $context->description = 'when viewing an individual gallery';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'gallery' => 'gallery',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('when viewing an individual gallery');
  $export['gallery'] = $context;

  return $export;
}
