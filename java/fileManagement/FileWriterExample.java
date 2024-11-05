import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

class FileWriterExample{
    public static void main(String[] args) {
        String filename = "first.txt";
        String content = "This is a file created by George";

        try(BufferedWriter writer = new BufferedWriter(new FileWriter(filename))){
            writer.write(content);
            System.out.println("File has been updated");
        }catch(IOException e){
            e.printStackTrace();
        }
    }
}