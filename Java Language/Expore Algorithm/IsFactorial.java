// java - is factorial
class javaprogram
{
    static int factorial(int num)
    {
        int ans = 1;
        if(num>=0)
        {
            for(int i=1;i<=num;i++)
            {
                ans = ans * i;
            }
        }
        else 
        {
            System.out.println("Invalid Number");
        }
        return ans;
    }
    static void isfact(int num)
    {
        boolean ans;
        int x = factorial(num);
        for(int i=1;i<num;i++)
        {
            if(x == i)
            {
                isfact = true;
            }
            else
            {
                isfact = false;
            }
        }
        System.out.println(ans);
    }
    public static void main(String[] args) 
    {
        System.out.println("Welcome"); 
        factorial(2);   
        isfact(120);
    }
}