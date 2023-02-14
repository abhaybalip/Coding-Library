class VirtualFunction{
    public static void main(String[] args){
        B b = new B();
        b.display();
    }
}
abstract class A{
    abstract void display();
}
class B extends A{
    public void display(){
        System.out.println("virtual function is is Running");
    }
}