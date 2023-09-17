// Node js - File system

function print(params) {
    console.log(params)
}

const fs = require('fs')

fs.open('Text.txt', 'w', (err, fd) => {
    if (err) {
        print('error: ' + err)
    } else {
        print('file opened')

        const data = 'data to write in file';
        fs.write(fd, data, (writeErr, written, string) => {
            if (writeErr) {
                print('error in writing data: ' + writeErr);
            } else {
                print('data written to file');
                print('bytes written: ' + written);
            }
        })

        fs.close(fd)
    }
})