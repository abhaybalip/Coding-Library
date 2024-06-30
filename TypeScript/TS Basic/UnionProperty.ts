// TS - Union Property 

var a: number | string = '10'

console.log(a)

interface User {
    name: string
    contact: { email: string } | { phone: string }
}

var u: User = {
    name: 'name',
    contact: { email: 'myemail', phone: '' }
}

console.log(u.contact)
