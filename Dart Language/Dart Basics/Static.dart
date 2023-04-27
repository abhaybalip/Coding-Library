// Dart - Static 
void main(List<String> args) {
  print(Main.get_str());
}
class Main{
  static var str = 'A';

  static String get_str(){
    return str;
  }
}