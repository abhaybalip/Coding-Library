// java - is factorial
class javaprogram{
    static int factorial(int num){
        int ans = 1;
        if(num>=0){
            for(int i=1;i<=num;i++){
                ans = ans * i;
            }
        }
        else{
            System.out.println("Invalid Number");
        }
        return ans;
    }
    static void isfact(int num){
        int x = factorial(num);
        Boolean ans = false;
        for(int i=1;i<num;i++){
            if(x == i){
                ans = true;
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