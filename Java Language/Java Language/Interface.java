class javaprogram 
{
    public static void main(String[] args) 
    {
        System.out.println("main methode invoked");
        sbi a = new sbi();
        a.declareprofit(1.25F);
    }
}
interface bank
{
    String unit = "BillionDollar";
    void declareprofit();
}
class sbi implements bank
{
    float profit;
    public void declareprofit(float profit)
    {
        this.profit = profit;
        System.out.println("Profit made this year is "+ profit+"\t"+unit);
    }
} 
// nested interface
interface university
{
    void results(int year,float result);
    interface college 
    {
        void permission(boolean pms);
    }
}
class college implements university
{
    public void results(int year,float result)
    {
        System.out.println("In Education Year "+year+ " college result is "+result+" %");
    }

    public void permission(boolean pms)
    {
        if(pms==true)
        System.out.println("college has permission");
        else
        System.out.println("college has no permission");
    }
}
// interface extension
interface line 
{
    void draw();
}
interface circle extends line
{
    void stretch();
}
class paper implements circle 
{
    public void draw()
    {
        System.out.println("line drawed");
    }
    public void stretch()
    {
        System.out.println("circle stretched");
    }
}