<?php
/**
 * @file
 * parya_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function parya_news_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multimedia|node|news|default';
  $field_group->group_name = 'group_multimedia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Multii-Media',
    'weight' => '4',
    'children' => array(
      0 => 'field_reference_video',
      1 => 'field_reference_audio',
      2 => 'field_reference_gallery',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related Multii-Media',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_multimedia|node|news|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multimedia|node|news|form';
  $field_group->group_name = 'group_multimedia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Multii-Media',
    'weight' => '9',
    'children' => array(
      0 => 'field_reference_video',
      1 => 'field_reference_audio',
      2 => 'field_reference_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_multimedia|node|news|form'] = $field_group;

  return $export;
}
