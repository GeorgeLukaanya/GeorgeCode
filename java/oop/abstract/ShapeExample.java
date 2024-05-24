// Abstract class with two abstract methods
abstract class Shape {
    // Abstract method to calculate area
    abstract double calculateArea();

    // Abstract method to display information about the shape
    abstract void displayInfo();
}

// Concrete subclass - Circle
class Circle extends Shape {
    double radius;

    // Constructor
    public Circle(double radius) {
        this.radius = radius;
    }

    // Implementation of abstract method to calculate area for a circle
    @Override
    double calculateArea() {
        return Math.PI * radius * radius;
    }

    // Implementation of abstract method to display information about the circle
    @Override
    void displayInfo() {
        System.out.println("Circle - Radius: " + radius + ", Area: " + calculateArea());
    }
}

// Concrete subclass - Rectangle
class Rectangle extends Shape {
    double length;
    double width;

    // Constructor
    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    // Implementation of abstract method to calculate area for a rectangle
    @Override
    double calculateArea() {
        return length * width;
    }

    // Implementation of abstract method to display information about the rectangle
    @Override
    void displayInfo() {
        System.out.println("Rectangle - Length: " + length + ", Width: " + width + ", Area: " + calculateArea());
    }
}

// Example usage
public class ShapeExample {
    public static void main(String[] args) {
        // Creating instances of concrete subclasses
        Circle circle = new Circle(5.0);
        Rectangle rectangle = new Rectangle(4.0, 6.0);

        // Calling methods on the objects
        circle.displayInfo();
        rectangle.displayInfo();
    }
}
