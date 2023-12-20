<!-- PHP - RegEx Basics -->
<?

$exp = "This is a string";

// / => it is delimiter symbol
// delimiter can be any symbol except number, char, backslash
// i =>
$ptr = "is";

echo preg_match($exp,$ptr);

echo preg_match($exp,$ptr);

echo preg_match_all($exp,$ptr);

preg_replace($exp,"string","int")


?>