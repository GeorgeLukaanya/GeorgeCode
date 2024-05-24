import java.util.Scanner;

public class Payment {
  int numberOfDays;
  String workerName;
  final int rate = 20;

  public Payment(int numberOfDays, String workerName) {
    this.numberOfDays = numberOfDays;
    this.workerName = workerName;
  }

  public static void main(String[] args){
    Scanner keyboard = new Scanner(System.in);
    Payment[] work = new Payment[5];
    for(int i = 0; i < work.length; i++){
      System.out.println("Enter the worker's name: ");
      name = keyboard.nextLine();
      System.out.println("Enter the number of days worked: ");
      numberOfDays = keyboard.nextInt();
      Payment worker = new Payment(numberOfDays, workerName);
      work[i] = worker

    }
  }
}
