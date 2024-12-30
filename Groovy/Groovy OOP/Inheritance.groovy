// Groovy - OOP - Inheritance

class A {
    void displayA() {
        println "This is class A"
    }
}

class B extends A {
    void displayB() {
        println "This is class B"
    }
}

class C extends B {
    void displayC() {
        println "This is class C"
    }
}

def objC = new C()
objC.displayA()
objC.displayB()
objC.displayC()
