<?php
/**
 * @file
 * dkan_featured_topics.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dkan_featured_topics_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_sync_dkan_topics';
  $strongarm->value = 1;
  $export['taxonomy_menu_sync_dkan_topics'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_dkan_topics';
  $strongarm->value = 'main-menu';
  $export['taxonomy_menu_vocab_menu_dkan_topics'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_parent_dkan_topics';
  $strongarm->value = '464';
  $export['taxonomy_menu_vocab_parent_dkan_topics'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_dkan_topics';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_item_dkan_topics'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_name_dkan_topics';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_name_dkan_topics'] = $strongarm;

  return $export;
}