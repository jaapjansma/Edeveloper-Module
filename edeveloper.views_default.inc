<?php
/**
 * @file
 * edeveloper.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function edeveloper_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'citaat';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Citaat';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Citaat';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Afbeelding */
  $handler->display->display_options['fields']['field_citaat_afbeelding']['id'] = 'field_citaat_afbeelding';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['table'] = 'field_data_field_citaat_afbeelding';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['field'] = 'field_citaat_afbeelding';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['label'] = '';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['element_type'] = '0';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_citaat_afbeelding']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_citaat_afbeelding']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['settings'] = array(
    'image_style' => 'citaat_homepage',
    'image_link' => '',
  );
  /* Field: Content: Auteur */
  $handler->display->display_options['fields']['field_auteur']['id'] = 'field_auteur';
  $handler->display->display_options['fields']['field_auteur']['table'] = 'field_data_field_auteur';
  $handler->display->display_options['fields']['field_auteur']['field'] = 'field_auteur';
  $handler->display->display_options['fields']['field_auteur']['label'] = '';
  $handler->display->display_options['fields']['field_auteur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_auteur']['alter']['text'] = '<div>
[field_citaat]
[field_auteur]
</div>';
  $handler->display->display_options['fields']['field_auteur']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_auteur']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_auteur']['type'] = 'text_plain';
  /* Field: Content: Citaat */
  $handler->display->display_options['fields']['field_citaat']['id'] = 'field_citaat';
  $handler->display->display_options['fields']['field_citaat']['table'] = 'field_data_field_citaat';
  $handler->display->display_options['fields']['field_citaat']['field'] = 'field_citaat';
  $handler->display->display_options['fields']['field_citaat']['label'] = '';
  $handler->display->display_options['fields']['field_citaat']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_citaat']['alter']['text'] = '<blockquote>
<p>[field_citaat]<br>
<cite>[field_auteur]</cite></p>
</blockquote>';
  $handler->display->display_options['fields']['field_citaat']['element_type'] = '0';
  $handler->display->display_options['fields']['field_citaat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_citaat']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_citaat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_citaat']['type'] = 'text_plain';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'citaat' => 'citaat',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Citaat';
  $export['citaat'] = $view;

  $view = new view();
  $view->name = 'expertises';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Expertises';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Expertises';
  $handler->display->display_options['css_class'] = 'content-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Lees meer';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'expertise' => 'expertise',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'expertises';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Expertises';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['expertises'] = $view;

  $view = new view();
  $view->name = 'wist_je_dat';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Wist je dat';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Wist je dat';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Expertise */
  $handler->display->display_options['fields']['field_expertise_reference']['id'] = 'field_expertise_reference';
  $handler->display->display_options['fields']['field_expertise_reference']['table'] = 'field_data_field_expertise_reference';
  $handler->display->display_options['fields']['field_expertise_reference']['field'] = 'field_expertise_reference';
  $handler->display->display_options['fields']['field_expertise_reference']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_expertise_reference']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_expertise_reference']['hide_empty'] = TRUE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tags']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'wist_je_dat' => 'wist_je_dat',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['wist_je_dat'] = $view;

  return $export;
}
