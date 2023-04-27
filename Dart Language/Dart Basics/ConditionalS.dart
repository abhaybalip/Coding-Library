// Dart - Control Statement
void main(){
  bool b = true;
  if(b){
    print('true');
  }
  else{
    print('false');
  }

  int n = 10;
  while(n>0){
    print(n);
    n--;
  }

  for(int i=0;i<10;i++){
    print(i);
  }

  var l = [0,1,2,3,4];
  for(var i in l){
    print(i);
  }
}