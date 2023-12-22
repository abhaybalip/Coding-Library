<?php
// PHP - NameSpace
namespace A;

function Adder($a,$b) : float {
    return ($a + $b);   
}
?>

<?
namespace S;

function Subtract($a,$b) : float {
    return ($a - $b);
}
?>

<?
// namespace nesting
namespace Math\A;
?>

<?

// use Math & A as a
use Math,A as a;
echo a\Adder(1,2), "\n";

?>