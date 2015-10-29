<?php
/**
 * @file
 * recipe.features.inc
 */

/**
 * Implements hook_node_info().
 */
function recipe_node_info() {
  $items = array(
    'recipes' => array(
      'name' => t('Recipes'),
      'base' => 'node_content',
      'description' => t('Add a new recipe.'),
      'has_title' => '1',
      'title_label' => t('Recipe Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
