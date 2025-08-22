<?php
// 🚗 Base class: Vehicle
class Vehicle {
    protected string $brand;

    // Constructor to initialize brand
    public function __construct(string $brand) {
        $this->brand = $brand;
    }

    // Method to start the engine
    public function startEngine(): void {
        echo "🔧 The engine of {$this->brand} is starting...<br>";
    }
}

// 🚙 Derived class: Car
class Car extends Vehicle {
    // Method specific to Car
    public function openTrunk(): void {
        echo "🚗 {$this->brand} car trunk is now open.<br>";
    }
}

// 🏍️ Derived class: Bike
class Bike extends Vehicle {
    // Overriding startEngine method
    public function startEngine(): void {
        echo "🏍️ {$this->brand} bike engine is roaring to life!<br>";
    }

    // Method specific to Bike
    public function kickStart(): void {
        echo "👢 {$this->brand} bike is kick-started.<br>";
    }
}

// 🔧 Instantiate Car object
$myCar = new Car("Toyota");
$myCar->startEngine();   // Inherited from Vehicle
$myCar->openTrunk();     // Unique to Car

echo "<br>"; // Line break for clarity

// 🔧 Instantiate Bike object
$myBike = new Bike("Royal Enfield");
$myBike->startEngine();  // Overridden in Bike
$myBike->kickStart();    // Unique to Bike
?>