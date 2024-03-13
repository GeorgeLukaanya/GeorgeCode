import java.util.Random;

public class Main2 {
    // This program demonstrates use of random numbers.
    public static void main(String[] args) {
        Random random = new Random();
        int x = random.nextInt(7);
        // generates between 0 and 5
        System.out.println(x);
    }
}
