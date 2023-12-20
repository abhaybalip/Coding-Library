<!-- PHP - Type Casting -->
<?

$int = 10;
$float = 22/7;
$str = "Hello";
$bool = false;

echo (string)$int, "\n";
echo (int)$float, "\n";
echo (int)'A', "\n";
echo (int)$bool, "\n";
$int = 1;
echo (bool)$int;


?>