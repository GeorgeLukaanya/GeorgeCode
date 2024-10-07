class Animal{
    String animal;

    Animal(String animal){
        this.animal = animal;
        System.out.println("Superclass constructor for " + animal);
    }
}
class Dog extends Animal{
    Dog(){
        super("Dog");
        System.out.println("This is the sublass constructor");
    }
}
class Chaining{
    public static void main(String[] args) {
        Animal obj = new Dog();
    }
}