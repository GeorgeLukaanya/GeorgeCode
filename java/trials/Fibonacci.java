import java.util.Scanner;
public class Fibonacci {
    public static int fibonacci(int n) {
        // Base cases: Fibonacci of 0 and 1 are 0 and 1 respectively
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        }
        // Recursive case: Fibonacci of n is the sum of Fibonacci(n-1) and Fibonacci(n-2)
        else {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Upto what term should the series go?: ");
        int n = scanner.nextInt(); 
        System.out.println("Fibonacci sequence up to term " + n + ":");
        for (int i = 0; i < n; i++) {
            System.out.println(fibonacci(i) + " ");
        }
        System.out.println();
        scanner.close();
    }
}
