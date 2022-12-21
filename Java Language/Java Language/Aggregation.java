class javaprogramming
{   
    public static void main(String[] args) 
    {
        System.out.println("main methode invoked");
        Address cmp = new Address("Mumbai","MH","IND",400043);
        Student me = new Student("abhay",03,10,cmp);

        me.display();
    }
}
class Address 
{
    String city,state,country;
    int pincode;

    public Address(String acity,String astate,String acountry,int apincode)
    {
        city = acity;
        state = astate;
        country = acountry;
        pincode = apincode;
    }

}
class Student
{
    String name;
    int id;
    float pointer;
    Address address;

    public Student(String aname,int aid,float apointer,Address add)
    {
        name = aname;
        id = aid;
        pointer = apointer;
        address = add;
    }

    public void display()
    {
        System.out.println("Student Name : "+name+"id no.:"+id);
    }
}