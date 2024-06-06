import java.io.*;
class MyFile{
    public static void main(String[] args) throws FileNotFoundException{
        String fileName = "my.txt";
        PrintWriter p = null;
        System.out.println("This is the menu: ");

        p = new PrintWriter(fileName);
        p.print("This is my command");
        p.println();
        p.close();

    }
}