<?php
/**
 * @file
 * gsb_feature_research_paper_ct.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gsb_feature_research_paper_ct_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_person_fac_student_other-field_first_name'
  $field_instances['field_collection_item-field_person_fac_student_other-field_first_name'] = array(
    'bundle' => 'field_person_fac_student_other',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'research_pager' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'field_collection_item-field_person_fac_student_other-field_last_name'
  $field_instances['field_collection_item-field_person_fac_student_other-field_last_name'] = array(
    'bundle' => 'field_person_fac_student_other',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'research_pager' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'field_collection_item-field_person_fac_student_other-field_person_fac_student_ref'
  $field_instances['field_collection_item-field_person_fac_student_other-field_person_fac_student_ref'] = array(
    'bundle' => 'field_person_fac_student_other',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'research_pager' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_person_fac_student_ref',
    'label' => 'Person Ref',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'field_collection_item-field_person_fac_student_other-field_person_or_other'
  $field_instances['field_collection_item-field_person_fac_student_other-field_person_or_other'] = array(
    'bundle' => 'field_person_fac_student_other',
    'default_value' => array(
      0 => array(
        'value' => 'Other',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'research_pager' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_person_or_other',
    'label' => 'Person Selection',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => '',
      ),
      'type' => 'options_buttons',
      'weight' => 0,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_academic_area_unlimited'
  $field_instances['node-research_paper-field_academic_area_unlimited'] = array(
    'bundle' => 'research_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 15,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 16,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_academic_area_unlimited',
    'label' => 'Academic Area',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(
        'maxlength_js_label' => '',
      ),
      'type' => 'taxonomy_hs',
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_addthis'
  $field_instances['node-research_paper-field_addthis'] = array(
    'bundle' => 'research_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'addthis_displays',
        'settings' => array(
          'buttons_size' => 'addthis_16x16_style',
          'conditions' => array(
            0 => array(
              'condition' => '',
            ),
          ),
          'counter_orientation' => 'horizontal',
          'extra_css' => '',
          'share_services' => 'twitter, linkedin, facebook, google_plusone_share, email',
        ),
        'type' => 'addthis_basic_toolbox',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_addthis',
    'label' => 'AddThis',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'addthis',
      'settings' => array(
        'maxlength_js_label' => '',
      ),
      'type' => 'addthis_button_widget',
      'weight' => 17,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_body'
  $field_instances['node-research_paper-field_body'] = array(
    'bundle' => 'research_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_body',
    'label' => 'Abstract Text',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => '',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_business_insight_topic'
  $field_instances['node-research_paper-field_business_insight_topic'] = array(
    'bundle' => 'research_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 13,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 17,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_business_insight_topic',
    'label' => 'Business Insight Topic',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(
        'maxlength_js_label' => '',
      ),
      'type' => 'taxonomy_hs',
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_citation'
  $field_instances['node-research_paper-field_citation'] = array(
    'bundle' => 'research_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_citation',
    'label' => 'Citation',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => '',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_company_organization'
  $field_instances['node-research_paper-field_company_organization'] = array(
    'bundle' => 'research_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 19,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 12,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 14,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_company_organization',
    'label' => 'Company/Organization',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'maxlength_js_label' => '',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 15,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_date_published'
  $field_instances['node-research_paper-field_date_published'] = array(
    'bundle' => 'research_paper',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'panopoly_day',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'panopoly_day',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_date_published',
    'label' => 'Date Published',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'maxlength_js_label' => '',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_discipline'
  $field_instances['node-research_paper-field_discipline'] = array(
    'bundle' => 'research_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 14,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 15,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_discipline',
    'label' => 'Discipline',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(
        'maxlength_js_label' => '',
      ),
      'type' => 'taxonomy_hs',
      'weight' => 10,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_file_single_public'
  $field_instances['node-research_paper-field_file_single_public'] = array(
    'bundle' => 'research_paper',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'file_default',
        'weight' => 6,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'file_default',
        'weight' => 6,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_file_single_public',
    'label' => 'Upload Research Paper',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'research-papers',
      'file_extensions' => 'txt pdf doc docx xls xlsx ppt pptx',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'maxlength_js_label' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_industry'
  $field_instances['node-research_paper-field_industry'] = array(
    'bundle' => 'research_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 16,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 18,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_industry',
    'label' => 'Industry',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(
        'maxlength_js_label' => '',
      ),
      'type' => 'taxonomy_hs',
      'weight' => 12,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_person_fac_student_other'
  $field_instances['node-research_paper-field_person_fac_student_other'] = array(
    'bundle' => 'research_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'separator' => ', ',
          'view_mode' => 'full',
        ),
        'type' => 'gsb_field_formatter_field_collection_separator',
        'weight' => 1,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'separator' => ', ',
          'view_mode' => 'full',
        ),
        'type' => 'gsb_field_formatter_field_collection_separator',
        'weight' => 1,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'gsb_field_formatter',
        'settings' => array(
          'conditions' => array(),
          'separator' => '; ',
          'view_mode' => 'full',
        ),
        'type' => 'gsb_field_formatter_field_collection_separator',
        'weight' => 3,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_person_fac_student_other',
    'label' => 'Authors',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(
        'maxlength_js_label' => '',
      ),
      'type' => 'field_collection_embed',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_region'
  $field_instances['node-research_paper-field_region'] = array(
    'bundle' => 'research_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 17,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 13,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_region',
    'label' => 'Region',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(
        'maxlength_js_label' => '',
      ),
      'type' => 'taxonomy_hs',
      'weight' => 13,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_research_paper_number'
  $field_instances['node-research_paper-field_research_paper_number'] = array(
    'bundle' => 'research_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_plain',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_plain',
        'weight' => 3,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_research_paper_number',
    'label' => 'Paper No.',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => '',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_search_field'
  $field_instances['node-research_paper-field_search_field'] = array(
    'bundle' => 'research_paper',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'concat_field',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'concat_field_blank',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_search_field',
    'label' => 'Search field',
    'required' => 0,
    'settings' => array(
      'selected_fields' => array(
        'concat_field_entity_label' => 'concat_field_entity_label',
        'field_academic_area_unlimited' => 'field_academic_area_unlimited',
        'field_addthis' => 0,
        'field_body' => 'field_body',
        'field_business_insight_topic' => 'field_business_insight_topic',
        'field_citation' => 'field_citation',
        'field_company_organization' => 'field_company_organization',
        'field_date_published' => 'field_date_published',
        'field_discipline' => 'field_discipline',
        'field_file_single_public' => 0,
        'field_industry' => 'field_industry',
        'field_person_fac_student_other' => 'field_person_fac_student_other',
        'field_region' => 'field_region',
        'field_research_paper_number' => 'field_research_paper_number',
        'field_tag' => 'field_tag',
        'field_target_audience' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'concat_field',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'concat_field_default',
      'weight' => 20,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_tag'
  $field_instances['node-research_paper-field_tag'] = array(
    'bundle' => 'research_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 20,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 12,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tag',
    'label' => 'Tag',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'maxlength_js_label' => '',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 16,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-research_paper-field_target_audience'
  $field_instances['node-research_paper-field_target_audience'] = array(
    'bundle' => 'research_paper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'business_insight' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 18,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'conditions' => array(),
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 11,
      ),
      'tiny' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_target_audience',
    'label' => 'Target Audience',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(
        'maxlength_js_label' => '',
      ),
      'type' => 'taxonomy_hs',
      'weight' => 14,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abstract Text');
  t('Academic Area');
  t('AddThis');
  t('Authors');
  t('Business Insight Topic');
  t('Citation');
  t('Company/Organization');
  t('Date Published');
  t('Discipline');
  t('First Name');
  t('Industry');
  t('Last Name');
  t('Paper No.');
  t('Person Ref');
  t('Person Selection');
  t('Region');
  t('Search field');
  t('Tag');
  t('Target Audience');
  t('Upload Research Paper');

  return $field_instances;
}
