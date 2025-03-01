// TS - Inheritance 

class A {
    public a: number = 10
    private p: number = 93
    protected b: number = 22
}

class B extends A {
    constructor() {
        super()
    }

    display() {
        console.log(`${this.a} ${this.b} `)
    }
}

