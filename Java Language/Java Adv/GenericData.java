// java - generic data
// generic class similar to template in cpp
public class GenericData{
    public static void main(String[] args){
        GenericClass<Integer> t = new GenericClass();
        t.setData(10);
        t.getData();
    }
}
class GenericClass <T>{
    T Data;
    void setData(T Data){
        this.Data = Data;
    }
    void getData(){
        System.out.println("Data : "+Data);
    }
}