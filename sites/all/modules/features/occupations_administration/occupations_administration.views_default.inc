<?php
/**
 * @file
 * occupations_administration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function occupations_administration_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'occupation_directory_comments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Occupation Directory Comments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Occupation Directory Comments';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any occupation content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'subject' => 'subject',
    'created' => 'created',
    'changed' => 'changed',
    'field_comment_state' => 'field_comment_state',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'subject' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_comment_state' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = 1;
  /* Field: Comment: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'comment';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'comment_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'comment_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'comment_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'comment_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = 'Occupation Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = 'Comment Title';
  $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['text'] = ' [edit_comment] | [view_comment]';
  $handler->display->display_options['fields']['subject']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['external'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['html'] = 0;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['subject']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['subject']['hide_empty'] = 0;
  $handler->display->display_options['fields']['subject']['empty_zero'] = 0;
  $handler->display->display_options['fields']['subject']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['subject']['link_to_comment'] = 0;
  $handler->display->display_options['fields']['subject']['link_to_node'] = 0;
  /* Field: Comment: View link */
  $handler->display->display_options['fields']['view_comment']['id'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['view_comment']['field'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['label'] = '';
  $handler->display->display_options['fields']['view_comment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_comment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_comment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_comment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_comment']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_comment']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_comment']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_comment']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_comment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_comment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_comment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_comment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_comment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_comment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_comment']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_comment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_comment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_comment']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_comment']['link_to_node'] = 0;
  /* Field: Comment: Edit link */
  $handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_comment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_comment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_comment']['alter']['text'] = '[title] - [edit_comment] |';
  $handler->display->display_options['fields']['edit_comment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_comment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_comment']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_comment']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_comment']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_comment']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_comment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_comment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_comment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_comment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_comment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_comment']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_comment']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_comment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_comment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_comment']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_comment']['link_to_node'] = 0;
  $handler->display->display_options['fields']['edit_comment']['destination'] = 0;
  /* Field: Rewritten */
  $handler->display->display_options['fields']['subject_1']['id'] = 'subject_1';
  $handler->display->display_options['fields']['subject_1']['table'] = 'comment';
  $handler->display->display_options['fields']['subject_1']['field'] = 'subject';
  $handler->display->display_options['fields']['subject_1']['ui_name'] = 'Rewritten';
  $handler->display->display_options['fields']['subject_1']['label'] = 'Comment Title';
  $handler->display->display_options['fields']['subject_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['subject_1']['alter']['text'] = '[subject] - [view_comment]  | [edit_comment] ';
  $handler->display->display_options['fields']['subject_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['subject_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['subject_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['subject_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['subject_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['subject_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['subject_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['subject_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['subject_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['subject_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['subject_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['subject_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['subject_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['subject_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['subject_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['subject_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['subject_1']['link_to_comment'] = 0;
  $handler->display->display_options['fields']['subject_1']['link_to_node'] = 0;
  /* Field: Comment: State */
  $handler->display->display_options['fields']['field_comment_state']['id'] = 'field_comment_state';
  $handler->display->display_options['fields']['field_comment_state']['table'] = 'field_data_field_comment_state';
  $handler->display->display_options['fields']['field_comment_state']['field'] = 'field_comment_state';
  $handler->display->display_options['fields']['field_comment_state']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_comment_state']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_comment_state']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_comment_state']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_comment_state']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_comment_state']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_comment_state']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_comment_state']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_comment_state']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_comment_state']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_comment_state']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_comment_state']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_comment_state']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_comment_state']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_comment_state']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_comment_state']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_comment_state']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_comment_state']['field_api_classes'] = 0;
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['custom_date_format'] = '1';
  /* Field: Comment: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'comment';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = '1';
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Manage Comments */
  $handler = $view->new_display('page', 'Manage Comments', 'occupations_manage_comments');
  $handler->display->display_options['path'] = 'occupations/manage-comments';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Manage Comments';
  $handler->display->display_options['menu']['weight'] = '35';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $export['occupation_directory_comments'] = $view;

  return $export;
}