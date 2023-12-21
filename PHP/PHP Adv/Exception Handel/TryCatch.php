<!-- PHP - Try Catch -->
<?

function divider(float $a,float $b) : float {
    if($b==0){
        throw new Exception("undefined Error",1);
    }
    else return ($a / $b);
}

try {
    //code...
    echo divider(1,0);
} catch (\Throwable $th) {
    //throw $th;
    echo $th->getCode(), "\n", $th->getMessage() , "\n";
}
finally{
    echo "finally code block is running  ";
}
?>