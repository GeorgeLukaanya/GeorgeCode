//This is Constructor overloading
public class Person {
    int age;
    String name;

    Person(int age, String name) {
        this.age = age;
        this.name = name;
    }

    Person(String name) {
        this.name = name;
        this.age = 50;
    }

    public static void main(String[] args) {
        Person person1 = new Person(21, "George");
        Person person2 = new Person("John");
        System.out.println("My name is " + person1.name + " and I am " + person1.age + ".");
        System.out.println("My name is " + person2.name + " and I am " + person2.age + ".");
    }
}
