<!-- PHP - session -->
<?

// A session is a way to store information (in variables) used across multiple pages
echo $_SESSION;

$_SESSION['key'] = 'val';

?>