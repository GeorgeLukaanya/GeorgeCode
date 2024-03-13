import java.util.Scanner;

public class Main3 {
    // This program demonstrates if statements and logical operators
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("You are playing a game, press q or Q to quit.");
        String response = scanner.next();

        if (response.equals("q") || response.equals("Q")) {
            System.out.println("You quit the game. ");
        } else {
            System.out.println("You are still playing the game.");
        }
        scanner.close();
    }

}
