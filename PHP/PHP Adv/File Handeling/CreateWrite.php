<!-- PHP - Create File -->
<?

$file = fopen("Test.txt","a+");

fwrite($file,"This is new File\n");



fclose($file);

?>