// Node js - File system

function print(params) {
    console.log(params)
}

const fs = require('fs')

// open file & apply callback function to file descriptor - fd
fs.open('Text.txt', 'w', (err, fd) => {
    if (err) {
        print('error in opening file: ' + err)
    } else {
        const buffer = Buffer.from('text for file')
        // Write the buffer data to the file starting at offset 0 and writing the entire buffer
        fs.write(fd, buffer, 0, buffer.length, (err, written) => {
            if (err) {
                print('error in writing data: ' + err)
            } else {
                print('data written to file')
                print('bytes written ' + written)
            }
            // Close the file after writing.
            fs.close(fd, (err) => {
                if (err) {
                    print('error in closing file: ' + err)
                } else {
                    print('file closed')
                }
            })
        })
    }
})