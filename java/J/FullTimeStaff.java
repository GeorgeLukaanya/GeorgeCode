import java.util.Scanner;

public class FullTimeStaff extends Staff {
    double monthlyBasicSalary;
    double statutoryDeductions;

    void printDetails(double salary, double deductions) {
        double netSalary = salary - deductions;
        System.out.println("Net Salary: " + netSalary);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        FullTimeStaff obj = new FullTimeStaff();
        System.out.println("Name: ");
        obj.StaffName = scanner.nextLine();
        System.out.println("Number: ");
        obj.StaffNo = scanner.nextLine();
        System.out.println("Age: ");
        obj.StaffAge = scanner.nextInt();
        System.out.println("Basic salary: ");
        obj.monthlyBasicSalary = scanner.nextDouble();
        System.out.println("Statutory Deductions: ");
        obj.statutoryDeductions = scanner.nextDouble();
        scanner.nextLine();
        obj.printDetails();
        obj.printDetails(obj.monthlyBasicSalary, obj.statutoryDeductions);
        scanner.close();
    }
}
