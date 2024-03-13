import java.util.Scanner;

import javax.sound.midi.Soundbank;

public class input_and_output{
    public static void main(String[] args){
       Scanner name=new Scanner(System.in);

       //System.out.println("What is your name? >>");
       System.out.print("What is your name? >>\n");
       String userName=name.nextLine();
       System.out.println("What is your age?>>");
       int age=Integer.parseInt(name.nextLine());
       System.out.println("What is your gpa?>>");
       double gpa=Double.parseDouble(name.nextLine());

       //cleans us the input buffer
       name.nextLine();//this is important
       System.out.printf("Hello %s, you are a %d years old and your gpa is %.2f. What language do you prefer?>>\n",userName, age, gpa);
       String language=name.nextLine();
       System.out.printf("%s is a very reliable programming language", language);
       name.close();

    }
}