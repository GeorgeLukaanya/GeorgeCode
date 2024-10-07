class Animal {
    void makeSound() {
        System.out.println("Animal makes sound");
    }
}

class Dog extends Animal {
    void makeSound() {
        System.out.println("Dog barks");
    }
    
    void fetch() {
        System.out.println("Dog fetches the ball");
    }
}

public class Main3 {
    public static void main(String[] args) {
        // Upcasting: A Dog object is treated as an Animal
        Animal animal = new Dog();  // Upcasting (implicit)
        
        // Now, to call subclass-specific methods, we need to downcast
        if (animal instanceof Dog) {
            Dog dog = (Dog) animal;  // Downcasting (explicit)
            dog.fetch();  // Now we can call fetch(): Output: Dog fetches the ball
        }
    }
}
