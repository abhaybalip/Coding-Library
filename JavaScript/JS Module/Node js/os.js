// Node js - OS

function print(params) {
    console.log(params)
}

const os = require('os')

print(os.arch())
print(os.machine())
print(os.cpus())
print(os.freemem())
print(os.getPriority())
print(os.homedir())
print(os.hostname())