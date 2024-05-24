//This program is to demonstrate the use of method overloading....
public class Calculator {
    // Method to add two integers
    public int add(int a, int b) {
        return a + b;
    }

    // Overloaded method to add two doubles
    public double add(double a, double b) {
        return a + b;
    }

    // Overloaded method to concatenate two strings
    public String add(String a, String b) {
        return a + b;
    }

    public static void main(String[] args) {
        Calculator calculatorObject = new Calculator();

        // Using different versions of the add method
        int sum1 = calculatorObject.add(5, 3); // Calls add(int, int)
        double sum2 = calculatorObject.add(2.5, 3.7); // Calls add(double, double)
        String concat = calculatorObject.add("Hello, ", "world!"); // Calls add(String, String)

        System.out.println("Sum of integers: " + sum1);
        System.out.println("Sum of doubles: " + sum2);
        System.out.println("Concatenated string: " + concat);
    }
}
