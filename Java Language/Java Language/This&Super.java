class javaprogram
{
    public static void main(String[] args) 
    {
        System.out.println("main methode invoked");

        global c = new global(30,'a');
        c.display();
    }
}

class local
{
    int i=25;
    char c='a';

}

class global extends local
{
    int i;
    char c;

    global(int i,char c)
    {
        this.i = i;
        this .c = c;
    }

    void display()
    {
        System.out.println("stored data:"+super.i +", "+ super.c);
    }
}