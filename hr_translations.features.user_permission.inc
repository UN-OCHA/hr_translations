<?php
/**
 * @file
 * hr_translations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_translations_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'provide translation services'.
  $permissions['provide translation services'] = array(
    'name' => 'provide translation services',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'translator' => 'translator',
    ),
    'module' => 'tmgmt_local',
  );

  return $permissions;
}
