<?php
/**
 * @file
 * hbi_documentation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hbi_documentation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ebo_documentation_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'eBO Documentation List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'eBO Documentation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ebo_categories' => 'field_ebo_categories',
    'field_ebo_users' => 'field_ebo_users',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ebo_categories' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ebo_users' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: eBO Categories */
  $handler->display->display_options['fields']['field_ebo_categories']['id'] = 'field_ebo_categories';
  $handler->display->display_options['fields']['field_ebo_categories']['table'] = 'field_data_field_ebo_categories';
  $handler->display->display_options['fields']['field_ebo_categories']['field'] = 'field_ebo_categories';
  $handler->display->display_options['fields']['field_ebo_categories']['label'] = 'Category';
  $handler->display->display_options['fields']['field_ebo_categories']['delta_limit'] = 'all';
  /* Field: Content: eBO Users */
  $handler->display->display_options['fields']['field_ebo_users']['id'] = 'field_ebo_users';
  $handler->display->display_options['fields']['field_ebo_users']['table'] = 'field_data_field_ebo_users';
  $handler->display->display_options['fields']['field_ebo_users']['field'] = 'field_ebo_users';
  $handler->display->display_options['fields']['field_ebo_users']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ebo_users']['delta_offset'] = '0';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Updated';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ebo_documentation' => 'ebo_documentation',
  );
  /* Filter criterion: Content: eBO Categories (field_ebo_categories) */
  $handler->display->display_options['filters']['field_ebo_categories_tid']['id'] = 'field_ebo_categories_tid';
  $handler->display->display_options['filters']['field_ebo_categories_tid']['table'] = 'field_data_field_ebo_categories';
  $handler->display->display_options['filters']['field_ebo_categories_tid']['field'] = 'field_ebo_categories_tid';
  $handler->display->display_options['filters']['field_ebo_categories_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ebo_categories_tid']['expose']['operator_id'] = 'field_ebo_categories_tid_op';
  $handler->display->display_options['filters']['field_ebo_categories_tid']['expose']['label'] = 'eBO Categories';
  $handler->display->display_options['filters']['field_ebo_categories_tid']['expose']['operator'] = 'field_ebo_categories_tid_op';
  $handler->display->display_options['filters']['field_ebo_categories_tid']['expose']['identifier'] = 'field_ebo_categories_tid';
  $handler->display->display_options['filters']['field_ebo_categories_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_ebo_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ebo_categories_tid']['vocabulary'] = 'ebo_categories';
  /* Filter criterion: Content: eBO Users (field_ebo_users) */
  $handler->display->display_options['filters']['field_ebo_users_tid']['id'] = 'field_ebo_users_tid';
  $handler->display->display_options['filters']['field_ebo_users_tid']['table'] = 'field_data_field_ebo_users';
  $handler->display->display_options['filters']['field_ebo_users_tid']['field'] = 'field_ebo_users_tid';
  $handler->display->display_options['filters']['field_ebo_users_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ebo_users_tid']['expose']['operator_id'] = 'field_ebo_users_tid_op';
  $handler->display->display_options['filters']['field_ebo_users_tid']['expose']['label'] = 'eBO Users';
  $handler->display->display_options['filters']['field_ebo_users_tid']['expose']['operator'] = 'field_ebo_users_tid_op';
  $handler->display->display_options['filters']['field_ebo_users_tid']['expose']['identifier'] = 'field_ebo_users_tid';
  $handler->display->display_options['filters']['field_ebo_users_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_ebo_users_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ebo_users_tid']['vocabulary'] = 'ebo_users';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ebo-doc-list';
  $handler->display->display_options['menu']['title'] = 'Video List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['ebo_documentation_list'] = $view;

  return $export;
}
