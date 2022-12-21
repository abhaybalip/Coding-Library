class javalearning 
{
    
    public static void main(String[] args) 
    {
        System.out.println("welcome");
        student me = new student("abhay", 03, 10.0);
        
    }
}
public class student
    {
        String name;
        int rollno;
        float pointer;

        student(String argname,int argrollno,float argpointer)
        {
            name = argname;
            rollno = argrollno;
            pointer = argpointer;

            System.out.println("Name :" + name + "RollNo : " + rollno + "\n pointer :"+ pointer);
        }

    
    }