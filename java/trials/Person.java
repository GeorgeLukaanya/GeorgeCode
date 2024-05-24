//This code is to demionstrate constructor methods...
// Person.java
public class Person {
    private String name;
    private int age;

    // Constructor without parameters (default constructor)
    public Person(String name) {
        this.name = name;
        /*this.age = 0;*/
    }

    // Constructor with parameters
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Getter methods for name and age
    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    // Main method for testing
    public static void main(String[] args) {
        // Creating objects using different constructors
        Person person1 = new Person("George"); // Using default constructor
        Person person2 = new Person("John", 30); // Using parameterized constructor

        // Displaying information about the persons
        System.out.println("Person 1:");
        System.out.println("Name: " + person1.getName());
        System.out.println("Age: " + person1.getAge());
        System.out.println();

        System.out.println("Person 2:");
        System.out.println("Name: " + person2.getName());
        System.out.println("Age: " + person2.getAge());
    }
}
