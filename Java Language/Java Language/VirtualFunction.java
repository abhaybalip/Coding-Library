class javaprogramming 
{
    public static void main(String[] args)
    {
        System.out.println("Main methode Invoked");
        Program my = new Program();

        my.display();

    }
}
class programmer
{
    void display()
    {
        System.out.println("Pragrammer is Running");
    }
}
class Program extends programmer
{
    void display()
    {
        System.out.println("Program is Running");
    }
}