<!-- PHP - cookies -->
<?

// setcookie(name, value, expire, path, domain, secure, httponly);

$key = "cookie-key";
$val = "cookie-val";

if( isset($_COOKIE[$key])){
    echo "cookie is set \n";
}else{
    setcookie($key, $val, time() + (86400 * 30), "/cookie");
}

echo "cookie value = ", $_COOKIE[$key], "\n";

echo "cookie count = ", count($_COOKIE), "\n";

?>