<!-- PHP - Abstract Function -->
<?

abstract class A{
    abstract public function Adder($var_0,$var_1);
    abstract public function Function_1();
}

class B implements A{
    function Adder($var_0,$var_1){
        return $var_0 + $var_1;
    }
}

// $a = new A()
$b = new B();
$b->Function_0(1,2);
?>