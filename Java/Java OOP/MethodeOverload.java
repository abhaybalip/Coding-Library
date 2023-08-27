// java - MethodeOverload
public class MethodeOverload {
    public static void main(String[] args) {
        Math m = new Math();
        System.out.println(m.sum(2, 3));
        System.out.println(m.sum(1, 4, 5));
    }
}

class Math {
    // methodes with same name and different parameter
    public int sum(int x, int y) {
        return x + y;
    }

    public int sum(int x, int y, int z) {
        return x + y + z;
    }
}