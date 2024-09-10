class Animal{
    void makeSound(){
        System.out.println("Generic Animal Sound");
    }
}

class Dog extends Animal{
    void makeSound(){
        System.out.println("Bark! Bark!");
    }
    void fetch(){
        System.out.println("Fetching the ball.");
    }
}
public class DownCasting {
    public static void main(String[] args) {
        Animal animal = new Dog();
        animal.makeSound();//calls dog's makesound() method

        //Downcasting(animal to Dog
        Dog dog = (Dog) animal;
        dog.makeSound();//calls dog's makesound() method
        dog.fetch();//calls dog's fetch() method
    }
}
