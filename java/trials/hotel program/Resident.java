import java.util.Scanner;

public class Resident extends Guest {
    double roomFee;
    static final int municipalFee = 30;

    public void guestDetails(double roomFee, int municipalFee) {
        System.out.println("Total Room Fee: $" + (numberOfDays * roomFee));
        System.out.println("Total Municipal Fee: $" + (municipalFee * numberOfDays));
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Resident resident = new Resident();
        System.out.println("Enter the guest details");
        System.out.println("Guest Name: ");
        resident.guestName = scanner.nextLine();
        System.out.println("Guest ID: ");
        resident.guestID = scanner.nextLine();
        System.out.println("The number of days spent: ");
        resident.numberOfDays = scanner.nextInt();
        System.out.println("The Room Fee: $");
        resident.roomFee = scanner.nextDouble();
        scanner.nextLine();
        resident.guestDetails();
        resident.guestDetails(resident.roomFee, municipalFee);
        scanner.close();
    }

}
