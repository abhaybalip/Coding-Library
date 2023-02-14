// java - lambda expression
// lambda expression is made using interface with only one abstract methode
import java.lang.FunctionalInterface;
public class LambdaExpression{
    public static void main(String[] args) throws ClassNotFoundException{
       MyInterface i = ()->{
        return 22/7;
       };
       System.out.println("Value of pi = "+(float)i.getPi());

       MyInterface2 i2 = (int num)->{
        int result = 1;
        while(num>0){
            result *= num;
            num--;
        }
        return result;
       };
       System.out.println("factorial of 5 = "+i2.Factorial(5));
    }
}
@FunctionalInterface
interface MyInterface{
    float getPi();
}
@FunctionalInterface
interface MyInterface2{
    int Factorial(int num);
}