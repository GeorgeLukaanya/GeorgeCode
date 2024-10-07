class OuterClass {
    private String outerField = "Outer Field";

    // Inner class
    class InnerClass {
        public void printOuterField() {
            System.out.println("Outer field: " + outerField);
        }
    }

    public void createInnerInstance() {
        InnerClass inner = new InnerClass();
        inner.printOuterField();
    }
}

public class NonStaticInner {
    public static void main(String[] args) {
        OuterClass outer = new OuterClass();
        outer.createInnerInstance();
    }
}
