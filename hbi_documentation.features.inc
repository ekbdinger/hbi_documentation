<?php
/**
 * @file
 * hbi_documentation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hbi_documentation_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hbi_documentation_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hbi_documentation_node_info() {
  $items = array(
    'ebo_documentation' => array(
      'name' => t('Documentation'),
      'base' => 'node_content',
      'description' => t('Documentation (PDFs) for the eBO/HBI Department'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
