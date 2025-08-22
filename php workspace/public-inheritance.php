<!DOCTYPE html>
<html>
<body>

<?php
class Car {

  public $name;
  public $color;
  
  public function __construct($name, $color) {
    $this->name = $name;
    $this->color = $color; 
  }
  
  public function intro() {
    echo "The car is {$this->name} and the color of this car is 			{$this->color}.<br>"; 
  }
}

// Strawberry is inherited from Fruit
class exotic extends Car {
  public function message() {
    echo "Am I Exotic or classic?<br>"; 
  }
}

$exotic = new exotic("Corvette", "Red");
$exotic->message();
$exotic->intro();
?>
 
</body>
</html>
