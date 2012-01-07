<?php
/**
 * @file
 * parya_galleries.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function parya_galleries_field_default_fields() {
  $fields = array();

  // Exported field: 'node-gallery-body'
  $fields['node-gallery-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'gallery',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'A description of the gallery contents',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-gallery-field_gallery_type'
  $fields['node-gallery-field_gallery_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_gallery_type',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'i18n_taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'gallery_type',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'gallery',
      'default_value' => array(
        0 => array(
          'tid' => '41',
        ),
      ),
      'deleted' => '0',
      'description' => 'The type of gallery you select will determine where it is displayed on the site.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_gallery_type',
      'label' => 'Gallery Type',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-gallery-field_images'
  $fields['node-gallery-field_images'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_images',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'gallery',
      'deleted' => '0',
      'description' => 'Images will be resized automatically for you. The title field will be used for image captions.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'field_slideshow',
          'settings' => array(
            'slideshow_caption' => 'title',
            'slideshow_caption_link' => '',
            'slideshow_carousel_image_style' => '',
            'slideshow_carousel_scroll' => '1',
            'slideshow_carousel_speed' => '500',
            'slideshow_carousel_vertical' => 0,
            'slideshow_carousel_visible' => '3',
            'slideshow_colorbox_image_style' => 'lightbox',
            'slideshow_colorbox_slideshow' => 'manual',
            'slideshow_colorbox_slideshow_speed' => '1200',
            'slideshow_colorbox_speed' => '250',
            'slideshow_colorbox_transition' => 'elastic',
            'slideshow_controls' => 0,
            'slideshow_controls_position' => 'after',
            'slideshow_fx' => 'fade',
            'slideshow_image_style' => 'node',
            'slideshow_link' => 'colorbox',
            'slideshow_order' => '',
            'slideshow_pager' => 'image',
            'slideshow_pager_image_style' => 'sq_thumb_med',
            'slideshow_pager_position' => 'after',
            'slideshow_pause' => 1,
            'slideshow_speed' => '1000',
            'slideshow_timeout' => '4000',
          ),
          'type' => 'slideshow',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'content',
            'image_style' => 'sq_thumb_lg',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_images',
      'label' => 'Images',
      'required' => 1,
      'settings' => array(
        'alt_field' => 1,
        'file_directory' => 'images/galleries',
        'file_extensions' => 'png gif jpg jpeg',
        'imagecrop' => array(
          'block-highlight' => 0,
          'frontpage_slide' => 0,
          'page_slide' => 0,
        ),
        'max_filesize' => '',
        'max_resolution' => '1600x1600',
        'min_resolution' => '640x480',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 'attach',
              'imce' => 'imce',
              'reference' => 0,
              'remote' => 'remote',
            ),
            'source_attach' => array(
              'absolute' => '1',
              'attach_mode' => 'copy',
              'path' => '/Users/andrew/HOME_II/clients_JOBS/Parya.org/Assets/Images_FPO',
            ),
            'source_imce' => array(
              'imce_mode' => '1',
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'insert' => 0,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'colorbox__block-highlight' => 0,
            'colorbox__bw' => 0,
            'colorbox__frontpage_slide' => 0,
            'colorbox__frontpage_slide_bw' => 0,
            'colorbox__large' => 0,
            'colorbox__lightbox' => 0,
            'colorbox__medium' => 0,
            'colorbox__node' => 0,
            'colorbox__node-landscape' => 0,
            'colorbox__node-portrait' => 0,
            'colorbox__page_slide' => 0,
            'colorbox__sq_thumb_lg' => 0,
            'colorbox__sq_thumb_med' => 0,
            'colorbox__sq_thumb_sm' => 0,
            'colorbox__sq_thumb_xsm' => 0,
            'colorbox__square_thumbnail' => 0,
            'colorbox__teaser-list' => 0,
            'colorbox__thumbnail' => 0,
            'image' => 0,
            'image_block-highlight' => 0,
            'image_bw' => 0,
            'image_frontpage_slide' => 0,
            'image_frontpage_slide_bw' => 0,
            'image_large' => 0,
            'image_lightbox' => 0,
            'image_medium' => 0,
            'image_node' => 0,
            'image_node-landscape' => 0,
            'image_node-portrait' => 0,
            'image_page_slide' => 0,
            'image_sq_thumb_lg' => 0,
            'image_sq_thumb_med' => 0,
            'image_sq_thumb_sm' => 0,
            'image_sq_thumb_xsm' => 0,
            'image_square_thumbnail' => 0,
            'image_teaser-list' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'bar',
        ),
        'type' => 'image_image',
        'weight' => '2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A description of the gallery contents');
  t('Description');
  t('Gallery Type');
  t('Images');
  t('Images will be resized automatically for you. The title field will be used for image captions.');
  t('The type of gallery you select will determine where it is displayed on the site.');

  return $fields;
}
