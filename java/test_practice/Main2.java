//This is to demonstrate constructor chaining 

class Animal{
    String name;
    Animal(){
        //this("Musheija");
        System.out.println("This is an animal supertype");
    }
    Animal(String name){
        this.name = name;
        System.out.println("The name of the animal is " + name);
    }
}

class Dog extends Animal{
    Dog(){
        super("Musheija");
        System.out.println("This is the dog subclass");
    }
}
class Main2 {
    public static void main(String[] args) {
        Animal obj = new Dog();
        //Dog obj2 = new Dog();
    }
}