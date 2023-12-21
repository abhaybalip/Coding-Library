<!-- PHP - JSON -->
<?

$data = '{"name": "my-name","Age":20,"Gender":"M"}';

$j = json_encode($data);

echo $j, "\n";

$t = json_decode($j);

echo $t, "\n";

?>