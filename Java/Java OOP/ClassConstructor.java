// java - class constructor
class ClassConstructor {
    public static void main(String[] args) {
        YT_Channel yt = new YT_Channel("MyChannel", "Me", 0);
        yt.display();
    }
}

class YT_Channel {
    String name;
    String owner;
    int subs;

    YT_Channel(String argname, String argowner, int argsubs) {
        name = argname;
        owner = argowner;
        subs = argsubs;
    }

    void display() {
        System.out.println("Channel Name : " + name + "Channel Owner :" + owner + " : Subscribers Count" + subs);
    }
}