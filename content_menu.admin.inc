<?php
/**
 * @file
 * Administrative page callbacks.
 */

/**
 * Admin settings form.
 */
function content_menu_settings($form, &$form_state) {
  $form = array('#config' => 'content_menu.settings');

  $form['alter_all_menus'] = array(
    '#type' => 'checkbox',
    '#title' => t('Alter all menus'),
    '#default_value' => config_get('content_menu.settings', 'alter_all_menus'),
  );
  $form['config_menus'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Menus to alter'),
    '#description' => t('Choose which menu overview pages should be enhanced.'),
    '#default_value' => config_get('content_menu.settings', 'config_menus'),
    '#options' => menu_get_menus(),
    '#states' => array(
      'invisible' => array(
        ':input[name="alter_all_menus"]' => array('checked' => TRUE),
      ),
    ),
  );
  $form['simplify_menu_edit_item_form'] = array(
    '#type' => 'checkbox',
    '#title' => t('Simplify menu edit item form'),
    '#description' => t('Simplify the form, by putting all "advanced" fields in collapsible fieldset.'),
    '#default_value' => config_get('content_menu.settings', 'simplify_menu_edit_item_form'),
  );
  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );
  return system_settings_form($form);
}
