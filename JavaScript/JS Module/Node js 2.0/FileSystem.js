// Node js - File System

function print(msg){
    console.log(msg)
}
print('Hello World')

const fs = require('fs')

fs.readFile('input.txt','utf-8',function(err,data){
    if(err){
        print('Error : '+err)
    }else{
        print('File Data : \n'+data.toString())
    }
})

data = 'Hello\n This data is written by node js \n'
fs.writeFile('output.txt',data,(err)=>{
    if(err){
        print('Error occurred'+err)
    }else{
        print('Data written to the file')
    }
})

// open file in asynchronous

fs.open('input.txt','r+',function(err,data){
    if(err){
        print('Error : '+err)
    }else{
        fs.cop
    }
})
