// java - calculator
import java.util.Scanner;
class Calculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Hello User\nEnter Two Numbers : ");
        float num1 = sc.nextFloat();
        float num2 = sc.nextFloat();
        System.out.println("Enter Operator : ");
        String op = sc.next();
        switch (op) {
            case "+" :{
                System.out.println("Answer = "+(num1+num2));
                break;
            }
            case "-" :{
                System.out.println("Answer = "+(num1-num2));
                break;
            }
            case "*" :{
                System.out.println("Answer = "+(num1*num2));
                break;
            }
            case "/" :{
                System.out.println("Answer = "+(num1/num2));
                break;
            }
            default:
                break;
        }
    }
}
