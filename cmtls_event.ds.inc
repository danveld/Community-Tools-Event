<?php

/**
 * @file
 * Bulk export of ds objects generated by Bulk export module.
 */

/**
 * Implementation of hook_ds_field_settings_info()
 */
function cmtls_event_ds_field_settings_info() {
  $ds_fieldsettings = array();

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cmtls_event|cmtls_wall';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cmtls_event';
  $ds_fieldsetting->view_mode = 'cmtls_wall';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $ds_fieldsettings['node|cmtls_event|cmtls_wall'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cmtls_event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cmtls_event';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '40',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $ds_fieldsettings['node|cmtls_event|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cmtls_event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cmtls_event';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $ds_fieldsettings['node|cmtls_event|teaser'] = $ds_fieldsetting;

  return $ds_fieldsettings;
}
/**
 * Implementation of hook_ds_layout_settings_info()
 */
function cmtls_event_ds_layout_settings_info() {
  $ds_layouts = array();

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cmtls_event|cmtls_wall';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cmtls_event';
  $ds_layout->view_mode = 'cmtls_wall';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_cmtls_event_date',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_cmtls_event_date' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $ds_layouts['node|cmtls_event|cmtls_wall'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cmtls_event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cmtls_event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_cmtls_event_date',
        1 => 'body',
        2 => 'comments',
      ),
    ),
    'fields' => array(
      'field_cmtls_event_date' => 'ds_content',
      'body' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
  );
  $ds_layouts['node|cmtls_event|default'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cmtls_event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cmtls_event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_cmtls_event_date',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_cmtls_event_date' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $ds_layouts['node|cmtls_event|teaser'] = $ds_layout;

  return $ds_layouts;
}