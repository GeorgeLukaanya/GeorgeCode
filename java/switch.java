import java.util.Scanner;

public class conditional1 {
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);

        System.out.println("Enter the first number>>");
        double number1=scanner.nextDouble();
        scanner.nextLine();

        System.out.println("Enter the second number>>");
        double number2=scanner.nextDouble();
        scanner.nextLine();
        
        System.out.println("What operation do you want to perform>>");
        String operation=scanner.nextLine();

        switch(operation){
            case "sum":
             System.out.printf("%.2f+%.2f=%.2f",number1, number2, number1+number2);
             break;

            case "sub":
             System.out.printf("%.2f-%.2f=%.2f",number1, number2, number1-number2);
             break;

            case "mul":
             System.out.printf("%.2f*%.2f=%.2f",number1, number2, number1*number2);
             break;

            case "div":
            if (number2==0) {
                System.out.println("cannot divide by 0");
            }else{
             System.out.printf("%.2f/%.2f=%.2f",number1, number2, number1/number2);
            }
             break;

            default:
            System.out.println("This is not a supported operation.");
        }
        scanner.close();
    }
    
}
