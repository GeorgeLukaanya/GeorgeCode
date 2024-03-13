import java.util.Scanner;

import javax.sound.midi.Soundbank;

public class input {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("What is your name: ");
        String name=scanner.nextLine();
        System.out.printf("\nYour name is %s. What is your age? : ", name);

       int age=Integer.parseInt(scanner.nextLine());
        System.out.printf("\nYou are %d years old. What is your favourate programming language?: ", age);

        String language=scanner.nextLine();
        System.out.printf("%s, your are %d years old and %s is your favourite programming.", name, age, language);

        scanner.close();
    }
}
