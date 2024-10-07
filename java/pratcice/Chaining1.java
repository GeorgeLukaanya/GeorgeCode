class Animal{
    String sound;
    int age;
    Animal(){
        System.out.println("This is an animal");
    }
    Animal(String sound){
        this("barks", 20);
        this.sound = sound;
        System.out.println("The animals makes " + sound);
    }
    Animal(String sound, int age){
        this.sound = sound;
        this.age = age;
        System.out.println("The animals makes " + sound + " and of age " + age);
    }
}

class Dog extends Animal{
    String breed;
    Dog(String sound, String breed){
        super(sound);
        this.breed = breed;
        System.out.println("This is a dog of type animal");
    }
}

public class Chaining1 {
    public static void main(String[] args) {
        Animal obj = new Dog("barks", "Podengo");
    }
}
