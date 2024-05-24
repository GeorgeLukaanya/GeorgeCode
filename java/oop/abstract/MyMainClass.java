//Abstract class
abstract class Animal {
    // Abstract method(has no body)
    public abstract void animalSound();

    // Regular method
    public void sleep() {
        System.out.println("Zzz");
    }
}

// Subclass (inherits from animal)
class Pig extends Animal {
    public void animalSound() {
        // The animal sound is provided here
        System.out.println("The pig says: wee wee");
    }
}

public class MyMainClass {
    public static void main(String[] args) {
        Pig myPig = new Pig();// Creating a pig object
        myPig.animalSound();
        myPig.sleep();
    }
}
