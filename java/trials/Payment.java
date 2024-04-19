import java.util.Scanner;

class Payment {
    int numberOfDays;
    String workerName;

    Payment(int numberOfDays, String workerName){
        this.numberOfDays = numberOfDays;
        this.workerName = workerName;
    }

    public double calculatePay(int rate, int numberOfDays){
        return rate * numberOfDays;
    }

    public static void main(String[] args){
        Payment workers[] = new Payment[5];
        Scanner scanner = new Scanner(System.in);
        final int rate = 50000;

        for(int i = 0; i<workers.length; i++){
            System.out.println("Details for worker : " + (i+1));
            System.out.println("Enter the worker's name: ");
            String workerName = scanner.nextLine();
            System.out.println("Enter the number of days worked:");
            int numberOfDays = scanner.nextInt();
            scanner.nextLine();
            workers[i] = new Payment(numberOfDays, workerName);
        }
        System.out.println("Captured details");
        for(Payment x : workers){
            System.out.println("Worker's name :" + x.workerName);
            System.out.println("Worker's number of days worked :" + x.numberOfDays);
            System.out.printf("\nWorker's total pay: %.2f" ,x.calculatePay(rate, x.numberOfDays));
        }
          scanner.close();
    }
}
