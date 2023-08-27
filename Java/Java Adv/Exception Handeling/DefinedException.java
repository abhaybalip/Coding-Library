public class DefinedException {
    public float inverse(int num) throws Custom_Exception {
        return (1 / num);
    }

    public static void main(String[] args) {
        try {
            System.out.println(divide(0));
        } catch (Exception e) {
            // TODO: handle exception
            System.out.println("Error Occured !");
        }
    }
}

public class Custom_Exception extends Exception {
    public Custom_Exception(String Message) {
        super(Message);
    }
}