<!-- PHP - Data Types -->

<?php

    print("Hello World \n");
    echo "Hi \n";

    // variable declaration
    $num = 10;
    $double = 22/7;
    $bool = true;
    $null = NULL;
    $string = 'string';

    // constant declaration
    define('const_data',100);
    const str = "constant string data";

    echo const_data,"\n";
    echo str[0],"\n";

    // retreive data type
    echo var_dump($num),"\n";
    echo var_dump($string),"\n";
?>