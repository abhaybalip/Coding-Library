// Dart - sync & Async

void main(List<String> args) {
  sync_example(5);
  printNumbersAsync(5);
}

// sync - executes function in block manner
// function is executed completely

sync_example(int num) sync*{
  for(int i=0;i<=num;i++){
    print(num);
  }
}

// A Future is typically associated with an asynchronous function 
// and is used to indicate that the function will eventually produce a result
// The result can be a value of any type or an error

Future<void> printNumbersAsync(int num) async {
  for (int i=1;i<=num;i++) {
    await Future.delayed(Duration(seconds: 1));
    print(i);
  }
}