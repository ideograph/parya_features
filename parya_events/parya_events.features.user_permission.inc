<?php
/**
 * @file
 * parya_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function parya_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: create event content
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      0 => 'editor',
      1 => 'staff',
      2 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any event content
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      0 => 'staff',
      1 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own event content
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      0 => 'editor',
      1 => 'staff',
      2 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 2
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'editor',
      1 => 'staff',
      2 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 4
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(
      0 => 'editor',
      1 => 'staff',
      2 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any event content
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      0 => 'editor',
      1 => 'staff',
      2 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own event content
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      0 => 'editor',
      1 => 'staff',
      2 => 'super admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 2
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'editor',
      1 => 'staff',
      2 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 4
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(
      0 => 'editor',
      1 => 'staff',
      2 => 'super admin',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
