<?php
class Dhruv {
  // Properties
  public $item; //done
  public $name;
  public $price;

  // Methods
  function set_name($item) {
    $this->item = $item;
  }
  function get_name() {
    return $this->item;
  }
}

$specs = new Dhruv();
$phone = new Dhruv();
$specs->set_name('Lenskart');
$phone->set_name('OnePlus');

echo $specs->get_name();
echo "<br>";
echo $phone->get_name();
?>