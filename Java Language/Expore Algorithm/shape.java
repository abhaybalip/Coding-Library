// java - shape
import java.util.Scanner;
class program
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Main Methode Invoked");
        Circle c = new Circle();
        Rectangle r = new Rectangle();

    }
}
interface shape 
{
    public int Area();
    public int Perimeter();
}
class Circle implements shape
{
    Scanner sc = new Scanner(System.in);
    int radius;
    Circle()
    {
        System.out.println("Enter Radius of Circle");
        radius = sc.nextInt();
        System.out.println("The Perimeter of Circle is : "+Perimeter()+"\nThe Area of Circle is : "+Area());
    }
    public int Perimeter()
    {
        return (int)(2*3.14*radius);
    }
    public int Area()
    {
        return (int)(3.14*radius*radius);
    }
}
class Rectangle implements shape
{
    Scanner sc = new Scanner(System.in);
    int length,breadth;
    Rectangle()
    {
        System.out.println("Enter Length & Breadth of Rectangle");
        length = sc.nextInt();
        breadth = sc.nextInt();
        System.out.println("The Perimeter of Rectangle is : "+Perimeter()+"\nThe Area of Rectangle is : "+Area());

    }
    public int Perimeter()
    {
        return (2*(length+breadth));
    }
    public int Area()
    {
        return (length*breadth);
    }
}