<!DOCTYPE html>
<html>
<body>

<?php
class Lusaka{
  public $FamousFood;
  public $FamousPlace;

  function __construct($FamousFood) {
    $this->FamousFood = $FamousFood; 
  }
  function get_FamousFood() {
    return $this->FamousFood;
  }
}

$shima = new Lusaka("Shima made from Maize Flour");
echo $shima->get_FamousFood();
?>
 
</body>
</html>
