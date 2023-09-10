// Node js - Buffer
function print(params) {
    console.log(params)
}

// buffer creation
var buf = new Buffer([0,1,2,3,4])

print('buffer length: '+buf.length)
print('buffer byteOffSet: '+buf.byteOffset)
print('buffer byteLength: '+buf.byteLength)
print('buffer bytePerElement: '+buf.BYTES_PER_ELEMENT)
print(buf.toString('ascii'))

print('\n')

// buffer with fixed size
buf = Buffer.alloc(5)
buf.write('Hello ',"utf-8")

print(buf.toString())

print('\nWarning: \n')