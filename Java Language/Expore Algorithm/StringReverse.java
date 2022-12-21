// java - string reverse
import java.util.Scanner;
class javaprogram
{
    public static void main(String[] args) 
    {
        String str = "yahba";
        int size = str.length();
        String str2="";
        int i=0;
        while(i<size)
        {
            str2 = str.charAt(i) + str2;
            i++;
        }
        System.out.println(str2);

    }
}