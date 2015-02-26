<div class="chamilo-courses">
  <ul>
    <?php foreach ($output as $course): ?>
    <li class="chrow">
      <h4><?php print $course->name; ?></h4>
      <p><?php print $course->description; ?></p>
      <div class="session-mode f-left">
        <em>Modalidad</em>
        <p>Online</p>  
      </div>
      <div class="session-date-start f-left">
        <em>Fecha de inicio</em>
        <p><?php print $course->date_start; ?></p>  
      </div>
      <div class="session-date-end f-left">
        <em>Fecha de fin</em>
        <p><?php print $course->date_end; ?></p>
      </div>
      <div class="session-duration f-left">
        <em>Duración</em>
        <p><?php print $course->duration; ?></p>
      </div>
      <div class="session-vacancies f-left">
        <em>Cupos</em>
        <p>20</p>
      </div>
      <div class="session-schedule f-left">
        <em>Horario</em>
        <p>16:00 - 18:00</p>
      </div>
      <div class="ajax-container">
        <div id="ajax-link-<?php print $course->id; ?>" class="ajax-link">
          <?php print $course->link; ?>
        </div>
        <div id="ajax-detail-<?php print $course->id; ?>" class="session-detail clearfix"></div>  
      </div>
    </li>
    <?php endforeach; ?>
  </ul>
</div>
