// Dart - Class Constructor
void main(List<String> args) {
  var tc = new Test_Class();
  Main m = new Main();
}

class Test_Class{
  Test_Class(){
    print('Test Class Instance created !');
  }
}

class Main{
  Main(){
    print(' = new Main();');
  }
}