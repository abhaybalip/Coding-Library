// Dart - Class Calling
// we can use class instance as a function
// class should have a call methode inside
void main(List<String> args) {
  var p = new Person('name',10);
  p.call();

  p = new Person('name',15);
  p();
}

class Person{
  late String name;
  late int age;
  Person(this.name,this.age){}

  void call(){
    print('call methode invoked !');
    print('Person Details : \nName - $this.name \tAge - $this.age \n');
  }
}