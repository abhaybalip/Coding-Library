// java - AccessModifier
public class AccessModifier {
    public static void main(String[] args) {
        A a = new A();
        a.setData(100, "Hello");
        a.getData();
        // System.out.println(a.num+" "+a.str);
        // a.display();
    }
}

class A {
    // private data
    private int num;
    private String str;

    void setData(int num, String str) {
        this.num = num;
        this.str = str;
    }

    void getData() {
        System.out.println("num = " + this.num + "\nstr = " + this.str);
        display();
    }

    // private methode
    private void display() {
        System.out.println("Private methode of class A executed");
    }
}