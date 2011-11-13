<?php
/**
 * @file
 * sszhai.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sszhai_user_default_permissions() {
  $permissions = array();

  // Exported permission: create annoucement content
  $permissions['create annoucement content'] = array(
    'name' => 'create annoucement content',
    'roles' => array(),
  );

  // Exported permission: create prize_activity content
  $permissions['create prize_activity content'] = array(
    'name' => 'create prize_activity content',
    'roles' => array(),
  );

  // Exported permission: create software content
  $permissions['create software content'] = array(
    'name' => 'create software content',
    'roles' => array(),
  );

  // Exported permission: create special_activity content
  $permissions['create special_activity content'] = array(
    'name' => 'create special_activity content',
    'roles' => array(),
  );

  // Exported permission: delete any annoucement content
  $permissions['delete any annoucement content'] = array(
    'name' => 'delete any annoucement content',
    'roles' => array(),
  );

  // Exported permission: delete any prize_activity content
  $permissions['delete any prize_activity content'] = array(
    'name' => 'delete any prize_activity content',
    'roles' => array(),
  );

  // Exported permission: delete any software content
  $permissions['delete any software content'] = array(
    'name' => 'delete any software content',
    'roles' => array(),
  );

  // Exported permission: delete any special_activity content
  $permissions['delete any special_activity content'] = array(
    'name' => 'delete any special_activity content',
    'roles' => array(),
  );

  // Exported permission: delete own annoucement content
  $permissions['delete own annoucement content'] = array(
    'name' => 'delete own annoucement content',
    'roles' => array(),
  );

  // Exported permission: delete own prize_activity content
  $permissions['delete own prize_activity content'] = array(
    'name' => 'delete own prize_activity content',
    'roles' => array(),
  );

  // Exported permission: delete own software content
  $permissions['delete own software content'] = array(
    'name' => 'delete own software content',
    'roles' => array(),
  );

  // Exported permission: delete own special_activity content
  $permissions['delete own special_activity content'] = array(
    'name' => 'delete own special_activity content',
    'roles' => array(),
  );

  // Exported permission: edit any annoucement content
  $permissions['edit any annoucement content'] = array(
    'name' => 'edit any annoucement content',
    'roles' => array(),
  );

  // Exported permission: edit any prize_activity content
  $permissions['edit any prize_activity content'] = array(
    'name' => 'edit any prize_activity content',
    'roles' => array(),
  );

  // Exported permission: edit any software content
  $permissions['edit any software content'] = array(
    'name' => 'edit any software content',
    'roles' => array(),
  );

  // Exported permission: edit any special_activity content
  $permissions['edit any special_activity content'] = array(
    'name' => 'edit any special_activity content',
    'roles' => array(),
  );

  // Exported permission: edit own annoucement content
  $permissions['edit own annoucement content'] = array(
    'name' => 'edit own annoucement content',
    'roles' => array(),
  );

  // Exported permission: edit own prize_activity content
  $permissions['edit own prize_activity content'] = array(
    'name' => 'edit own prize_activity content',
    'roles' => array(),
  );

  // Exported permission: edit own software content
  $permissions['edit own software content'] = array(
    'name' => 'edit own software content',
    'roles' => array(),
  );

  // Exported permission: edit own special_activity content
  $permissions['edit own special_activity content'] = array(
    'name' => 'edit own special_activity content',
    'roles' => array(),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  return $permissions;
}
