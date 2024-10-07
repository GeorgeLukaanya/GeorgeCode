// Base class
class Animal {
    void makeSound() {
        System.out.println("Animal makes a sound");
    }
}

// Derived class
class Dog extends Animal {
    void bark() {
        System.out.println("Dog barks");
    }
}

public class DowncastingExample {
    public static void main(String[] args) {
        // Create an object of Dog and assign it to an Animal reference
        Animal myAnimal = new Dog();

        // Downcasting
        //if (myAnimal instanceof Dog) {
            Dog myDog = (Dog) myAnimal;
            myDog.bark(); // Output: Dog barks
            
        //} else {
            //System.out.println("myAnimal is not an instance of Dog");
        //}
    }
}
