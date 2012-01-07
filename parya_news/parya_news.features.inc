<?php
/**
 * @file
 * parya_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function parya_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function parya_news_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function parya_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News Article'),
      'base' => 'node_content',
      'description' => t('News Articles appear in listings across the site and are controlled by the way you categorize them.
News can also be set as "featured" to appear on the homepage, or "sticky" to be displayed at the top of lists which are otherwise sorted by date.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
