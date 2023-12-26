// Dart - Generator Function
//  functions that generates values multiple times slowly 
// sync* - indicate that function is synchronous generator
// yield - yield keyword is used in the context of generators to produce a sequence of values
//         It allows a function to pause its execution and return a value to the caller
//         without terminating the function entirely.
void main(List<String> args) {
  print("Hi \nOdd No Generator function : ");
  print(OddNumbers(10));
}

// Iterable return type - sequence of iterable values
Iterable<int> OddNumbers(int limit) sync*{
  while(limit>0){
    if(limit%2!=0){
      yield limit;
    }
    limit--;
  }
}