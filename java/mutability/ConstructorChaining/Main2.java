//Still a demonstration of using this() keyword for chaining
class Car {
    String make;
    String model;
    int year;
    String color;

    // Default constructor
    public Car() {
        this("Unknown", "Unknown", 2000, "White"); // Calls the parameterized constructor
        System.out.println("Default constructor called");
    }

    // Constructor with one parameter
    public Car(String make) {
        this(make, "Unknown"); // Calls the constructor with four parameters
        System.out.println("Constructor with make parameter called");
    }

    // Constructor with two parameters
    public Car(String make, String model) {
        this(make, model, 2000, "White"); // Calls the constructor with four parameters
        System.out.println("Constructor with make and model parameters called");
    }

    // Constructor with four parameters
    public Car(String make, String model, int year, String color) {
        this.make = make;
        this.model = model;
        this.year = year;
        this.color = color;
        System.out.println("Parameterized constructor with four parameters called");
    }

    // Method to display car details
    public void displayDetails() {
        System.out.println("Car Details: " + make + " " + model + " (" + year + "), Color: " + color);
    }
}

public class Main2 {
    public static void main(String[] args) {
        // Creating different objects using various constructors
        Car car1 = new Car(); // Calls the default constructor
        car1.displayDetails(); // Output: Unknown Unknown (2000), Color: White

        Car car2 = new Car("Toyota"); // Calls the constructor with one parameter
        car2.displayDetails(); // Output: Toyota Unknown (2000), Color: White

        Car car3 = new Car("Honda", "Civic"); // Calls the constructor with two parameters
        car3.displayDetails(); // Output: Honda Civic (2000), Color: White

        Car car4 = new Car("Ford", "Mustang", 2022, "Red"); // Calls the constructor with four parameters
        car4.displayDetails(); // Output: Ford Mustang (2022), Color: Red
    }
}
