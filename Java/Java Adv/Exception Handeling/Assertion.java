// java - Assertion
class Assertion {
    public static void main(String[] args) throws AssertionError {
        boolean b = false;
        try {
            assert b;
            System.out.println("Try Block");
        } catch (Exception e) {
            System.out.println("Catch Block");
        }
    }
}