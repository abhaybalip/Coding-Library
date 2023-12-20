<!-- PHP - Function -->
<?

function Greet($name) {
    echo "Hello ",$name, "\n";
}
Greet('Abhay');

// default Agrument - Return type
function Factorial($num=1) : int {
    $ans = 1;    
    while($num>0){
        $ans *= $num--;
    }
    return $ans;
}

echo Factorial($num=5),"\n";

// Variable Argument
function Adder(...$num) : float {
    $ans = 0;
    for($i=0;$i<= count($num); $i++){
        $ans += $num[$i];
    }
    return $ans;
}

echo Adder(1,2,3)."\n";

?>