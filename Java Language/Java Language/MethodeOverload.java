class javaprogramming 
{

    // Methode Overloading By data Type

    public static void name(int x,int y) 
    {
        int a = (x+y);
        System.out.println(a+"\t int type is executed");
    }

    public static void name(float x,float y) 
    {
        float a = (x+y);
        System.out.println(a+"\t float type executed");
    }

    // Methode overloading by number of parametre
    public static void sum(int a,int b,int c) 
    {
        int ans = a+b+c;
        System.out.println(ans+"3 no sum methode invoked");
    }

    public static void sum(int a,int b) 
    {
        int ans = a+b;
        System.out.println(ans+"2 no sum methode invoked");
    }

    // Ambiguity

    public static void display() 
    {
        System.out.println("First Methode in Invoked");
    }

    public static void display() 
    {
        System.out.println("Second methode is Invoked");
    }

    public static void main(String[] args)
    {
        name(2, 3);
        sum(2, 3);
        sum(2,3 ,4 );
        display();


    }
}
