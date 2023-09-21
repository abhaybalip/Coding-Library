// Node js - DNS

const print = (params) => console.log(params)

const dns = require('dns')

print('servers: ' + dns.getServers())

// dns look-up
dns.lookup('facebook .com', 6, (err, address, family) => {
    if (err) print('error occured: ' + err)
    else print('address: ' + address + '\nfamily: ' + family)
})

print('')

// dns resolving
dns.resolve('google.com', (err, addresses) => {
    if (err) {
        print('error: ' + err)
    } else {
        print('addresses: ' + addresses)
    }
})

print('')

dns.resolveAny('facebook.com', (err, addresses) => {
    if (err) {
        print('error: ' + err)
    } else {
        print('addresses 2: ' + addresses.map((item)=>{
            print(item)
        }))
    }
})