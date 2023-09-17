// Node js - File system

function print(params) {
    console.log(params)
}
const fs = require('fs')
var data;

try {
    data = fs.readFileSync('Text.txt', { encoding: 'ascii', flag: 'r' })
    print('file data: '+data)
} catch (error) {
    print('error: '+error)
}

try {
    fs.writeFileSync('Text.txt',data)
} catch (error) {
    print('error: '+error)
}