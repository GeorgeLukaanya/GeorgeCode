interface MyInterface {
    static void staticMethod() {
        // Call the private method
        privateMethod();
    }

    private static void privateMethod() {
        System.out.println("This is a private method");
    }
}

public class interface2 {
    public static void main(String[] args) {
        // Call the static method from the interface
        MyInterface.staticMethod();
    }
}
