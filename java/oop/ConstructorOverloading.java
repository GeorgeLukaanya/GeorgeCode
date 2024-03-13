import javax.sound.midi.Soundbank;

public class ConstructorOverloading {
    private String name;

    public ConstructorOverloading() {
        this.name = "no name";
    }

    public ConstructorOverloading(String name) {
        this.name = name;
    }

    public void printName() {
        System.out.println(this.name);
    }

    public static void main(String[] args) {
        ConstructorOverloading obj1 = new ConstructorOverloading("George");
        obj1.printName();

        ConstructorOverloading obj2 = new ConstructorOverloading();
        obj2.printName();

    }
}
