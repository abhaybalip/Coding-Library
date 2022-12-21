// java - pascles triangle
import java.util.Scanner;
class myclass 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner (System.in);
        System.out.println("Lets make star triangle"+"Enter no of Rows");
        int row = sc.nextInt();
        
        for(int i=1; i<=row ;i++)
        {
            for(int s=1;s<=(row-i);s++)
            {
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++)
            {
                System.out.print(j);
            }
            for(int k=i-1;k>0;k--)
            {
                System.out.print(k);
            }

            System.out.println("");
        }        
    }
}
