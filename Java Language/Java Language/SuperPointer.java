class program
{
    public static void main(String[] args) 
    {
        System.out.println("main methode invoked");
        dog d = new dog();
        d.who();
        d.methode();

    }
}
class animal
{
    String color="black";
    void who()
    {
        System.out.println("animal is here \t"+ color);
    }
}
class dog extends animal
{
    String color="white";

    void who()
    {
        System.out.println("dog is here \t"+color);
    }
    
    // methode which makes parent methode super
    void methode()
    {
        super.who();
    }
    

}