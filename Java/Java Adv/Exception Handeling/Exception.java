
// java - ExceptionHandeling
import java.io.IOException;
import java.io.InputStream;

public class ExceptionHandeling {
    static int divide(int x, int y) {
        return x / y;
    }

    public static void main(String[] args) {
        // try this code block
        try {
            System.out.println(divide(1, 0));
        } // run catch block if error occured
        catch (Exception e) {
            System.out.println("Error Occured !"+e.getMessage());
        }

        // example 2
        try {
            Scanner sc = new Scanner(System.in);
        } catch (Exception e) {
            System.out.println("Scanner not imported !");
        } finally {
            System.out.println("Finally block executes always");
        }

        // throws defined exception
        ErrorClass a = new ErrorClass();
        System.out.println(a.test());
    }
}