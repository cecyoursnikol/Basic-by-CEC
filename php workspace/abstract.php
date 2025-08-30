<?php

abstract class Animal {
    abstract public function makeSound(): string; // abstract method
}

class Dog extends Animal {
    public function makeSound(): string {
        return "Woof! Woof!! Nigga";
    }
}

$dog = new Dog();
echo $dog->makeSound(); // Output: Woof!
?>