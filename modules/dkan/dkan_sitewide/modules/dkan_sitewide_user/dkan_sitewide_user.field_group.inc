<?php
/**
 * @file
 * dkan_sitewide_user.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dkan_sitewide_user_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_about|user|user|default';
  $field_group->group_name = 'group_user_about';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_tabs';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '3',
    'children' => array(
      0 => 'field_about',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_user_about|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_datasets|user|user|default';
  $field_group->group_name = 'group_user_datasets';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_tabs';
  $field_group->data = array(
    'label' => 'Datasets',
    'weight' => '1',
    'children' => array(
      0 => 'user_profile_search_entity_view_1',
      1 => 'user_profile_search_entity_view_1_form',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_user_datasets|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_group|user|user|default';
  $field_group->group_name = 'group_user_group';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_tabs';
  $field_group->data = array(
    'label' => 'Groups',
    'weight' => '2',
    'children' => array(
      0 => 'og_user_node',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Groups',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_user_group|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_tabs|user|user|default';
  $field_group->group_name = 'group_user_tabs';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile',
    'weight' => '0',
    'children' => array(
      0 => 'group_user_datasets',
      1 => 'group_user_group',
      2 => 'group_user_about',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_user_tabs|user|user|default'] = $field_group;

  return $export;
}