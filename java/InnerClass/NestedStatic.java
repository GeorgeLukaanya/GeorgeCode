class OuterClass {
    private static String staticMessage = "Hello from Static Nested Class!";

    // Static nested class
    static class StaticNestedClass {
        void displayMessage() {
            System.out.println(staticMessage);
        }
    }
}

class NestedStatic {
    public static void main(String[] args) {
        OuterClass.StaticNestedClass nested = new OuterClass.StaticNestedClass(); // Instantiate static nested class
        nested.displayMessage();
    }
}
