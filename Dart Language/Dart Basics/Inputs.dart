// Dart - Inputs

import 'dart:io';

void main(List<String> args) {
  print('Enter random data : ');
  var data = stdin.readLineSync();

  print('Entered data = $data');

  print('Enter random data : ');
  var data1 = stdin.readByteSync();
  print('Entered data : $data1');
  
}