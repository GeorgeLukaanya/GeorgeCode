// Superclass
class Animal {
    // Method to be overridden
    public void sound() {
        System.out.println("Animal makes a sound");
    }
}

// Subclass Dog
class Dog extends Animal {
    // Overriding the sound method
    @Override
    public void sound() {
        System.out.println("Dog barks");
    }
}

// Subclass Cat
class Cat extends Animal {
    // Overriding the sound method
    @Override
    public void sound() {
        System.out.println("Cat meows");
    }
}

public class DynamicBindingExample {
    public static void main(String[] args) {
        Animal myAnimal;  // Reference of type Animal

        // Pointing the reference to a Dog object
        myAnimal = new Dog();
        myAnimal.sound();  // Output: Dog barks (determined at runtime)

        // Pointing the reference to a Cat object
        myAnimal = new Cat();
        myAnimal.sound();  // Output: Cat meows (determined at runtime)
    }
}
