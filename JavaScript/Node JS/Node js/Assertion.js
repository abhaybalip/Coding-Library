// Node js - Assertion
function print(msg){
    console.log(msg)
}

const assert = require('assert')

var b = true
assert(b==true,'value is not true')

assert.ok(true,'true value no error ')

var num = [1,2,3]
var num1 = [1,2,3]

assert.equal(num,num1,'value is not equal')

assert.deepEqual(num,num1,'Value is not equal')