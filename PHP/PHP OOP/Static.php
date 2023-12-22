<!-- PHP - Static -->
<?php
class pi {
    public static $value=  22/7;
}

class x extends pi {
    public function get_pi() {
        return parent::$value;
    }
}

echo x::$value;

$x = new x();
echo $x->get_pi();

?>