// Superclass
class Animal {
    void sound() {
        System.out.println("Some generic animal sound");
    }
}

// Subclass
class Dog extends Animal {
    @Override
    void sound() {
        System.out.println("Bark! Bark!");
    }
}

// Subclass
class Cat extends Animal {
    @Override
    void sound() {
        System.out.println("Meow! Meow!");
    }
}

public class Main {
    public static void main(String[] args) {
        // Superclass reference, but refers to a Dog object
        Animal myDog = new Dog();
        // Superclass reference, but refers to a Cat object
        Animal myCat = new Cat();

        // Dynamic Binding: The actual method invoked is determined by the object, not the reference type
        myDog.sound(); // Output: Bark! Bark!
        myCat.sound(); // Output: Meow! Meow!
    }
}
