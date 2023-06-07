// Node js - Buffer 

function print(msg){
    print(msg)
}

var bf = new Buffer(100)

bf.write('Hello, this is buffer !')

print('Buffer Length : '+bf.length)

for(i=0;i<bf.length;i++){
    print(bf[i])
}