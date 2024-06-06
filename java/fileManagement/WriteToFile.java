import java.io.FileWriter; //import the FileWriter class
import java.io.IOException; //import the IOException class to handle errors

class WriteToFile{
    public static void main(String[] args){
        try{
            FileWriter myWriter = new FileWriter("new.txt");
            myWriter.write("Files in java might be tricky, but it is fun enough");
            myWriter.close();
            System.out.println("Successfully wrote to the file.");
        }catch(IOException e){
            System.out.println("An error occured");
            e.printStackTrace();
        }
    }
}