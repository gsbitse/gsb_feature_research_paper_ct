<?php
/**
 * @file
 * gsb_feature_research_paper_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_research_paper_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|research_paper|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'research_paper';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
        'conditions' => array(),
      ),
    ),
    'field_date_published' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Published',
        ),
      ),
    ),
    'field_file_single_public' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'green-rounded-button',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_person_fac_student_other' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'author-wrapper',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'author-name',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_research_paper_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Case number',
        ),
      ),
    ),
  );
  $export['node|research_paper|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|research_paper|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'research_paper';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_date_published' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Published',
        ),
      ),
    ),
    'field_file_single_public' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'green-rounded-button',
          'fis-at' => '',
          'fis-def-at' => TRUE,
        ),
      ),
    ),
    'field_research_paper_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Case number',
        ),
      ),
    ),
  );
  $export['node|research_paper|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_research_paper_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|research_paper|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'research_paper';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_person_fac_student_other',
        2 => 'field_date_published',
        3 => 'field_research_paper_number',
        4 => 'group_tags_wrapper',
        5 => 'field_body',
        6 => 'field_file_single_public',
        7 => 'field_business_insight_topic',
        8 => 'field_discipline',
        9 => 'field_academic_area_unlimited',
        10 => 'field_industry',
        11 => 'field_region',
        12 => 'field_target_audience',
        13 => 'field_company_organization',
        14 => 'field_tag',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_person_fac_student_other' => 'ds_content',
      'field_date_published' => 'ds_content',
      'field_research_paper_number' => 'ds_content',
      'group_tags_wrapper' => 'ds_content',
      'field_body' => 'ds_content',
      'field_file_single_public' => 'ds_content',
      'field_business_insight_topic' => 'ds_content',
      'field_discipline' => 'ds_content',
      'field_academic_area_unlimited' => 'ds_content',
      'field_industry' => 'ds_content',
      'field_region' => 'ds_content',
      'field_target_audience' => 'ds_content',
      'field_company_organization' => 'ds_content',
      'field_tag' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|research_paper|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|research_paper|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'research_paper';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_person_fac_student_other',
        2 => 'field_date_published',
        3 => 'field_research_paper_number',
        4 => 'group_tags_wrapper',
        5 => 'field_body',
        6 => 'field_file_single_public',
        7 => 'field_business_insight_topic',
        8 => 'field_discipline',
        9 => 'field_region',
        10 => 'field_target_audience',
        11 => 'field_tag',
        12 => 'field_company_organization',
        13 => 'field_academic_area_unlimited',
        14 => 'field_industry',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_person_fac_student_other' => 'ds_content',
      'field_date_published' => 'ds_content',
      'field_research_paper_number' => 'ds_content',
      'group_tags_wrapper' => 'ds_content',
      'field_body' => 'ds_content',
      'field_file_single_public' => 'ds_content',
      'field_business_insight_topic' => 'ds_content',
      'field_discipline' => 'ds_content',
      'field_region' => 'ds_content',
      'field_target_audience' => 'ds_content',
      'field_tag' => 'ds_content',
      'field_company_organization' => 'ds_content',
      'field_academic_area_unlimited' => 'ds_content',
      'field_industry' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|research_paper|full'] = $ds_layout;

  return $export;
}
