// Dart - OOPS - Interface
void main(List<String> args) {
  var m = new Me();
  m.play();
}
class Person{
  void play(){}
}

class Me implements Person{
  void play(){
    print('playing me');
  }
}