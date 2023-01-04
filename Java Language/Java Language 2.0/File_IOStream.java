// java - File Management
import java.io.*;
class File_IOStream{
    public static void main(String[] args) throws IOException {        
        // Fileinputstream input and output classes are used for input and output operation
        // these class are imported from java.io. package
        try{
            // creat txt file of name test and save in same folder
            // or provide the address of file
            FileInputStream fin = null;
            fin = new FileInputStream("test.txt");
            int index;
            while((index = fin.read()) != -1){
                System.out.print((char)index);
            }
            fin.close();
        }
        catch(Exception e){
            System.out.println("error occured !");
        }
        
        // write into external file
        FileOutputStream fout = new FileOutputStream("test2.txt");
        String txt = "Hello World \nThis file content is written using java file output stram class \nThank You";
        int index = 0;
        while(txt.charAt(index)!='\0'){
            fout.write(txt.charAt(index));
            index++;
        }
        fout.close();
    }
}