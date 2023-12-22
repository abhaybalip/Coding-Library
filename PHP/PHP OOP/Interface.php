<!-- PHP - Interface -->
<?

interface Shape{
    public function Area();
    public function Perimeter();
}

class Square implements Shape{
    private $side;
    function __construct($side){
        $this->side = $side;
    }
    public function Area()  {
        return (($this->side) * ($this->side));
    }
    public function Perimeter()  {
        return (4* $this->side);
    }
}

$s = new Square(10);
echo $s->Area(), "\n", $s->Perimeter();

?>