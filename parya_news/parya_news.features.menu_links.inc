<?php
/**
 * @file
 * parya_news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function parya_news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:news
  $menu_links['main-menu:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:news/parya-weekly-news
  $menu_links['main-menu:news/parya-weekly-news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news/parya-weekly-news',
    'router_path' => 'news/parya-weekly-news',
    'link_title' => 'Parya Weekly News',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'news',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('Parya Weekly News');


  return $menu_links;
}
