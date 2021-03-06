<?php
/**
 * @file
 * sugarcrm_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sugarcrm_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sugarcrm_cases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SugarCRM Cases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SugarCRM Cases';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_sugar_name' => 'field_sugar_name',
    'field_sugar_max_hours_c' => 'field_sugar_max_hours_c',
    'field_sugar_reg_hours_c' => 'field_sugar_reg_hours_c',
    'field_sugar_rest_hours_c' => 'field_sugar_rest_hours_c',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_sugar_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sugar_max_hours_c' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sugar_reg_hours_c' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sugar_rest_hours_c' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: sugar_id */
  $handler->display->display_options['fields']['field_sugar_id']['id'] = 'field_sugar_id';
  $handler->display->display_options['fields']['field_sugar_id']['table'] = 'field_data_field_sugar_id';
  $handler->display->display_options['fields']['field_sugar_id']['field'] = 'field_sugar_id';
  $handler->display->display_options['fields']['field_sugar_id']['label'] = 'Id';
  $handler->display->display_options['fields']['field_sugar_id']['exclude'] = TRUE;
  /* Field: Content: sugar_name */
  $handler->display->display_options['fields']['field_sugar_name']['id'] = 'field_sugar_name';
  $handler->display->display_options['fields']['field_sugar_name']['table'] = 'field_data_field_sugar_name';
  $handler->display->display_options['fields']['field_sugar_name']['field'] = 'field_sugar_name';
  $handler->display->display_options['fields']['field_sugar_name']['label'] = 'Case';
  $handler->display->display_options['fields']['field_sugar_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_sugar_name']['alter']['path'] = 'sugarjcrmtime/[nid]';
  $handler->display->display_options['fields']['field_sugar_name']['alter']['absolute'] = TRUE;
  /* Field: Content: sugar_max_hours_c */
  $handler->display->display_options['fields']['field_sugar_max_hours_c']['id'] = 'field_sugar_max_hours_c';
  $handler->display->display_options['fields']['field_sugar_max_hours_c']['table'] = 'field_data_field_sugar_max_hours_c';
  $handler->display->display_options['fields']['field_sugar_max_hours_c']['field'] = 'field_sugar_max_hours_c';
  $handler->display->display_options['fields']['field_sugar_max_hours_c']['label'] = 'Max hours';
  /* Field: Content: sugar_reg_hours_c */
  $handler->display->display_options['fields']['field_sugar_reg_hours_c']['id'] = 'field_sugar_reg_hours_c';
  $handler->display->display_options['fields']['field_sugar_reg_hours_c']['table'] = 'field_data_field_sugar_reg_hours_c';
  $handler->display->display_options['fields']['field_sugar_reg_hours_c']['field'] = 'field_sugar_reg_hours_c';
  $handler->display->display_options['fields']['field_sugar_reg_hours_c']['label'] = 'Reg. hours';
  /* Field: Content: sugar_rest_hours_c */
  $handler->display->display_options['fields']['field_sugar_rest_hours_c']['id'] = 'field_sugar_rest_hours_c';
  $handler->display->display_options['fields']['field_sugar_rest_hours_c']['table'] = 'field_data_field_sugar_rest_hours_c';
  $handler->display->display_options['fields']['field_sugar_rest_hours_c']['field'] = 'field_sugar_rest_hours_c';
  $handler->display->display_options['fields']['field_sugar_rest_hours_c']['label'] = 'Remaining hours';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sugarcrm_case' => 'sugarcrm_case',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: sugar_name (field_sugar_name) */
  $handler->display->display_options['filters']['field_sugar_name_value']['id'] = 'field_sugar_name_value';
  $handler->display->display_options['filters']['field_sugar_name_value']['table'] = 'field_data_field_sugar_name';
  $handler->display->display_options['filters']['field_sugar_name_value']['field'] = 'field_sugar_name_value';
  $handler->display->display_options['filters']['field_sugar_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_sugar_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_sugar_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sugar_name_value']['expose']['operator_id'] = 'field_sugar_name_value_op';
  $handler->display->display_options['filters']['field_sugar_name_value']['expose']['label'] = 'Case';
  $handler->display->display_options['filters']['field_sugar_name_value']['expose']['operator'] = 'field_sugar_name_value_op';
  $handler->display->display_options['filters']['field_sugar_name_value']['expose']['identifier'] = 'field_sugar_name_value';
  $handler->display->display_options['filters']['field_sugar_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'global $user;
if (in_array(\'administrator\', array_values($user->roles))) {
     return false;
  }else
{

$user = user_load($user->uid);
if($user->field_sugarcrm_account){
    $sugaraccounts = $user->field_sugarcrm_account[\'und\'];
    foreach($sugaraccounts as $account){
        $accnode = node_load($account[\'target_id\']);
        $allowedcases = $accnode->field_sugar_account_cases[\'und\'];
        foreach($allowedcases as $case){
            if($case[\'target_id\'] == $row->field_sugar_id) {
                //check if excluded
                if($user->field_excluded_cases)
                    foreach($user->field_excluded_cases[\'und\'] as $excludedcase){
                    if($excludedcase[\'target_id\'] == $case[\'target_id\']) return true;
                }
                return false;
            }
        }
        return true;
    }
}
else{ return true;}

}';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sugarcrm_cases';
  $translatables['sugarcrm_cases'] = array(
    t('Master'),
    t('SugarCRM Cases'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Id'),
    t('Case'),
    t('Max hours'),
    t('Reg. hours'),
    t('Remaining hours'),
    t('Page'),
  );
  $export['sugarcrm_cases'] = $view;

  $view = new view();
  $view->name = 'sugarcrm_user_cases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'sugarcrm user cases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: sugar_account_cases */
  $handler->display->display_options['fields']['field_sugar_account_cases']['id'] = 'field_sugar_account_cases';
  $handler->display->display_options['fields']['field_sugar_account_cases']['table'] = 'field_data_field_sugar_account_cases';
  $handler->display->display_options['fields']['field_sugar_account_cases']['field'] = 'field_sugar_account_cases';
  $handler->display->display_options['fields']['field_sugar_account_cases']['label'] = 'SugarCRM account cases';
  $handler->display->display_options['fields']['field_sugar_account_cases']['alter']['text'] = '%1';
  $handler->display->display_options['fields']['field_sugar_account_cases']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_sugar_account_cases']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sugar_account_cases']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sugarcrm_account' => 'sugarcrm_account',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['sugarcrm_user_cases'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('SugarCRM account cases'),
    t('%1'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['sugarcrm_user_cases'] = $view;

  $view = new view();
  $view->name = 'sugarjcrmtime';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SugarJCRMTime';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SugarJCRMTime';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_sugar_case_name' => 'field_sugar_case_name',
    'field_sugar_created_by_name' => 'field_sugar_created_by_name',
    'field_sugar_date' => 'field_sugar_date',
    'field_sugar_description' => 'field_sugar_description',
    'field_sugar_time_length' => 'field_sugar_time_length',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_sugar_case_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sugar_created_by_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sugar_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sugar_description' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sugar_time_length' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sugar_case_target_id']['id'] = 'field_sugar_case_target_id';
  $handler->display->display_options['relationships']['field_sugar_case_target_id']['table'] = 'field_data_field_sugar_case';
  $handler->display->display_options['relationships']['field_sugar_case_target_id']['field'] = 'field_sugar_case_target_id';
  /* Field: Content: sugar_case_name */
  $handler->display->display_options['fields']['field_sugar_case_name']['id'] = 'field_sugar_case_name';
  $handler->display->display_options['fields']['field_sugar_case_name']['table'] = 'field_data_field_sugar_case_name';
  $handler->display->display_options['fields']['field_sugar_case_name']['field'] = 'field_sugar_case_name';
  $handler->display->display_options['fields']['field_sugar_case_name']['label'] = 'Case';
  /* Field: Content: sugar_created_by_name */
  $handler->display->display_options['fields']['field_sugar_created_by_name']['id'] = 'field_sugar_created_by_name';
  $handler->display->display_options['fields']['field_sugar_created_by_name']['table'] = 'field_data_field_sugar_created_by_name';
  $handler->display->display_options['fields']['field_sugar_created_by_name']['field'] = 'field_sugar_created_by_name';
  $handler->display->display_options['fields']['field_sugar_created_by_name']['label'] = 'Created by';
  /* Field: Content: sugar_date */
  $handler->display->display_options['fields']['field_sugar_date']['id'] = 'field_sugar_date';
  $handler->display->display_options['fields']['field_sugar_date']['table'] = 'field_data_field_sugar_date';
  $handler->display->display_options['fields']['field_sugar_date']['field'] = 'field_sugar_date';
  $handler->display->display_options['fields']['field_sugar_date']['label'] = 'Date';
  /* Field: Content: sugar_description */
  $handler->display->display_options['fields']['field_sugar_description']['id'] = 'field_sugar_description';
  $handler->display->display_options['fields']['field_sugar_description']['table'] = 'field_data_field_sugar_description';
  $handler->display->display_options['fields']['field_sugar_description']['field'] = 'field_sugar_description';
  $handler->display->display_options['fields']['field_sugar_description']['label'] = 'Description';
  /* Field: Content: sugar_time_length */
  $handler->display->display_options['fields']['field_sugar_time_length']['id'] = 'field_sugar_time_length';
  $handler->display->display_options['fields']['field_sugar_time_length']['table'] = 'field_data_field_sugar_time_length';
  $handler->display->display_options['fields']['field_sugar_time_length']['field'] = 'field_sugar_time_length';
  $handler->display->display_options['fields']['field_sugar_time_length']['label'] = 'Time';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_sugar_case_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sugar_jcrmtime' => 'sugar_jcrmtime',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: sugar_case_name (field_sugar_case_name) */
  $handler->display->display_options['filters']['field_sugar_case_name_value']['id'] = 'field_sugar_case_name_value';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['table'] = 'field_data_field_sugar_case_name';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['field'] = 'field_sugar_case_name_value';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_sugar_case_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sugar_case_name_value']['expose']['operator_id'] = 'field_sugar_case_name_value_op';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['expose']['label'] = 'Case';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['expose']['operator'] = 'field_sugar_case_name_value_op';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['expose']['identifier'] = 'field_sugar_case_name_value';
  $handler->display->display_options['filters']['field_sugar_case_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: sugar_date (field_sugar_date) */
  $handler->display->display_options['filters']['field_sugar_date_value']['id'] = 'field_sugar_date_value';
  $handler->display->display_options['filters']['field_sugar_date_value']['table'] = 'field_data_field_sugar_date';
  $handler->display->display_options['filters']['field_sugar_date_value']['field'] = 'field_sugar_date_value';
  $handler->display->display_options['filters']['field_sugar_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_sugar_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_sugar_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sugar_date_value']['expose']['operator_id'] = 'field_sugar_date_value_op';
  $handler->display->display_options['filters']['field_sugar_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_sugar_date_value']['expose']['operator'] = 'field_sugar_date_value_op';
  $handler->display->display_options['filters']['field_sugar_date_value']['expose']['identifier'] = 'field_sugar_date_value';
  $handler->display->display_options['filters']['field_sugar_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_sugar_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'global $user;
$user = user_load($user->uid);
if (in_array(\'administrator\', array_values($user->roles))) {
     return false;
}else{
$node = node_load($row->field_sugar_case_name);
$user = user_load($user->uid);
if($user->field_sugarcrm_account){
$sugaraccounts = $user->field_sugarcrm_account[\'und\'];
foreach($sugaraccounts as $account){
    $accnode = node_load($account[\'target_id\']);
    $allowedcases = $accnode->field_sugar_account_cases[\'und\'];
    foreach($allowedcases as $case){
        if($case[\'target_id\'] == $node->field_sugar_case[\'und\'][0][\'target_id\']) {
            //check if excluded
if($user->field_excluded_cases)
            foreach($user->field_excluded_cases[\'und\'] as $excludedcase){
                if($excludedcase[\'target_id\'] == $case[\'target_id\']) return true;
            }
            return false;
        }
    }
    return true;
}
}else{return true;}

}';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sugarjcrmtime/%';
  $translatables['sugarjcrmtime'] = array(
    t('Master'),
    t('SugarJCRMTime'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_sugar_case'),
    t('Case'),
    t('Created by'),
    t('Date'),
    t('Description'),
    t('Time'),
    t('All'),
    t('Page'),
  );
  $export['sugarjcrmtime'] = $view;

  return $export;
}
