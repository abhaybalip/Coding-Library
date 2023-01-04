// java - FileReader - InputFile Reader
import java.io.Reader;
import java.io.Writer;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOError;
class File_ReaderWriter{
    public static void main(String[] args) throws IOError{
        try{
            char[] array = new char[50];
            Writer output = new FileWriter("test.txt");
            Reader input = new FileReader("test2.txt");

            // writing data to file
            output.write("Hello this data is written by writer class");

            System.out.println("File state : "+input.ready());
            // read from file to array
            input.read(array);
            int index = 0;
            while(array[index]!='\0'){
                System.out.print(array[index]);
                index++;
            }
            input.close();
            output.close();
        }catch(Exception e){
            System.out.println("error occured");
        }
    }
}