// Node js - File system

function print(params) {
    console.log(params)
}
const fs = require('fs')

fs.truncate('Text.txt',(err)=>{
    if(err){
        print('error: '+err)
    }else{
        print('no error')
    }
})