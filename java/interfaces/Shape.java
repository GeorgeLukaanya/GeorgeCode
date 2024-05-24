// Shape.java
public interface Shape {
    // Regular method declarations
    double getPerimeter();

    // Default method for calculating area
    default double getArea() {
        return 0.0; // Default implementation (to be overridden by concrete classes)
    }
}

