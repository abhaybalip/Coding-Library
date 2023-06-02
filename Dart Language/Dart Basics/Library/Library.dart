library Library;

class Student{
  // late indicates that variable will be initialised later
  late int id;
  late String name;

  Student(int id,String name){
    this.id = id;
    this.name = name;
  }
  void info(){
    print('id : $id \tName : $name');
  }
}