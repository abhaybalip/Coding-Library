class javalearning
{
    public static void main(String[] args)
    {
        System.out.println("main methode invoked");
        University mumbai = new University("BombayUniversity","DrVinodPatil");

    }
}

class University 
{
    static String name ;
    static String principal ;

    University(String aname,String aprincipal)
    {
        name = aname;
        principal = aprincipal;

        System.out.println("The Principal of "+name+" is "+principal);
    }

}