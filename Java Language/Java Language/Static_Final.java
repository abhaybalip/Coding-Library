// java - Static and Final Keyword
public class Static_Final{
    // static data
    static int num = 10;
    // final or constant data
    final int num2 = 100;
    // static methode
    static void test(){
        System.out.println("static code block executed");
    }
    // final methode - cannot be over ridden
    final public static void test2(){
        System.out.println("Final methode executed");
    }
    public static void main(String[] args) {
        test();
        test2();
    }
}