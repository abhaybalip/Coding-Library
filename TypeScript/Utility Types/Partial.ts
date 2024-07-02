// TS - Partial Utility 

interface User {
    name: string
    age: number
    address?: string
}

const partialUser: Partial<User> = { name: "Alice" }

console.log(partialUser)
