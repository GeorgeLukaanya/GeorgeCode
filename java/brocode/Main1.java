import java.util.Scanner;

public class Main1 {
    // This proram caluclates the hypotenuse of a triangle.
    public static void main(String[] args) {
        double x, y, z;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the side x of the rectangle: ");
        x = scanner.nextDouble();
        System.out.println("The value of side x is " + x);

        System.out.println("Enter the side y of the triangle:");
        y = scanner.nextDouble();
        System.out.println("The value of side y is " + y);

        z = Math.sqrt((x * x) + (y * y));
        System.out.printf("\nThe value of the hypotenuse is %.2f\n", z);

        scanner.close();

    }
}
