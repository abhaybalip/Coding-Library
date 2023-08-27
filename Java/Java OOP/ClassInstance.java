class ClassInstance {
    public static void main(String[] args) {
        System.out.println("main methode invoked");

        Bank cmp = new Bank();

        cmp.setdata("sbi", 25, 20);
        cmp.getdata();

        Bank our = new Bank();
        our.setdata("hdfc", 20, 25);
        our.getdata();
    }
}

class Bank {
    private String name;
    private int customer;
    private int asset;

    public void setdata(String argname, int argcustomer, int argasset) {
        name = argname;
        customer = argcustomer;
        asset = argasset;
    }

    public void getdata() {
        System.out.println("Bank Name :" + name + "Number of customer :" + customer + "Total Assets : " + asset);
    }
}