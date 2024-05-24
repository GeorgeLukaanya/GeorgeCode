import java.util.Scanner;

class Payments {
    int numberOfDays;
    String workerName;

    /*-public double calculatePay(int numberOfDays, int rate){
        return numberOfDays * rate;
    }*/

    Payments(int numberOfDays, String workerName) {
        this.numberOfDays = numberOfDays;
        this.workerName = workerName;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Payments[] workers = new Payments[5];
        final int rate = 20000;

        for (int i = 0; i < 5; i++) {
            // System.out.println("Enter the Details of worker " + (i+1));
            System.out.println("Worker's name: ");
            String workerName = scanner.nextLine();
            System.out.println("Number of days worked: ");
            int numberOfDays = scanner.nextInt();
            workers[i] = new Payments(numberOfDays, workerName);
            scanner.nextLine();
        }
        System.out.println("****Captured Details****");
        for (Payments x : workers) {
            System.out.println("Worker's name: " + x.workerName);
            System.out.println("Number of days worked: " + x.numberOfDays);
            System.out.println("Total monthly pay: Uganda Shillings" + x.numberOfDays * rate);
        }
        scanner.close();
    }
}