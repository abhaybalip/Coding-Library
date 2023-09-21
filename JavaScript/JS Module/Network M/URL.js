// Node js - 
function print(params) {
    console.log(params)
}

const url = require('url')

// define url
const link = new url.URL('https://google.com/')

// url components
print(link.hash)
print("host: "+link.host+"\nhostname: "+link.hostname)
print("href: "+link.href)
print("pathname: "+link.pathname)
print("port: "+link.port)
print("protocol: "+link.protocol)
print("search params: "+link.searchParams)