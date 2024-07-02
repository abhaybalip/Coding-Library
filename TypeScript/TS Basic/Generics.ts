// TS - Generics 

class Pair<T, U> {
    first: T
    second: U

    constructor(first: T, second: U) {
        this.first = first
        this.second = second
    }

    getPairInfo() {
        console.log(`Pair: (${this.first}, ${this.second})`)
    }
}

const numberStringPair = new Pair(1, "String value")
const stringBooleanPair = new Pair("Hello", true)

numberStringPair.getPairInfo()
stringBooleanPair.getPairInfo()

