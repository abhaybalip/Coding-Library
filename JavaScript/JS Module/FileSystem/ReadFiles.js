// Node js - File system

function print(params) {
    console.log(params)
}

const fs = require('fs')

fs.readFile('Text.txt', 'utf8', (err, data) => {
    if (err) {
        print('error in reading file: ' + err)
    } else {
        print('file opened')
        print('file data: ' + data)

        var buffer = Buffer.alloc(10);
        const fd = fs.openSync('Text.txt', 'r')

        fs.read(fd, buffer, 0, 10, null, (readErr, bytesRead, readBuffer) => {
            if (readErr) {
                print('error in reading buffer: ' + readErr)
            } else {
                print('buffer data: ' + readBuffer.toString('utf8', 0, bytesRead))
            }

            // Close the file descriptor after reading
            fs.close(fd, (closeErr) => {
                if (closeErr) {
                    print('error in closing file: ' + closeErr)
                } else {
                    print('file closed')
                }
            })
        })
    }
})