import java.net.*;   // Import required for networking classes
import java.io.*;    // Import required for input/output classes

public class Client {
    // Initialize socket and input/output streams
    private Socket socket = null;              // Socket to connect to the server
    private DataInputStream input = null;      // Input stream to read from the terminal
    private DataOutputStream out = null;       // Output stream to send data to the server

    // Constructor to connect to the server with given IP address and port
    public Client(String address, int port) {
        // Establish a connection to the server
        try {
            socket = new Socket(address, port);    // Create a socket to connect to the server
            System.out.println("Connected to the server");

            // Input stream to read from the terminal (standard input)
            input = new DataInputStream(System.in);

            // Output stream to send data to the server
            out = new DataOutputStream(socket.getOutputStream());
        } catch (UnknownHostException u) {
            System.out.println(u);
        } catch (IOException i) {
            System.out.println(i);
        }

        // String to read message from input
        String line = "";

        // Keep reading until "Over" is typed
        while (!line.equals("Over")) {
            try {
                line = input.readLine();  // Read a line from the terminal
                out.writeUTF(line);       // Send the line to the server
            } catch (IOException i) {
                System.out.println(i);
            }
        }

        // Close the connection
        try {
            input.close();                // Close the terminal input stream
            out.close();                  // Close the output stream to the server
            socket.close();               // Close the socket connection to the server
        } catch (IOException i) {
            System.out.println(i);
        }
    }

    public static void main(String[] args) {
        // Create a client object and connect to the server at 127.0.0.1 on port 5000
        Client client = new Client("127.0.0.1", 5000);
    }
}
