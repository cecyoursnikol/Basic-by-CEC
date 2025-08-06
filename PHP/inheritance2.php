<?php
// Parent class
class Vehicle {
  public $brand = "Unknown";

  public function startEngine() {
    echo "The engine has started.<br>";
  }

  public function stopEngine() {
    echo "The engine has stopped.<br>";
  }
}

// Child class
class Car extends Vehicle {
  public $model = "Generic Model";

  public function displayInfo() {
    echo "Brand: " . $this->brand . "<br>";
    echo "Model: " . $this->model . "<br>";
  }
}

// Using the classes
$myCar = new Car();
$myCar->brand = "Toyota";
$myCar->model = "Corolla";

$myCar->displayInfo();
$myCar->startEngine();
$myCar->stopEngine();
?>
