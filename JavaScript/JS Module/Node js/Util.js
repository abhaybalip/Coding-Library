// Node js - 
const print = (params) => console.log(params)
const util = require('util')

str = util.format('hello %s welcome','my-self')
print(str)

str = util.inspect({id:1,name:'my-self'})
print(str+'\n'+typeof(str))

print(util.isArray([0,1,2,3]))

print(util.isDate(new Date()))

print(util.isError(new Error))

print(util.isRegExp(/expression/))