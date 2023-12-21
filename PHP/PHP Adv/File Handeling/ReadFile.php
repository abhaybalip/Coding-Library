<!-- PHP - File -->
<?

$file = fopen("Test.txt","r+");
echo $file, "\n";

echo filesize("Test.txt"), "\n";

echo fread($file,filesize("Test.txt")), "\n";

echo fgets($file), "\n";


fclose($file);
?>