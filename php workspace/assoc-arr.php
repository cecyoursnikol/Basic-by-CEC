<?php

    $fruits = array("Mango" => "Yellow", "Watermelon" =>"Green", "Apple" => "Red", "Grapes" => "Black");

    // Associative Arrays are unindexed, which means they do not have any index number

    foreach($fruits as $key => $value){
        echo "$key: $value <br>";
    }
?>