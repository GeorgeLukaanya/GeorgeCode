//This code is to demonstrate the use of method overloading with each method having different method bodies...
public class Printer {
    // Method to print an integer
    public void print(int number) {
        System.out.println("Printing integer: " + number);
    }

    // Overloaded method to print a double with specific precision
    public void print(double number, int precision) {
        System.out.printf("Printing double with precision %d: %.2f\n", precision, number);
    }

    // Overloaded method to print a string multiple times
    public void print(String text, int times) {
        for (int i = 0; i < times; i++) {
            System.out.println(text);
        }
    }

    public static void main(String[] args) {
        Printer printer = new Printer();

        // Using different versions of the print method
        printer.print(10); // Calls print(int)
        printer.print(3.14159, 2); // Calls print(double, int)
        printer.print("Hello", 5); // Calls print(String, int)
    }
}
