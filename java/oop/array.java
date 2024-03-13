import java.util.Scanner;

import java.util.Arrays;

public class array {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num[] = new int[10];

        //looping through the array to add values
        System.out.println("Enter 10 random numbers into your array");
        for(int i=0; i<num.length; i++){
            num[i] = scanner.nextInt();
        }
        //printing the whole array
        for(int number: num){
        System.out.print(number + "\t");
        }
        System.out.print("\n");
        //sorting the array
        Arrays.sort(num);
        for(int number: num){
            System.out.print(number + "\t");
        }
    }
}
