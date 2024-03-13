import java.util.Scanner;

public class variable {
    public static void main(String[] args){
        System.out.println("Enter two numbers to be added n1 and n2 on the same line: ");
        int n1, n2;

        Scanner keyboard=new Scanner(System.in);
        n1=keyboard.nextInt();
        n2=keyboard.nextInt();

        System.out.printf("The sum of %d and %d is %d. ", n1, n2, n1+n2);

        
    }
}