import java.util.Scanner;

import javax.sound.sampled.SourceDataLine;

public class Person{
    public static String pName;

public class Staff extends Person{
    public static String regNumber;
    public static double salary;
    public void printDetails(){
        System.out.printf("Hey %s , your salary is %f and your regNumber is %s", pName, regNumber, salary);
    }
}
    public static void main(){
        Scanner scanner = new Scanner(System.in);
        Staff s = new Staff();
        System.out.println("Enter your name: Mr./Ms. ");
        s.pName = scanner.nextLine();
        System.out.printf("Your name is %s", pName);
        scanner.nextLine();
        System.out.println("Enter your regNo: ");
        s.regNumber = scanner.nextLine();
        System.out.printf("Your registration number is %s", regNumber);
        scanner.nextLine();
        System.out.println("Enter your salary: Shs. ");
        s.salary = scanner.nextDouble();
        System.out.printf("Your name is %s", salary);
        scanner.close();


    }
}