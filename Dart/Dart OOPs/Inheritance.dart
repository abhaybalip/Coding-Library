// Dart - OOPS - Inheritance
void main(List<String> args){
  var c = new Parent_Class();
  var c1 = new Child_Class();
  c.display();
  c1.display();
}

class Parent_Class{
  // class data
  int num = 100;
  String s = 'Hi';

  // class methode
  void display(){
    print(this.num);
    print(this.s);
  }

}
class Child_Class extends Parent_Class{
  int num = 200;
  String s = 'Hello';
}