    // javascript - function 
    // it is block of code that can be used many times by calling function
    // function can take inputs called parametre
    // function made to write given msg in document
    function print(msg){
        console.log(msg);
    }
    function println(msg){
        console.log("<br>"+msg);
    }
    // calling function
    println("Hello World - using println function");
    print("hello user <br>function executed <br>");

    print(10);
    print(100);
    println("new line here with horizontal ruler <hr>")

    // function to print factorila using recursion
    function factorial(num){
        if(num==0) return 1;
        else{
            return num*factorial(num-1);
        }
    }

    // example :
    println("factorial of 5 = "+factorial(5));
    
    println(2+3);

    // function to find power
    function power(x,y){
        var ans = 1;
        for(var i=0;i<y;i++){
            ans *= x;
        }
        return ans;
    }
    println("usinf power function : ");
    println("2^4 = "+power(2,64));

    function permutation(x,y){
        var ans = factorial(x)/factorial(x-y);
        return ans;
    }
    println("Using permutation function : ");
    println("5P2 = "+permutation(5,2));