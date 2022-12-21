    // javascript - Error Handeling
    // function to write given data on page
    function println(params){
        console.log(params);
    }
    println("Hello World");

    // error handeling
    // in built error object handles errors during programming
    // user defined - try catch methode
    // code that can generate error is in try block
    // if error is caught catch block code will run instead
    // example
    function division(a,b){
        if(b==0){
            throw("Non-Zero Number Required !");
        }
        else return a/b;
    }
    var num = division(10,2);
    println(num);

    // divide by 0
    try{
        var num = division(1,0);
    }
    catch{
        println("Non-Zero Number Required !");
    }

    // try - catch - finally
    class A{
        constructor(){
            println("Class A instance created");
        }
        methode(){
            throw("error occured");
        }
    }
    try{
        a1 = new A;
        a1.methode();
    }
    catch{
        println("Error Occured");
    }
    finally{
        println("Contuinue Programming");
    }