// Groovy - OOP - Class

class A {
    public int n;

    A(int n){
        this.n = n
    }

    int get(){
        return this.n;
    }
}

A a = new A(n=10)

println a.get()