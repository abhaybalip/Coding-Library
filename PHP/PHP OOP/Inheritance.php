<!-- PHP - Inheritance -->
<?
// parent class
class Animal{
    public $name,$color,$age;
    function __construct(string $name,string $color,int  $age){
        $this->name = $name;
        $this->age  = $age;
        $this->color= $color;
    }

    function DisplayData() {
        echo "Name = ",$this->name, " Age = ", $this->age , "\ncolor = ", $this->color;
    }
}
$animal = new Animal("Dog","brown",10);
$animal->DisplayData();

// child class
class Human extends Animal{
    public $var;
}

$h = new Human("human","black",11);

$h->DisplayData();
echo $h->var;

?>