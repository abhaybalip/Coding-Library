// java - class reflection
import java.lang.Class;
import java.lang.reflect.*;
class Reflection{
    public static void main(String[] args){
        System.out.println("Hello World");
        A a = new A();
        try{
            Class obj = a.getClass();
            Method[] md = obj.getDeclaredMethods();
            for(Method m : md){
                int n = m.getModifiers();
                System.out.println("Methode Name : "+m.getName());
                System.out.println("Methode Modifier : "+m.toString());
                System.out.println("Methode Return type : "+m.getReturnType() + '\n');
            }
        }catch(Exception e){
            System.out.println("Error Occured !");
        }
    }
}
class A{
    int integer;
    String str;
    void display(){

    }
    private void sample(){

    }
    public int test(){
        return 0;
    }
}