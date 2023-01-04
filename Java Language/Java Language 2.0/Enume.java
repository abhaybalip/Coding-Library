// java - Enume
class Enume{
    public static void main(String[] args){
        Test t = new Test();
        t.Test1();
        System.out.println("--------------------------------------------------------");
        t.Test2();
    }
}
enum Week{
    Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
}
enum Size{
    small("This is small size"),
    medium("This is medium size"),
    large("This is large size");
    Size(String size){
        System.out.println("Size variable created");
    }
}
class Test{
    void Test1(){
        Week w = Week.Monday;
        System.out.println("Week Monday = "+w);

        int day = w.ordinal();
        System.out.println("Monday = "+day);

        int diff = Week.Monday.compareTo(Week.Sunday);
        System.out.println("Difference of Monday & Sunday = "+diff);

        String d = w.toString();
        System.out.println(d);

        System.out.println(Week.valueOf("Monday"));

        Week[] wArray = Week.values();
        System.out.println(wArray);
        for (int i = 0; i < wArray.length; i++) {
            System.out.print((wArray[i])+" ");
        }
        System.out.println();
    }

    public void Test2(){
        Size s = Size.small;
        System.out.println(s);

    }
}