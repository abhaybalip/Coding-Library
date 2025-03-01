// TS - Class 

class A {
    constructor() {
        console.log('New instance of class A created')
    }
}

var a = new A()

class B {
    num: number
    constructor(num: number) {
        this.num = num
    }

    display() {
        console.log(this.num)
    }
}

var b = new B(10)
b.display()

