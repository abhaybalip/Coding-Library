// java -  File PrintWriter
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
public class File_PrintWrite {
    public static void main(String[] args) throws IOException{
        String data = "Hello from java program";
        try{
            // Writer class object
            PrintWriter output = new PrintWriter("test.txt");
            // writes daat to file
            output.write(data);
            output.close();

            boolean autoFlush = false;
            // Another methode of printwriter
            FileWriter file = new FileWriter("test2.txt");
            PrintWriter pw = new PrintWriter(file,autoFlush);

            pw.write(data);

        }catch(Exception e){
            System.out.println("Error Occured !");
        }
    }
}