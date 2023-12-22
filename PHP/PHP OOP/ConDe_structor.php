<!-- PHP - Conatructor & Destructor -->
<?

class Person{
    private $name,$age,$gender;
    function __construct(string $name, float $age, string $gender) {
        $this->name = $name;
        $this->age = $age;
        $this->gender = $gender;
        echo "object constructed \n";
    }

    function __destruct() {
        echo "object destroyed at script end\n";
    }
}

$p = new Person("my-name",20,"M");

// __destruct function is called at end of script
?>