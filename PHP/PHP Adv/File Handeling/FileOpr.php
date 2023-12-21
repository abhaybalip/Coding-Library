<!-- PHP - File Operation -->
<?

$file = fopen("Test.txt");

// truncate file
ftruncate($file);

// return end pointer of file
echo feof($file);

// flush stream output to file
fflush($file);

?>