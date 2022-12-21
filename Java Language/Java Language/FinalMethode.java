class javaprogram
{
    public static void main(String[] args) 
    {
        System.out.println("main methode invoked");
        sample2 s = new sample2();
        s.display();
    }
}
class sample 
{
    final void display()
    {
        System.out.println("displsy methode invoked");
    }
}
class sample2 extends sample
{
    void display()
    {
        System.out.println("2nd display methode invoked");
    }
}