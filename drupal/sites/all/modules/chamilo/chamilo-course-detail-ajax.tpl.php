<div class="cb-inner-container-left"> 
  <ul> 
    <li>
      <strong>Id:</strong>
      <?php  ?>
    </li>
    <li>
      <strong>Costo:</strong>
      <?php print $output->cost; ?>
    </li>
    <li>
      <strong>Lugar:</strong>
      <?php print $output->place; ?>
    </li>
    <li>
      <strong>Sesión permite visitantes:</strong>
      <?php  ?>
    </li>
    <li>
      <strong>Cantidad de horas lectivas:</strong>
      <?php print $output->duration; ?>
    </li>
    <li>
      <img src="<?php print $output->banner; ?>" />
    </li>
  </ul> 
</div>
<div class="cb-inner-container-middle">
  <p></p>
  <a href="<?php print $output->brochure; ?>" donwload>Descargar brochure</a>
</div>
<div class="cb-inner-container-right">
</div>

