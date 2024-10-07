public class GenericMethods {

    // A generic method that prints any type of object
    public <T> void print(T item) {
        System.out.println(item);
    }

    // A generic method that compares two objects of the same type and prints the result
    public <T> void compare(T first, T second) {
        if (first.equals(second)) {
            System.out.println("The two items are equal.");
        } else {
            System.out.println("The two items are not equal.");
        }
    }

    public static void main(String[] args) {
        GenericMethods example = new GenericMethods();

        // Using the generic method with different types
        example.print(123);           // Integer
        example.print("Hello");       // String
        example.print(45.67);         // Double

        // Using the compare method with the same type
        example.compare(123, 123);    // Integer
        example.compare("Hello", "Hello"); // String
        example.compare(45.67, 45.67); // Double

        // Using the compare method with different types (will not compile)
        // example.compare("Hello", 123); // Uncommenting this line will cause a compile-time error
    }
}
