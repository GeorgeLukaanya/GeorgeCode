class Parent {
    public void staticMethod() {
        System.out.println("Static method in Parent");
    }
}

class Child extends Parent {
    public void staticMethod() {
        System.out.println("Static method in Child");
    }
    public void bark(){
        System.out.println("barks ");
    }
}

public class Main5 {
    public static void main(String[] args) {
        // Reference to Parent, but pointing to Child
        Parent p = new Child();
        
        // Call static method
        p.staticMethod();  // Outputs: Static method in Parent
        p.bark();
        
        // Directly calling static methods using class names
        //Parent.staticMethod(); // Outputs: Static method in Parent
        //Child.staticMethod();  // Outputs: Static method in Child
    }
}
