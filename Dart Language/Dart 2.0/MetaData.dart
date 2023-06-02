// Dart - Meta Data
void main(List<String> args) {
  print('Hello');
  Student s = new Student(10,'name');
  s.info();

  // parent child casting
  Person s1 = new Student(10,'name-surname');
  s1.info();

}

class Person{
  late String name;
  late int no;

  Person(int no,String name){
    this.no = no;
    this.name = name;
  }
  info(){
    print('Name : $name NO: $no');
  }
}
class Student extends Person{
  Student(super.no, super.name);
  
  // overridden methode
  @override
  info(){
    print('No : $no \nName : $name \n this methode is overridden !');
  }
}