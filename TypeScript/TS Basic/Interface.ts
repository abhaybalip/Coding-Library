// TS - Interface

interface Person {
    firstName: string
    lastName: string
    greet(): string
}

function greetPerson(person: Person) {
    return `Hello, ${person.firstName} ${person.lastName}!`
}

const john: Person = {
    firstName: "John",
    lastName: "Doe",
    greet() {
        return `Hi there! My name is ${this.firstName} ${this.lastName}`
    },
}

console.log(greetPerson(john))
console.log(john.greet())

interface Rectangle {
    height: number,
    width: number
}

const rectangle: Rectangle = {
    height: 20,
    width: 10
}

