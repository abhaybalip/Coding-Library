class javaprogram{
    public static void main(String[] args) {
        System.out.println("main methode invoked");
        
        samsung s = new samsung();
        s.phonecall();
        s.camera();
    }
}
abstract class smartphone{
    void phonecall(){} ;
    void camera(){};
}
class samsung extends smartphone{
    void phonecall(){
        System.out.println("phonecall is on");
    }
    void camera(){
        System.out.println("camera is on");
    }
}