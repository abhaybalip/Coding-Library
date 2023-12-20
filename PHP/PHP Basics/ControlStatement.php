<!-- PHP - Control Statement -->
<?php

// if-else statement
$bool = true;
if($bool) {
    echo "True value \n";
}
else { 
    echo "False value \n";
}

// for loop
$int = 5;
for ($i=0; $i < $int; $i++) { 
    # code...
    echo ($i * $int),"\n";
}

// while / dp-while loop
do{
    echo "count = ",$int, "\n";
    $int--;
}while($int>0)

?>