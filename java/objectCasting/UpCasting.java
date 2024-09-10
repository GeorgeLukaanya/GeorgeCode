class Animal{
    void makeSound(){
        System.out.println("Generic animal sound");
    }
}

class Dog extends Animal{
    void makeSound(){
        System.out.println("Bark! Bark!");
    }
}


public class UpCasting {
    public static void main(String[] args) {
        Dog dog = new Dog();
        Animal animal = dog;//upcasting a dog
        animal.makeSound();//calls dog's makesound() method
    }
}
