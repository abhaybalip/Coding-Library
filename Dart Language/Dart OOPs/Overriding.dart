// Dart - OOPS - Overriding 
void main(List<String> args) {
  var p = new Parent_Class();
  var c = new Child_Class();
  p.methode();
  c.methode();
}
class Parent_Class{
  void methode(){
    print('parent class methode');
  }
}
class Child_Class extends Parent_Class{
  void methode(){
    print('child class methode');

    print('call parent class methode using super : ');
    super.methode();
  }
}