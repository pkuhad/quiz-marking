<?php

/**
 * Theme the quiz ranks results table.
 *
 * @param $results
 *  As returned by _quiz_marking_calculate_ranks().
 *
 */

function theme_quiz_marking_show_ranks($results) {
  $output = '';
  $rows = array();
  $count = 0;
  while (list($key, $result) = each($results)) {
  	$count ++;
    $rows[] = array(
      check_plain($count),
      l("{$result['name']}","/user/{$result['uid']}"),
      check_plain($result['marks']),
      l("View ","admin/quiz/reports/{$result['result_id']}/results")
    );
  }

  $header = array(
    t('Rank'),
    t('Username'),
    t('Total Marks'),
    t('Action'),
   );

  if (!empty($rows)) {
    $output .= theme('table', $header, $rows);
  }
  else {
    $output .= t('No results found under this quiz.');
  }
  return $output;
}


/**
 * Theme the quiz avilable quizes results table.
 *
 * @param $results
 *  As calculated in _show_available_quizes().
 *
 */

function theme_quiz_marking_show_available_quizes($results) {
  $output = '';
  $rows = array();
  while (list($key, $result) = each($results)) {
    $rows[] = array(
      check_plain($result['title']),
      l("View","admin/quiz/{$result['nid']}/view_marks/0")." | ".l("Update","admin/quiz/{$result['nid']}/view_marks/1")
    );
  }

  $header = array(
    t('Quiz Title'),
    t('Action')
   );

  if (!empty($rows)) {
    $output .= theme('table', $header, $rows);
  }
  else {
    $output .= t('No Quizes Found');
  }
  return $output;
}
