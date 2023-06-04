// java - ExceptionHandeling
import java.io.IOException;
import java.io.InputStream;
public class ExceptionHandeling {
    static int divide(int x,int y){
        return x/y;
    }
    public static void main(String[] args){
        // try this code block
        try{
            int num = divide(1, 0);
            System.out.println(num);
        }// run catch block if error occured
        catch(Exception e){
            System.out.println("Error Occured !");
        }

        // example 2
        try{
            Scanner sc = new Scanner(System.in);
        } catch (Exception e) {
            System.out.println("Scanner not imported !");
        }
        finally{
            System.out.println("Finally block executes always");
        }

        // throws defined exception
        ErrorClass a = new ErrorClass();
        System.out.println(a.test());
    }
}
class ErrorClass{
    int test() throws ArithmeticException{
        int n = 1/0;
        return n;
    }
    void filetest() throws IOException{
        fileInputStream fin = new fileInputStream("test.txt");
    }
}