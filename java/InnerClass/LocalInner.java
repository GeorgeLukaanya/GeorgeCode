class OuterClass {
    void display() {
        // Local inner class within a method
        class LocalInnerClass {
            public void show() {
                System.out.println("Hello from Local Inner Class!");
            }
        }
        LocalInnerClass local = new LocalInnerClass(); // Instantiate local inner class
        local.show();
    }
}

class LocalInner {
    public static void main(String[] args) {
        OuterClass outer = new OuterClass();
        outer.display();
    }
}
