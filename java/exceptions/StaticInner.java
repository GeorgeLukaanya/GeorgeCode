class OuterClass {
    private static String outerStaticField = "Outer Static Field";

    // Static nested class
    static class StaticNestedClass {
        public void printStaticOuterField() {
            System.out.println("Outer static field: " + outerStaticField);
        }
    }
}

public class StaticInner {
    public static void main(String[] args) {
        OuterClass.StaticNestedClass nested = new OuterClass.StaticNestedClass();
        nested.printStaticOuterField();
    }
}
