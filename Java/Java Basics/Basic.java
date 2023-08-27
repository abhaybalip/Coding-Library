
// java - Basic
import java.util.Scanner;

class JavaBasic {
    public static void main(String[] args) {
        // printing
        // println() for new line otherwise print()
        System.out.print("HELLO");

        int number; // int variable as sample
        Scanner sc = new Scanner(System.in); // initialise scanner

        System.out.println("ENTER A NUMBER"); // ask for integer input

        // store input in variable
        number = sc.nextInt();

        System.out.println(number);

        // data types :
        // int ,char ,float ,double ,long ,boolean
        // string ,array

        int i = 10;
        long l = 2;
        float f = 3.14F;
        double d = 100.25D;

        System.out.println(i + l + f + d);

        String name = "";
        int[] array = { 1, 2, 3 };

        System.out.println(name + array[0]);

        // operator :
        // unary ,binary ,trinary
        // arithamatic ,logical ,assignment ,bitwise ,relational
        // operator works same in all language

        // type casting
        // double to int
        double num = 10;
        int num2 = (int) num;
        System.out.println("double => int " + num2);
        sc.close();
    }
}