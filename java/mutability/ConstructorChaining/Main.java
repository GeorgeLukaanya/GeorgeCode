//Demonstrating same class chaining
class Employee {
    String name;
    int id;
    String department;

    // Constructor with no parameters
    public Employee() {
        this("Unknown", 0, "Unknown"); // Chaining to constructor with three parameters
        System.out.println("Default constructor called");
    }

    // Constructor with one parameter
    public Employee(String name) {
        this(name, 0, "Unknown"); // Chaining to constructor with three parameters
        System.out.println("Constructor with one parameter called");
    }

    // Constructor with two parameters
    public Employee(String name, int id) {
        this(name, id, "Unknown"); // Chaining to constructor with three parameters
        System.out.println("Constructor with two parameters called");
    }

    // Constructor with three parameters
    public Employee(String name, int id, String department) {
        this.name = name;
        this.id = id;
        this.department = department;
        System.out.println("Constructor with three parameters called");
    }

    void displayDetails() {
        System.out.println("Name: " + name + ", ID: " + id + ", Department: " + department);
    }
}

public class Main {
    public static void main(String[] args) {
        Employee emp1 = new Employee();           // Calls the default constructor
        emp1.displayDetails();

        Employee emp2 = new Employee("John");     // Calls constructor with one parameter
        emp2.displayDetails();

        Employee emp3 = new Employee("Jane", 101); // Calls constructor with two parameters
        emp3.displayDetails();

        Employee emp4 = new Employee("Alice", 102, "HR"); // Calls constructor with three parameters
        emp4.displayDetails();
    }
}
