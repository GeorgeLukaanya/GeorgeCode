class Q {
    void display() {
        System.out.println("Display from Q");
    }
    void sing(){
        System.out.println("George sang a song.");
    }
}

class K extends Q {
    @Override
    void display() {
        System.out.println("Display from K");
    }
    void state(){
        System.out.println("George left early.");
    }
}

public class Main2 {
    public static void main(String[] args) {
        Q obj = new K(); // No error, upcasting
        obj.display(); // This will call the `display()` method from class `K` due to runtime polymorphism
        obj.sing();
        //obj.state();
    }
}
