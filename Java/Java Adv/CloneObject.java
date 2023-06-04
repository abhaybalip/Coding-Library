// java - object clone 
class CloneSample implements Cloneable {
    int Number;
    String Name;
    CloneSample(int Number,String Name){
        this.Number = Number;
        this.Name = Name;
    }
    public void Display(){
        System.out.println("Name : "+Name + " Number : "+ Number);
    }
    public static void main(String[] args){

        try{
            CloneSample c1 = new CloneSample(420,"SherlokHolmes");
            c1.Display();
            CloneSample c2 = (CloneSample)c1.clone();
            c2.Display();
        } catch (Exception e){
            System.out.println("Exception Occured !");
        }
    }
}