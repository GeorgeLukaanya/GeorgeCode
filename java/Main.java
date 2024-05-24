class Animal {
    void makeSound() {
        System.out.println("Animals make some form of sound.");
    }
}

class Dog extends Animal {
    void makeSound() {
        System.out.println("A dog barks");
    }
}

class Main {
    public static void main(String[] args) {
        Animal animal1 = new Animal();
        Animal dog1 = new Dog();

        animal1.makeSound();
        dog1.makeSound();
    }
}