// java - File String Reader & Writer
import java.io.StringReader;
import java.io.StringWriter;
public class String_RW {
    public static void main(String[] args){
        String str = "Hello,Written by programmer";
        char[] data = new char[50]; 
        try{
            // string reader and writer class
            StringReader input = new StringReader(str);
            StringWriter output = new StringWriter();

            // write data to output objet
            output.write("Hello,Written by programmer");
            // read data to char array
            System.out.println(output);
            input.read(data);
            int index = 0;
            while(data[index]!='\0'){
                System.out.print(data[index]);
                index++;
            }
        }catch(Exception e){
            System.out.println("Error Occured !");
        }
    }
}