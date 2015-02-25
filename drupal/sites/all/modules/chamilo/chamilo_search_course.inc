<?php
/**
 * Function to display the results of the search courses.
 */
function chamilo_search_course($text_search) {
  $params = array(
    'term' => 'Hola',
    'extrafields' => 'sssss',
  );
  //$chamilo_search_course_list = chamilo_soap_call('registration', 'WSSearchSession', $params);

  $variables = array(
    'output' => 'hola',
  );
  $output = theme('chamilo_search_course_page', $variables);

  return $output;
}
