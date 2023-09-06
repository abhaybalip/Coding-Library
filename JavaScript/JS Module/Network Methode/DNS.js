// Node js - DNS 

const dns = require('dns')

function print(msg){
    console.log(msg)
}

// print('dns object : '+dns)

// Example :
print(dns.getServers())