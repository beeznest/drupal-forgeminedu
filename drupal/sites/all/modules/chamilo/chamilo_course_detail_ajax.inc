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
    'profile_completed' => '',
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
    //$course_detail = chamilo_course_detail($user->uid, $course_id);
    $course_detail = new stdClass();
    $course_detail->id = 'PR876559';
    $course_detail->cost = '200';
    $course_detail->place = 'Calle del Comercio 193, San Borja - Lima, Perú';
    $course_detail->allow_visitors = '';
    $course_detail->duration = '40';
    $course_detail->brochure = 'http://localhost/chamilo/chamilo/main/link_ajax_with_views_php.pdf';
    $course_detail->banner = 'http://localhost/chamilo/chamilo/main/capacitaciones.png';
    $course_detail->as_description = 'Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industrys standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.';
    $course_detail->status = '-1';
    $course_detail->action_url = 'http://localhost/chamilo/chamilo/plugin/advancedsubscription/ajax/advsub.ajax.php?data=%23%11%97%B9%60%E2s%B5%CEFG%B2%8F%3C%5D%D1%80%40%0C%FFb%B4%9E%11+%EE%9A%87U%5D%A1%C4%CAh4%9E%2B%04%81%81%A3cJ%A2%C2%0E%8A%CC%A0%B9%86%FA%A8%B5%5C+%88%82%04%7B%03H%BA%E8%CA%26%A4%A3%8Ds%DC%C8%C2%FF%7B%BE%1E%60o%1CX%29%00a%81%87%0F%E7%C8J%8B%F3%B6ic%1F%99%B3%96d6%CA%DC%A8%81%24%1F%BB6%FC%B1%E4%C5%91%CB%D8B%FB%CC%D1%07%9B%F3%EB%A5g%22%A4%AD%A6%80%CD%D8.e%C7%AF%9B';
    $course_detail->message = 'AdvancedSubscriptionProfileIncomplete';

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
  unset($user_load->uid);
  unset($user_load->theme);
  unset($user_load->signature);
  unset($user_load->signature_format);
  unset($user_load->created);
  unset($user_load->access);
  unset($user_load->login);
  unset($user_load->status);
  unset($user_load->timezone);
  unset($user_load->language);
  unset($user_load->picture);
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

  $percentage_full_user_profile = ($total_fields_full * 100) / $total_fields;

  return $percentage_full_user_profile;
}
