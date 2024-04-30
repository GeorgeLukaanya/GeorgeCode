import java.util.Scanner;

public class FullTimeStaff extends Staff {
    double monthlyBasicSalary;
    double netMonthlyPay;
    double statutoryDeduction;

    void staffDetails(double monthlyBasicSalary) {
        statutoryDeduction = 0.2 * monthlyBasicSalary;
        netMonthlyPay = monthlyBasicSalary - statutoryDeduction;
        System.out.printf("\n%s's monthly pay is %.2f \n", StaffName, netMonthlyPay);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        FullTimeStaff fullTimeStaff1 = new FullTimeStaff();
        System.out.println("Full time employee salary Calculator");
        System.out.println("Enter the name of the staff: ");
        fullTimeStaff1.StaffName = scanner.nextLine();
        System.out.println("Enter the staff member's number: ");
        fullTimeStaff1.StaffNo = scanner.nextLine();
        System.out.println("Enter the staff member's age: ");
        fullTimeStaff1.StaffAge = scanner.nextInt();
        System.out.println("Enter the staff member's monthly basic salary: ");
        fullTimeStaff1.monthlyBasicSalary = scanner.nextDouble();

        scanner.nextLine();
        fullTimeStaff1.staffDetails();
        fullTimeStaff1.staffDetails(fullTimeStaff1.monthlyBasicSalary);

        scanner.close();
    }
}
