// Node js - Path
// The Node.js path module is used to handle and transform files paths

function print(msg){
    console.log(msg)
}
print('Hi')

const path = require('path')

var pt = 'C:\Users\abhay\Documents\GitHub\Language-Library\JavaScript\Node JS\Basic\Path.js'
var pt1 = 'C:\Users\abhay\Documents\GitHub\Language-Library\JavaScript\Node JS\Basic\Buffer.js'

var p = path.normalize(pt)
print('Normalised path \t: '+p)

print('Is Absolute \t: '+path.isAbsolute(pt))

print('Dir name \t: '+path.dirname(pt))

print('Relative path \t: '+path.relative(pt,pt1))