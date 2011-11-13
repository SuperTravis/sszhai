<?php
/**
 * @file
 * sszhai.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sszhai_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sszhai_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function sszhai_node_info() {
  $items = array(
    'annoucement' => array(
      'name' => t('Annoucement'),
      'base' => 'node_content',
      'description' => t('Use annoucement for the latest new about website, software,etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'prize_activity' => array(
      'name' => t('Prize activity'),
      'base' => 'node_content',
      'description' => t('use "prize activtity" to show information of activities that are with awards.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'software' => array(
      'name' => t('Software'),
      'base' => 'node_content',
      'description' => t('Use "software" to publish the software information'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'special_activity' => array(
      'name' => t('Special activity'),
      'base' => 'node_content',
      'description' => t('Use "special activity" show the acitivity information which is provided by business'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
