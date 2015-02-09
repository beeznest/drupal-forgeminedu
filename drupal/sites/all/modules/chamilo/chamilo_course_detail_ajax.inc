<?php
/**
 * @file
 * Displays detailed information of the course through an ajax call.
 */

/**
 * Function that retrieves the information coming from the webservice.
 */
function chamilo_course_detail($user_id, $course_id) {
  $params = array(
    'user_id' => $user_id,
    'session_id' => $course_id,
    'profile_completed' => chamilo_percentage_full_user_profile(),
    'is_connected' => 1,
    'secret_key' => chamilo_get_signature(CHAMILO_SECRET_KEY),
  );

  $chamilo_detail_course = chamilo_soap_call('registration', 'HookAdvancedSubscription..WSSessionGetDetailsByUser', $params);

  return $chamilo_detail_course;
}

/**
 * Function to the calling ajax.
 */
function chamilo_course_ajax_detail($ajax, $course_id) {
  if (user_is_logged_in()) {
    global $user;
    $course_detail = chamilo_course_detail($user->uid, $course_id);

    $variables = array(
      'output' => $course_detail,
    );
    $output = theme('chamilo_course_detail_ajax', $variables);

    if ($ajax == 'ajax') {
      $id_replace = '#ajax-detail-' . $course_id;
      $id_new = 'ajax-detail-' . $course_id;
      $commands = array();
      $commands[] = ajax_command_replace($id_replace, '<div id="' . $id_new . '" class="session-detail clearfix">' . $output . '</div>');
      $commands[] = ajax_command_changed($id_replace);
      ajax_deliver(array('#type' => 'ajax', '#commands' => $commands));
    }
    else {
      return $output;
    }
  }
  else {
    //drupal_goto('user');
    drupal_set_message(t('You can not access this page.'), 'error');    
  } 
}

function chamilo_percentage_full_user_profile() {
  global $user;
  $user_load = user_load($user->uid);

  //fields should not be considered in the count.
  unset($user_load->theme);
  unset($user_load->signature);
  unset($user_load->signature_format);
  unset($user_load->created);
  unset($user_load->access);
  unset($user_load->login);
  unset($user_load->status);
  unset($user_load->timezone);
  unset($user_load->language);
  unset($user_load->init);
  unset($user_load->data);
  unset($user_load->roles);
  unset($user_load->metatags);
  unset($user_load->rdf_mapping);
  
  $total_fields = 0;
  $total_fields_full = 0;

  foreach ($user_load as $field) {
    $total_fields++;
    if (!empty($field)) {
      $total_fields_full++;
    }    
  }

  //both total is subtracted 1 by the uid.
  $percentage_full_user_profile = (($total_fields_full - 1) * 100) / ($total_fields - 1);

  return $percentage_full_user_profile;
}
