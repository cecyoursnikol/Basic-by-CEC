<?php

  class digiLocker{
    public $fullName;
    public $Aadhar;

    public function __construct($fullName, $Aadhar){
        $this->fullName = $fullName;
        $this->Aadhar = $Aadhar;
    }

  }
  
  class person1 extends digiLocker{

  }

  $digiLocker = new digiLocker("Mahesh Patel", "992581888545");
  echo $digiLocker->fullName . "<br>";
  echo $digiLocker->Aadhar;

?>