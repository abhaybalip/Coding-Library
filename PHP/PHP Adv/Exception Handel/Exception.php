<!-- PHP - Exception -->
<?

function divider(float $a,float $b) : float {
    if($b==0){
        throw new Exception("undefined Error",1);
    }
    else return ($a / $b);
}

echo divider(1,0);

?>