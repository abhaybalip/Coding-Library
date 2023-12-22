<!-- PHP - Class & Object -->
<?php

class Person {
    private $name;
    private $age;
    private $gender;

    function setData(string $name, float $age, string $gender) {
        $this->name = $name;
        $this->age = $age;
        $this->gender = $gender;
    }

    function printData() {
        echo "Name = " . $this->name . "\n";
        echo "Age = " . $this->age . "\n";
        echo "Gender = " . $this->gender;
    }
}

$p = new Person();
$p->setData('my-name', 20, 'M');
$p->printData();

?>