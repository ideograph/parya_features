<?php
/**
 * @file
 * parya_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function parya_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: create news content
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      0 => 'editor',
      1 => 'staff',
      2 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any news content
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      0 => 'staff',
      1 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own news content
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      0 => 'editor',
      1 => 'staff',
      2 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'editor',
      1 => 'staff',
      2 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any news content
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      0 => 'editor',
      1 => 'staff',
      2 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own news content
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      0 => 'editor',
      1 => 'staff',
      2 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'editor',
      1 => 'staff',
      2 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
