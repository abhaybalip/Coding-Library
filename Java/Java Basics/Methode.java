// java - Methode/ function
class Methode {
    static void Test() {
        System.out.println("Methode Test of main class executed !");
    }

    public static void main(String[] args) {
        System.out.println("Main metode executed !");
        Test();
        A a = new A();
        a.Test();

        int s = a.sum(2, 3);
        int f = a.Factorial(5);
        System.out.println(s + " " + f);
    }
}

class A {
    void Test() {
        System.out.println("Methode Test of class A executed !");
    }

    // return type
    int sum(int x, int y) {
        int result = x + y;
        return result;
    }

    // recursion
    int Factorial(int x) {
        if (x > 0)
            return x * Factorial(x - 1);
        else
            return 1;
    }
}