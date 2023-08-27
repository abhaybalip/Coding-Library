// java - interface
class Interface {
    public static void main(String[] args) {
        Square s = new Square(10);
        System.out.println("Area = " + s.getArea());
        System.out.println("Perimeter = " + s.getPerimeter());
    }
}

// interface declaration
interface Shape {
    int side = 4;

    public int getPerimeter();

    public int getArea();
}

class Square implements Shape {
    int lenght;

    Square(int lenght) {
        this.lenght = lenght;
        System.out.println("square is created");
    }

    public int getPerimeter() {
        return side * lenght;
    }

    public int getArea() {
        return lenght * lenght;
    }
}