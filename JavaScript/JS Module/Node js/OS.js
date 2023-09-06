// Node js - OS
const { opendir } = require('fs')
const os = require('os')

console.log('OS Objects : ')
// console.log(os)

// Example :
function print(msg){
    console.log(msg)
}

print('os Architeture : '+os.arch())

print('cpu info : '+os.cpus())

print(os.platform())

print(os.machine())