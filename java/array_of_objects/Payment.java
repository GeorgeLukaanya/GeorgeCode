import java.util.Scanner;

public class Payment{
    int numberOfDays;
    int rate;
    String name;

    int calculatePay(int days, int rate){
        return days*rate;
    }

    public Payment(int numberOfDays, int rate, String name){
        this.numberOfDays=numberOfDays;
        this.rate=rate;
        this.name=name;
    }

    public static void main(String[] args){
        Payment worker[] = new Payment[5];
        Scanner scanner = new Scanner(System.in);

        for(int i=0; i<worker.length; i++){
            System.out.println("Details for worker " + (i+1));
            System.out.println("Enter the name: ");
            String name = scanner.nextLine();
            System.out.println("Enter the number of days: ");
            int days = scanner.nextInt();
            System.out.println("Enter the rate: ");
            int rate = scanner.nextInt();
            scanner.nextLine();
            worker[i] = new Payment(days, rate, name); 
        }
        System.out.println("Captured details of workers. ");
        for(Payment x:worker){
            System.out.println("Worker name: " + x.name);
            System.out.println("Worker rate: " + x.rate);
            System.out.println("Worker number of days worked: " + x.numberOfDays);
            System.out.println("Worker totalPay: " + x.calculatePay(x.numberOfDays, x.rate));
        }
        scanner.close();
    }
}
