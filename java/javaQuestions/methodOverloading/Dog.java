public class Dog extends Animal {
    String breed;
    void makeSound(){
        System.out.println("A dog barks");
    }

    public static void main(String[] args){
        Dog dog1 = new Dog();
        Animal animal1 = new Animal();
        
        dog1.makeSound();
        animal1.makeSound();
    }
}
