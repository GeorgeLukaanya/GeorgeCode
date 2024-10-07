class OuterClass {
    void outerMethod() {
        int localVar = 10;

        // Local inner class
        class LocalInnerClass {
            void printLocalVar() {
                System.out.println("Local variable: " + localVar);
            }
        }

        LocalInnerClass localInner = new LocalInnerClass();
        localInner.printLocalVar();
    }
}

public class LocalInner {
    public static void main(String[] args) {
        OuterClass outer = new OuterClass();
        outer.outerMethod();
    }
}
