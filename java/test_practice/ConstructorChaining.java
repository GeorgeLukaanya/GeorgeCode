class Animalz{
    String name;

    Animalz(){
        System.out.println("This is a default Constructor");
    }
    Animalz(String name){
        this();
        System.out.println("This is a constructor with a String:"+name);
    }
}

class Dogz extends Animalz{
    String breed;

    Dogz( String breed){
        super("Okema");
        this.breed = breed;
        System.out.println("This is an extended constructor for dog breed: "+breed);
    }
}
public class ConstructorChaining {
    public static void main(String[] args) {
        Dogz myDog = new Dogz("Sheperd");
    }
}
