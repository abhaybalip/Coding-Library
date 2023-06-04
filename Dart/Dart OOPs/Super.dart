// Dart - OOPS - Super
void main(List<String> args) {
  var c = new Child_Class();
  c.display();
}
class Parent_Class{
  int n = 100;
  String s = 'Hi';

  Parent_Class(){
    print('Parent Class Constructor ');
  }

}
class Child_Class extends Parent_Class{
  int n = 1000;
  String s = 'Hello';

  Child_Class(){
    
  }

  void display(){
    print('Parent Class Data : ');
    print(super.n);
    print(super.s);

    print('Child Class Data : ');
    print(n);
    print(s);

    Parent_Class();
  }
}