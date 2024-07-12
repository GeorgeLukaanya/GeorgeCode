import java.net.*;        // Required for networking classes
import java.io.*;         // Required for Input/Output classes

public class Server {
    private Socket socket = null;               // Socket for communication with the client
    private ServerSocket server = null;         // Server socket to listen for connections
    private DataInputStream in = null;          // Input stream to receive data from the client

    // Constructor with port as a parameter
    public Server(int port) {
        // Start the server and wait for a connection
        try {
            // Create a server socket bound to the specified port
            server = new ServerSocket(port);
            System.out.println("Server started");

            System.out.println("Waiting for a client...");

            // Accept a connection from a client
            socket = server.accept();
            System.out.println("Client accepted");

            // Create an input stream to read data from the client
            in = new DataInputStream(
                new BufferedInputStream(socket.getInputStream())
            );

            String line = "";

            // Read messages from the client until "Over" is received
            while (!line.equals("Over")) {
                try {
                    line = in.readUTF(); // Read a message from the client
                    System.out.println("Client: " + line); // Display the message
                } catch (IOException i) {
                    System.out.println(i);
                }
            }

            // Close the connection after "Over" is received
            System.out.println("Closing connection");
            socket.close();
            in.close();
        } catch (IOException i) {
            System.out.println(i);
        }
    }

    public static void main(String[] args) {
        // Create a server object and start it on port 5000
        Server server = new Server(5000);
    }
}
