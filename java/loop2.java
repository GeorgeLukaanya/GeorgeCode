import java.util.Scanner;

public class loop2{
    public static void main(String[] args){
        String name;
        Scanner scanner = new Scanner(System.in);
        name=scanner.nextLine(); 
        while(name.isBlank()){
            System.out.println("Enter your name: ");
            name=scanner.nextLine();
        }
        System.out.printf("Your name is %s.", name);
        scanner.close();
    }
}