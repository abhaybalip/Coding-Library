// Node js - File system

function print(params) {
    console.log(params)
}

const fs = require('fs')

let path = 'C:\\Users\\abhay\\Downloads'

fs.exists(path,(exists)=>{
    if(exists) print('path exists')
    else print('path doesnt exists')
})

if (fs.existsSync(path)){
    print('path exists')
}