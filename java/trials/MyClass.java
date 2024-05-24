public class MyClass {
    // Private method accessible only within MyClass
    private static void privateMethod() {
        System.out.println("This is a private method.");
    }

    // Static method that calls a private method
    public static void staticMethod() {
        // Calling the private method within a static method
        privateMethod();
    }

    public static void main(String[] args) {
        // Calling the static method
        staticMethod();  // This will output: This is a private method.
    }
}
