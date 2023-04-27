// Dart - Class & Object 
void main(List<String> args) {
  // class Object 
  Test_Class tc = new Test_Class();
  var tc1 = Test_Class();
  
  tc.methode();
  tc1.methode();
}
class Test_Class{
  // class data
  int n = 100;
  String s = 'string';

  // class methode 
  void methode(){
    print('class Test methode ');
  }
}