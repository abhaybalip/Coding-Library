// Dart - OOPS - Inheritance
void main(List<String> args) {  
  var p = new Child_Class();
  print(p.get());
  print(p.s);
}

class Parent_Class{
  int num = 100;
  String s = 'Hi';

  int get(){
    return num+10;
  }
}

class Child_Class extends Parent_Class{
  
}