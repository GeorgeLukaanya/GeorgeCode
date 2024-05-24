import java.util.Scanner;

public class Sacco {
    static int option;
    String registrationNumber;
    double depositAmount;
    double balance;
    double withdrawAmount;

    void Deposit() {
        System.out.println("Enter the acccount balance: ");
        balance = scanner.nextDouble();
        System.out.println("Enter the deposit amount: ");
        depositAmount = scanner.nextDouble();
        balance = balance + depositAmount;
        System.out.println("New balance: " + balance);
        System.out.println("Choose an option:\n 1. Withdraw\n 2. Deposit more\n 3. Quit.");
    }

    void Withdraw() {
        System.out.println("Enter the acccount balance: ");
        balance = scanner.nextDouble();
        System.out.println("Enter the needed amount: ");
        withdrawAmount = scanner.nextDouble();
        if (balance > withdrawAmount) {
            System.out.println("\t**Receipt**");
            System.out.println(withdrawAmount + " has been withdrawn. ");
            balance = balance - withdrawAmount;
            System.out.println("New balance: " + balance);
        } else {
            System.out.println("Account xxx Has insufficient Funds.");
            System.out.println("Choose an option:\n 1. Withdraw\n 2. Deposit more\n 3. Quit.");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Sacco sacco = new Sacco();
        String menu = "Choose an option:\n 1. Withdraw\n 2. Deposit more\n 3. Quit.";
        System.out.println(menu);
        System.out.println("Enter your option: ");
        option = scanner.nextInt();
        System.out.println("You have chosen option " + option);

        if (option == 1) {
            sacco.Withdraw();
        } else if (option == 2) {
            sacco.Deposit();
        } else if (option == 3) {
            scanner.close();
            return;
        } else {
            System.out.println("Invalid option");
        }
        scanner.close();
    }
}
