import java.util.Scanner;

public class NonResident extends Guest {
    static int entranceFee;

    public void guestDetails(int entranceFee) {
        System.out.println("Entrance Fee: " + entranceFee);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        NonResident nonResident = new NonResident();
        System.out.println("Enter the guest details");
        System.out.println("Guest Name: ");
        nonResident.guestName = scanner.nextLine();
        System.out.println("Guest ID: ");
        nonResident.guestID = scanner.nextLine();
        System.out.println("The number of days spent: ");
        nonResident.numberOfDays = scanner.nextInt();
        System.out.println("The Entrance Fee: ");
        entranceFee = scanner.nextInt();
        nonResident.guestDetails();
        nonResident.guestDetails(entranceFee);
        scanner.nextLine();
        scanner.close();
    }
}