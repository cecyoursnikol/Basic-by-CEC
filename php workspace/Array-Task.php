<?php

$numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

echo "Even numbers in the array: ";
foreach ($numbers as $number) {
    if ( $number % 2 == 0 ) {
        echo $number . " ";
    }
}
?>