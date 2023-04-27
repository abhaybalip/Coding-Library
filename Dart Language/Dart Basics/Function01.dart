// Dart - Anonymous Function
void main(List<String> args) {
  Outer_Function();

}

void Outer_Function(){
  print('Outer Function Running !');

  void Inner_Function(){
    print('Inner Function Running !');
  }

  Inner_Function();
}