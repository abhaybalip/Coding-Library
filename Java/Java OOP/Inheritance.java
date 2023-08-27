// java - Inheritance
public class Inheritance {
    public static void main(String[] args) {
        System.out.println("Hello World");
        Car c = new Car();
        c.SetData("MYSelf", "Black", 10);
        c.DisplayData();
    }
}

// parent class
class Vehicle {
    String Owner;
    String color;
    float Price;

    void SetData(String Owner, String color, float Price) {
        this.Owner = Owner;
        this.color = color;
        this.Price = Price;
    }

    void DisplayData() {
        System.out.println("Vehicle Owner : " + this.Owner);
        System.out.println("Vehicle Detail : \ncolor " + this.color + "\nprice " + this.Price);
    }
}

// child class
class Car extends Vehicle {
    // overrides parent class methode
    @Override
    void DisplayData() {
        System.out.println("Car Owner : " + this.Owner);
        System.out.println("Car Detail : \ncolor " + this.color + "\nprice " + this.Price);
    }
}