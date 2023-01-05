// java - Annotation
// annotations tells compiler about process
class Annotation{
    public static void main(String[] args){
        B b = new B();
        b.test();
        b.test2();
        b.test3();
    }
}
class A{
    void test(){

    }
}
class B extends A{
    // override anotation
    @Override
    void test(){
        System.out.println("Hello World");
    }
    @Deprecated
    void test2(){
        Integer i = new Integer(10);
        System.out.println(i);
    }
    @SuppressWarnings("No return !")
    int test3(){
        return 0;
    }
}