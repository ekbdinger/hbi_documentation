<?php
/**
 * @file
 * hbi_documentation.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hbi_documentation_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ebo_documentation-field_ebo_categories'
  $field_instances['node-ebo_documentation-field_ebo_categories'] = array(
    'bundle' => 'ebo_documentation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Currently only can select one option here. Let me know if this needs to be a multi select field',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ebo_categories',
    'label' => 'eBO Categories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-ebo_documentation-field_ebo_doc_description'
  $field_instances['node-ebo_documentation-field_ebo_doc_description'] = array(
    'bundle' => 'ebo_documentation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field is optional.  A place to enter some notes about what is contained in the documentation.  ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ebo_doc_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-ebo_documentation-field_ebo_document'
  $field_instances['node-ebo_documentation-field_ebo_document'] = array(
    'bundle' => 'ebo_documentation',
    'deleted' => 0,
    'description' => 'Upload the documentation file here',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ebo_document',
    'label' => 'File',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'documentation',
      'file_extensions' => 'pdf doc xls ppt',
      'max_filesize' => '10 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Currently only can select one option here. Let me know if this needs to be a multi select field');
  t('Description');
  t('File');
  t('This field is optional.  A place to enter some notes about what is contained in the documentation.  ');
  t('Upload the documentation file here');
  t('eBO Categories');

  return $field_instances;
}
