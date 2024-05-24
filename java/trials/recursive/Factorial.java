import java.util.Scanner;
public class Factorial {
    public static int factorial(int n) {
        // Base case: factorial of 0 is 1
        if (n == 0) {
            return 1;
        }
        // Recursive case: factorial of n is n * factorial(n - 1)
        else {
            return n * factorial(n - 1);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number whose factorial you intend to get: ");
        int number = scanner.nextInt();
        int result = factorial(number);
        System.out.println("Factorial of " + number + " is: " + result);
        scanner.close();
    }
}
