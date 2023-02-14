// java - ControlStatement
import java.util.Scanner;
public class ControlStatement{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a Number : ");
        int num = sc.nextInt();

        if(num%2==0){
            System.out.println("Even Number");
        }
        else{
            System.out.println("Odd Number");
        }

        System.out.println("Table of "+num);
        int i = 1;
        while(i<11){
            System.out.println(num+" "+i+" = "+num*i);
            i++;
        }

        for(int j=1;j<11;j*=10){
            System.out.println(num*j);
        }
        sc.close();
    }
}