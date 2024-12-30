// Groovy - OOP - Encapsulation

class Data {
    private int count
    private String data

    Data(int count,String data){
        this.count = count
        this.data = data
    }

    public String getData(){
        return this.data
    }
    public int getCount(){
        return this.count
    }
    protected void setInfo(int count,String data){
        this.count = count
        this.data = data
    }
}

Data d = new Data(count=1,data="string")

println d.getData()
println d.getCount()
