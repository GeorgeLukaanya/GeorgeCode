import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class TryWithResourcesExample {

    public static void main(String[] args) {

        // Using try-with-resources to automatically close BufferedReader
        try (BufferedReader br = new BufferedReader(new FileReader("Algorithms.txt"))) {

            String line;
            while ((line = br.readLine()) != null) {
                System.out.println(line); // Print each line from the file
            }

        } catch (IOException e) {
            // Handle any IOExceptions that occur
            e.printStackTrace();
        }

        // No need to manually close the BufferedReader, it's handled automatically
    }
}
