import java.util.Scanner;  
class Animalia {  
    void makeSound() {  
        System.out.println("Generic animal sound");  
    }  
}  
class Dogo extends Animalia {  
    void makeSound() {  
        System.out.println("Bark! Bark!");  
    }  
    void fetch() {  
        System.out.println("Fetching the ball!");  
    }  
class Cat extends Animalia {  
    void makeSound() {  
        System.out.println("Meow! Meow!");  
    }  
    void climb() {  
        System.out.println("Climbing the tree!");  
    }  
}  
public class Casting {  
    public static void main(String[] args) {  
        Scanner scanner = new Scanner(System.in);  
        System.out.println("Select an animal:");  
        System.out.println("1. Dog");  
        System.out.println("2. Cat");  
        int choice = scanner.nextInt();  
        Animalia animal;  
        switch (choice) {  
            case 1:  
                animal = new Dogo();  
                break;  
            case 2:  
                animal = new Cat();  
                break;  
            default:  
                System.out.println("Invalid choice. Exiting.");  
                return;  
        }  
        System.out.println("Calling the makeSound() method:");  
        animal.makeSound();  
        if (animal instanceof Dogo) {  
            Dogo dog = (Dogo) animal;  
            System.out.println("Calling the fetch() method:");  
            dog.fetch();  
        } else if (animal instanceof Cat) {  
            Cat cat = (Cat) animal;  
            System.out.println("Calling the climb() method:");  
            cat.climb();  
        }  
        scanner.close();  
    }  
} 
}