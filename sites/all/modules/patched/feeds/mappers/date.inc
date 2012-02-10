<?php

/**
 * @file
 * On behalf implementation of Feeds mapping API for date
 */

/**
 * Implements hook_feeds_processor_targets_alter().
 *
 * @see FeedsNodeProcessor::getMappingTargets().
 *
 * @todo Only provides "end date" target if field allows it.
 */
function date_feeds_processor_targets_alter(&$targets, $entity_type, $bundle_name) {
  foreach (field_info_instances($entity_type, $bundle_name) as $name => $instance) {
    $info = field_info_field($name);
    if (in_array($info['type'], array('date', 'datestamp', 'datetime'))) {
      $targets[$name . ':start'] = array(
        'name' => t('@name: Start', array('@name' => $instance['label'])),
        'callback' => 'date_feeds_set_target',
        'description' => t('The start date for the @name field. Also use if mapping both start and end.', array('@name' => $instance['label'])),
        'real_target' => $name,
      );
      $targets[$name . ':end'] = array(
        'name' => t('@name: End', array('@name' => $instance['label'])),
        'callback' => 'date_feeds_set_target',
        'description' => t('The end date for the @name field.', array('@name' => $instance['label'])),
        'real_target' => $name,
      );
    }
  }
}

/**
 * Implements hook_feeds_set_target().
 *
 * @param $node
 *   The target node.
 * @param $field_name
 *   The name of field on the target node to map to.
 * @param $feed_element
 *   The value to be mapped. Should be either a (flexible) date string
 *   or a FeedsDateTimeElement object.
 *
 * @todo Support array of values for dates.
 */
function date_feeds_set_target($source, $entity, $target, $feed_element) {
  list($field_name, $sub_field) = explode(':', $target, 2);
  if (!($feed_element instanceof FeedsDateTimeElement)) {
    if (is_array($feed_element)) {
      $feed_element = $feed_element[0];
    }

    // Empty string means no time - so clear the date field!
    if (!is_numeric($feed_element) && !strtotime($feed_element)) {
        $feed_element = new FeedsDateTimeElement(NULL, NULL);
    }
    elseif ($sub_field == 'end') {
      $feed_element = new FeedsDateTimeElement(NULL, $feed_element);
    }

    else {
      $feed_element = new FeedsDateTimeElement($feed_element, NULL);
    }
  }
  $feed_element->buildDateField($entity, $field_name);

}