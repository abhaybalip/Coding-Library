// java - Buffered reader and writer
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
public class File_Buffered{
    public static void main(String[] args) throws IOException{
        try{
            char[] array = new char[50];
            // file reader and writer
            FileWriter file  = new FileWriter("test.txt");
            FileReader file2 = new FileReader("test2.txt");

            // buffered reader and writer
            BufferedWriter output = new BufferedWriter(file);
            BufferedReader input = new BufferedReader(file2);

            // write data to file
            output.write("Hello,this file is written by buffered writer class");
            // read data from file
            input.read(array);
            int index = 0;
            while(array[index]!='\0'){
                System.out.print(array[index]);
                index++;
            }
            System.out.println();

            // close files and methodes
            input.close();
            output.close();

        }catch(Exception e){
            System.out.println("Error Occured !");
        }
    }
}