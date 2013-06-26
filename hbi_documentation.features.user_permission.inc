<?php
/**
 * @file
 * hbi_documentation.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hbi_documentation_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ebo_documentation content.
  $permissions['create ebo_documentation content'] = array(
    'name' => 'create ebo_documentation content',
    'roles' => array(
      'HBI Worker' => 'HBI Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ebo_documentation content.
  $permissions['delete any ebo_documentation content'] = array(
    'name' => 'delete any ebo_documentation content',
    'roles' => array(
      'HBI Worker' => 'HBI Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ebo_documentation content.
  $permissions['delete own ebo_documentation content'] = array(
    'name' => 'delete own ebo_documentation content',
    'roles' => array(
      'HBI Worker' => 'HBI Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ebo_documentation content.
  $permissions['edit any ebo_documentation content'] = array(
    'name' => 'edit any ebo_documentation content',
    'roles' => array(
      'HBI Worker' => 'HBI Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ebo_documentation content.
  $permissions['edit own ebo_documentation content'] = array(
    'name' => 'edit own ebo_documentation content',
    'roles' => array(
      'HBI Worker' => 'HBI Worker',
    ),
    'module' => 'node',
  );

  return $permissions;
}
