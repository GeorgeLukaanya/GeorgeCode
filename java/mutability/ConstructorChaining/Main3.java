// Superclass: Vehicle
class Vehicle {
    String brand;
    int speed;

    // Superclass constructor with parameters
    public Vehicle(String brand, int speed) {
        this.brand = brand;
        this.speed = speed;
        System.out.println("Vehicle constructor called"+ speed  + brand);
    }

    public Vehicle(String brand) {
        this.brand = brand;
        //this.speed = speed;
        System.out.println("Vehicle constructor called " + brand);
    }

    // Method to display vehicle details
    void displayInfo() {
        System.out.println("Brand: " + brand + ", Speed: " + speed);
    }
}

// Subclass: Car
class Car extends Vehicle {
    String model;

    // Subclass constructor using super() to call the superclass constructor
    public Car(String brand, int speed, String model) {
        super("BMW", 360);
        //super("BMW");  // Calls the superclass (Vehicle) constructor
        this.model = model;
        System.out.println("Car constructor called");
    }

    // Method to display car details
    void displayCarInfo() {
        displayInfo();  // Calls the method from the superclass
        System.out.println("Model: " + model);
    }
}

public class Main3 {
    public static void main(String[] args) {
        // Create an object of Car and trigger the constructor chain
        Car myCar = new Car("Toyota", 120, "Corolla");

        // Display the car's details
        //myCar.displayCarInfo();
    }
}
