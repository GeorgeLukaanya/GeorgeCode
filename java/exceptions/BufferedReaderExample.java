import java.io.BufferedReader;
import java.io.FileReader;

public class BufferedReaderExample {
    public static void main(String[] args) {
        // Path to the file to read
        String filePath = "example.txt";

        // Create a BufferedReader object
        BufferedReader reader = null;
        try {
            reader = new BufferedReader(new FileReader(filePath));

            // Read and print lines from the file
            String line;
            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }

        } finally {
            try {
                if (reader != null) {
                    reader.close(); // Close the reader
                }
            } catch (Exception e) {
                e.printStackTrace(); // Exception during resource cleanup
            }
        }
    }
}
