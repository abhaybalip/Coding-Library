// TS - Access Modifier 

class A {
    public v1: number;
    private v2: string;
    protected v3: boolean;

    constructor(v1: number, v2: string, v3: boolean) {
        console.log('values initiated');
        this.v1 = v1;
        this.v2 = v2;
        this.v3 = v3;
    }


    display() {
        console.log(`${this.v1} ${this.v2} ${this.v3}`)
    }
}

var a = new A(1, 'string', true)
a.display()
