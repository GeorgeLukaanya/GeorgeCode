import java.util.Scanner;
public class Sacco {
    static int option;
    String registrationNumber;
    static double depositAmount;
    static double balance;
    static double withdrawAmount;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Sacco sacco = new Sacco();
        String menu = "Choose an option:\n 1. Withdraw\n 2. Deposit more\n 3. Quit.";
        System.out.println(menu);
        System.out.println("Enter your option: ");
        option = scanner.nextInt();
        System.out.println("You have chosen option " + option);
        
        if(option == 1){
            System.out.println("Enter the acccount balance: ");
            balance = scanner.nextDouble();
            System.out.println("Enter the needed amount: ");
            withdrawAmount = scanner.nextDouble();
            if(balance > withdrawAmount){
                System.out.println("\t**Receipt**");
                System.out.println(withdrawAmount + " has been withdrawn. ");
                balance = balance - withdrawAmount;
                System.out.println("New balance: " + balance);
            }else{
                System.out.println("Account xxx Has insufficient Funds.");
                System.out.println(menu);
            }
        }else if(option == 2){
            System.out.println("Enter the acccount balance: ");
            balance = scanner.nextDouble();
            System.out.println("Enter the deposit amount: ");
            depositAmount = scanner.nextDouble();
            balance = balance + depositAmount;
            System.out.println("New balance: " + balance);
            System.out.println(menu);
        }else if(option == 3){
            return;
        }else{
            System.out.println("Invalid option");
        }
        scanner.close();
    }
}
