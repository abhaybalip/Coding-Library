// java - this and super keyword function
public class This_Super {
    public static void main(String[] args) {
        B b = new B();
        b.Display();

        // parent to child declaration
        A a = new B();
        System.out.println(a.num + " " + a.str);

        // for child to parent casting can be used
        B b2 = (B) new A();
        b2.Display(); // doesn work
    }
}

class A {
    int num = 10;
    String str = "Hello";
}

class B extends A {
    int num = 100;
    String str = "hi";

    void Display() {
        System.out.println("parent class data :");
        System.out.println("num = " + super.num + "\t str = " + super.str);

        System.out.println("child class data :");
        System.out.println("num = " + this.num + "\t str = " + this.str);
    }
}