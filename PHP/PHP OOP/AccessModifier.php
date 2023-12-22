<!-- PHP - Access Modifier -->
<?

class Person{
    public $name;
    private $age;
    protected $gender;
    function __construct(string $name, float $age, string $gender) {
        $this->name = $name;
        $this->age = $age;
        $this->gender = $gender;
        echo "object constructed \n";
    }
}

$p = new person("my-name",20,"M");

echo $p->name;
// publically not accessible 
// echo $p->age;
// echo $p->gender;
?>