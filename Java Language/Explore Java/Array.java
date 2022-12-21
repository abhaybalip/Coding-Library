// java - Array
import java.util.Scanner;
public class Array {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        // array object declaration
        int arr[] = new int[10];
        for(int i=0;i<10;i++){
            arr[i] = i*5;
            System.out.print(arr[i]+" ");
        }
        
        // data accessing - using index number inside square box
        int num = arr[4];

        arr[5] = 0;
    }
}