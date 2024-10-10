class A {
    public void work() {
        System.out.println("He is working");
    }

    // Static nested class
    static class B {
        public void walk() {
            System.out.println("He is walking");
        }
    }
}

class NestedStatic {
    public static void main(String[] args) {
        A obj = new A();  // Creating an object of the outer class
        obj.work();  // Calling method from the outer class

        // Correct way to instantiate the static nested class
        A.B obj1 = new A.B();  // No need to create an instance of A for a static class
        obj1.walk();  // Calling method from the static nested class
    }
}
