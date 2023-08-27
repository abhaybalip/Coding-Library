// java - Aggregation
public class Aggregation {
    public static void main(String[] args) {
        Address a = new Address(43, "Mumbai", "India");
        Student s = new Student("MySelf", 03);
        s.getAddress(a);
        s.DisplayData();
    }
}

class Student {
    String Name;
    int RollNO;
    Address add;

    Student(String Name, int RollNO) {
        this.Name = Name;
        this.RollNO = RollNO;
    }

    void DisplayData() {
        System.out.println(RollNO + " " + Name);
    }

    void getAddress(Address a) {
        this.add = a;
        System.out.println("Address Saved : ");
        System.out.println(a.Country + "\n" + a.City + " " + a.pin);
    }
}

class Address {
    int pin;
    String City;
    String Country;

    Address(int pin, String City, String Country) {
        this.City = City;
        this.Country = Country;
        this.pin = pin;
    }

    void DisplayData() {
        System.out.println(Country + "\n" + City + " " + pin);
    }
}