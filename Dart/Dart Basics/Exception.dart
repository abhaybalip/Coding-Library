void main(List<String> args) {
  try{
    // code that can generate exception
    var n = 1~/0;
    print(n);
  }
  catch(Exception){
    // code that is executed when exception occurs 
    print('Exception Occured ! \n');
  }

  try{
    var a = 10;
    print(a~/0);
  }
  // specify type of exception
  on Exception{
    print('Exception Type = General');
  }
}