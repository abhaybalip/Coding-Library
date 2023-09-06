// Node js - Stream

// Types : 

// Readable  : This stream is used for read operations.
// Writable  : This stream is used for write operations.
// Duplex    : This stream can be used for both read and write operations.
// Transform : It is type of duplex stream where the output is computed according to input.

// Each type of stream is an Event emitter instance 

// Data   : This event is fired when there is data available to read.
// End    : This event is fired when there is no more data available to read.
// Error  : This event is fired when there is any error receiving or writing data.
// Finish : This event is fired when all data has been flushed to underlying system.

function print(msg){
    console.log(msg)
}

const fs = require('fs')

var read_stream = fs.createReadStream('input.txt')
var write_stream = fs.createWriteStream('output.txt')

read_stream.setEncoding('utf-8')

data = ''
// read stream : events 

read_stream.on('data',function(chunk){
    data += chunk;
});
read_stream.on('end',function(){
    print(data)
});
read_stream.on('error',function(err){
    print(err.stack);
});


// write stream :

write_stream.write(data,'UTF8');

// end of stream
write_stream.end()

write_stream.on('finish',function() {
    console.log("Write completed.");
});

write_stream.on('error',function(err){
   console.log(err.stack);
});