<?php
$students = [
    "Tanvi" => ["Math" => 85, "Science" => 90, "English" => 80],
    "Aarav" => ["Math" => 45, "Science" => 60, "English" => 50],
    "Meera" => ["Math" => 95, "Science" => 92, "English" => 88],
    "Kabir" => ["Math" => 70, "Science" => 75, "English" => 72],
];

foreach ($students as $name => $marks) {
    $total = array_sum($marks);
    $percentage = $total / count($marks);
    
    // Assign Grade
    if ($percentage >= 90) {
        $grade = "A";
    } elseif ($percentage >= 75) {
        $grade = "B";
    } elseif ($percentage >= 50) {
        $grade = "C";
    } else {
        $grade = "D";
    }

    // Output
    echo "<b>Student: $name <br>";
    echo "Total Marks: $total<br>";
    echo "Percentage: " . number_format($percentage, 2) . "%<br>";
    echo "Grade: $grade<br>";
    echo "-----------------------<br><br>";
}
?>

<?php
$rows = 5;

for ($i = 1; $i <= $rows; $i++) {
    for ($j = 1; $j <= $i; $j++) {
        echo "* ";
    }
    echo "<br>";
}
?>
