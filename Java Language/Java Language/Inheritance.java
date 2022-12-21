class programming
{
    public static void main (String[] args)
    {
        System.out.println("Main Methode Invoked");
        Dog A = new Dog();
        A.play();
    }
}
class Animal
{
    Animal()
    {
        System.out.println("Animal is here");
    }

    public void play()
    {
        System.out.println("Animal is Playing");
    }
}
class Dog extends Animal
{
    Dog()
    {
        System.out.println("Dog is Here");
    }
    public void play()
    {
        System.out.println("Dog is Playing");
    }
}

// Here we see that constructor of parent methode is also invoked
// function over-riding takes place