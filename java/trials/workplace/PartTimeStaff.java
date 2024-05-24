import java.util.Scanner;

public class PartTimeStaff extends Staff {
    int numberOfHoursWorked;
    final int ratePerHour = 2500;
    double payPerMonth;
    final double tax = 0.3;
    double monthlyPay;

    void staffDetails(int numberOfHoursWorked) {
        payPerMonth = numberOfHoursWorked * ratePerHour * 30;
        monthlyPay = payPerMonth - (tax * payPerMonth);
        System.out.printf("\n%s's monthly salary is %.2f\n", StaffName, monthlyPay);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        PartTimeStaff partTimeStaff1 = new PartTimeStaff();

        System.out.println("Enter the name of the staff member: ");
        partTimeStaff1.StaffName = scanner.nextLine();
        System.out.println("Enter the number of the staff memeber: ");
        partTimeStaff1.StaffNo = scanner.nextLine();
        System.out.println("Enter the age of the staff memeber: ");
        partTimeStaff1.StaffAge = scanner.nextInt();
        System.out.println("Enter the number of hours the staff works per day: ");
        partTimeStaff1.numberOfHoursWorked = scanner.nextInt();

        scanner.nextLine();
        System.out.println("\t**These are the details of the staff member**");
        partTimeStaff1.staffDetails();
        partTimeStaff1.staffDetails(partTimeStaff1.numberOfHoursWorked);
        scanner.close();
    }
}
