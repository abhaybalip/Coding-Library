// Dart - this 
void main(List<String> args) {

  var s = new Student(01,'name');
  s.Display();
}
class Student{
  int id=0;
  String name='';
  Student(int id,String name){
    this.id = id;
    this.name = name;
  }
  void Display(){
    print('id = '+(this.id as String));
    print('name = ');
    print(this.id);
  }
}