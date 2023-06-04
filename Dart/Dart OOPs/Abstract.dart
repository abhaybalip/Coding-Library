// Dart - OOPS - Abstraction
void main(List<String> args) {
  var m = new Me();
  m.study();
  m.play();
}
abstract class Person{
  void study();
  void play();
}
class Me extends Person{
  void study(){
    print('studying me');
  }
  void play(){
    print('playing me');
  }
}