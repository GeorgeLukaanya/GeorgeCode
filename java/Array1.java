import java.util.Scanner;

public class Array1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] names = new String[3];
        System.out.println("Enter three(3) names: ");

        for (int i = 0; i < 3; i++) {
            names[i] = scanner.nextLine();
        }

        // using a normal for loop
        System.out.println("Using a for loop");
        for (int j = 0; j < names.length; j++) {
            System.out.println(names[j]);
        }

        // using a for each loop
        System.out.println("using a for each loop");
        for (String x : names) {
            System.out.println(x);
        }
        scanner.close();
    }
}
