<?php
// Book class definition
class Book {
    private $title;
    private $author;

    // Constructor: Initializes a new Book object
    public function __construct($title, $author) {
        $this->title = $title;
        $this->author = $author;
        echo "📘 New book added: '{$this->title}' by {$this->author}<br>";
    }

    // Destructor: Called when the object is destroyed
    public function __destruct() {
        echo "📕 Book '{$this->title}' has been removed from the library<br>";
    }

    // Method to display book details
    public function displayDetails() {
        echo "📖 Book: {$this->title}, Author: {$this->author}<br>";
    }

    // Optional: Allows object to be echoed directly
    public function __toString() {
        return "📚 '{$this->title}' by {$this->author}";
    }
}

// Creating first book
echo "Creating first book...<br>";
$book1 = new Book("One Piece", "Eiichiro Oda");

echo "<br>Displaying first book details...<br>";
$book1->displayDetails();

// Creating second book
echo "<br>Creating second book...<br>";
$book2 = new Book("Naruto", "Masashi Kishimoto");

echo "<br>Displaying second book details...<br>";
$book2->displayDetails();

// Optionally echo the object directly using __toString
echo "<br>Echoing book object directly:<br>";
echo $book2 . "<br>";

// Removing first book explicitly
echo "<br>Removing first book...<br>";
unset($book1);

// Second book will be removed automatically at the end of the script
echo "<br>Script ending, second book will be automatically removed...<br>";
?>