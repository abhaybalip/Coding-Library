class javalearning
{
    public static void main(String[] args)
    {
        System.out.println("main methode invoked");

        youtubechannel my = new youtubechannel("AshishChanchalani","Ashish",10) ;
    }
}

class youtubechannel
{
    String name;
    String owner;
    int subs;
    youtubechannel(String argname,String argowner,int argsubs)
    {
        name = argname;
        owner = argowner;
        subs = argsubs;

        System.out.println("Channel Name : "); System.out.println(name);
        System.out.println("Channel Owner :"); System.out.println(owner);
        System.out.println(subs); System.out.print(" : Subscribers Count");
    }
}