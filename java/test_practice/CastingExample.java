// Parent class
class Animal {
    void makeSound() {
        System.out.println("Animal makes a sound");
    }
}

// Child class
class Dog extends Animal {
    void makeSound() {
        System.out.println("Dog barks");
    }

    void fetch() {
        System.out.println("Dog is fetching the ball");
    }
}

public class CastingExample {
    public static void main(String[] args) {
        // Upcasting: Dog is upcast to Animal
        Animal animal = new Dog();  // Upcasting
        animal.makeSound();         // Calls Dog's makeSound() method due to dynamic binding

        // Downcasting: Animal reference is downcast back to Dog
        if(animal instanceof Dog){
            Dog dog = (Dog) animal;     // Downcasting
            dog.fetch();   
        }             // Now we can call fetch(), which is specific to Dog
    }
}
