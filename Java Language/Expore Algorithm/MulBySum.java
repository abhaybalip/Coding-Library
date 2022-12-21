// java - multiplication by addition
class program
{
    public static void product(int x,int y) 
    {
        int ans=0;
        if(y>x)
        {
            int temp = x;
            x = y;
            y = temp;
        }
        for(int i=0;i<=y;i++)
        {
            ans += x;
        } 
        System.out.println("The product of "+ x +" & "+ y + " : "+ans);
    }
    public static void main(String[] args) 
    {
        product(2,5);
    }
}