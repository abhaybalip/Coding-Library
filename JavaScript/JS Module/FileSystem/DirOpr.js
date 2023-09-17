// Node js - File system

function print(params) {
    console.log(params)
}
const fs = require('fs')
const fp = fs.promises

try{
    fp.opendir('c:/users/abhay/Documents/')
    print('directory opened')
}catch(error){
    print('error: '+error)
}