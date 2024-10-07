class Animal {
    public void makeSound() {
        System.out.println("Animal sound");
    }
}

public class AnonymousInner {
    public static void main(String[] args) {
        // Anonymous inner class
        Animal animal = new Animal() {
            @Override
            public void makeSound() {
                System.out.println("Dog barks");
            }
        };
        animal.makeSound();
    }
}
