class Address {
    String city;

    public Address(String city) {
        this.city = city;
    }

    // Deep clone for Address
    protected Address clone() {
        return new Address(this.city); // Return a new instance of Address
    }
}

class Person implements Cloneable {
    String name;
    Address address;

    public Person(String name, String city) {
        this.name = name;
        this.address = new Address(city);
    }

    // Deep copy
    @Override
    protected Object clone() throws CloneNotSupportedException {
        Person cloned = (Person) super.clone();
        cloned.address = this.address.clone();  // Clone the referenced Address object
        return cloned;
    }
}

public class DeepCloneExample {
    public static void main(String[] args) throws CloneNotSupportedException {
        // Create an original Person object
        Person person1 = new Person("John", "New York");

        // Clone person1 (deep copy)
        Person person2 = (Person) person1.clone();

        // Display values before modifying the address
        System.out.println("Before modification:");
        System.out.println("person1 address: " + person1.address.city);
        System.out.println("person2 address: " + person2.address.city);

        // Modify the address of person2
        person2.address.city = "Los Angeles";

        // Display values after modifying the address
        System.out.println("\nAfter modification:");
        System.out.println("person1 address: " + person1.address.city);  // This will not change
        System.out.println("person2 address: " + person2.address.city);
    }
}
