// java - star triangle
class javalearning{
    public static void main(String[] args){
        int row =5;
        for(int i=1;i<=row;i++){
            for(int s=0;s<=(row-i);s++){
                System.out.print(" ");
            }
            for(int k=1;k<=i;k++){
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
}