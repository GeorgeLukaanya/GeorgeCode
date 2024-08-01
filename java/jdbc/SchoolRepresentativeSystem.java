import java.util.Scanner;
import java.sql.*;
import java.io.*;

public class SchoolRepresentativeSystem {
    private static Scanner scanner = new Scanner(System.in);
    private static boolean isLoggedIn = false;

    public static void main(String[] args) {
        while (true) {
            if (!isLoggedIn) {
                displayMainMenu();
            } else {
                RepresentativeMenu.displayMenu();
            }
        }
    }

    private static void displayMainMenu() {
        System.out.println("1. Login");
        System.out.println("2. Register");
        System.out.print("Enter your choice: ");
        String choice = scanner.nextLine().trim();

        switch (choice) {
            case "1":
                login();
                break;
            case "2":
                register();
                break;
            default:
                System.out.println("Invalid choice. Please try again.");
        }
    }

    private static void login() {
        System.out.print("Enter username: ");
        String username = scanner.nextLine().trim();
        System.out.print("Enter password: ");
        String password = scanner.nextLine().trim();

        if (DatabaseUtil.validateLogin(username, password)) {
            System.out.println("Login successful");
            isLoggedIn = true;
        } else {
            System.out.println("Wrong Login details, Try Again");
        }
    }

    private static void register() {
        // Implement registration logic here
        System.out.println("Registration functionality not implemented yet.");
    }
}

class RepresentativeMenu {
    private static Scanner scanner = new Scanner(System.in);

    public static void displayMenu() {
        System.out.println("\nRepresentative Menu:");
        System.out.println("1. viewApplicants");
        System.out.println("2. Confirm yes/no <username>");
        System.out.println("3. Logout");
        System.out.print("Enter your choice: ");
        String choice = scanner.nextLine().trim();

        switch (choice) {
            case "1":
                viewApplicants();
                break;
            case "2":
                confirmApplicant();
                break;
            case "3":
                logout();
                break;
            default:
                System.out.println("Invalid choice. Please try again.");
        }
    }

    private static void viewApplicants() {
        FileUtil.displayParticipantDetails();
    }

    private static void confirmApplicant() {
        System.out.print("Enter confirmation (yes/no) and username: ");
        String input = scanner.nextLine().trim();
        String[] parts = input.split(" ", 2);
        if (parts.length != 2) {
            System.out.println("Invalid input. Please use format: yes/no <username>");
            return;
        }
        String confirmation = parts[0].toLowerCase();
        String username = parts[1];

        if (confirmation.equals("yes")) {
            DatabaseUtil.addToAcceptedParticipants(username);
        } else if (confirmation.equals("no")) {
            DatabaseUtil.addToRejectedParticipants(username);
        } else {
            System.out.println("Invalid confirmation. Use 'yes' or 'no'.");
        }
    }

    private static void logout() {
        SchoolRepresentativeSystem.isLoggedIn = false;
        System.out.println("Logged out successfully.");
    }
}

class DatabaseUtil {
    private static final String DB_URL = "jdbc:mysql://localhost:3306/math-challengez";
    private static final String USER = "your_username";
    private static final String PASS = "your_password";

    public static boolean validateLogin(String username, String password) {
        String sql = "SELECT * FROM schoolrepresentative WHERE username = ? AND password = ?";
        try (Connection conn = DriverManager.getConnection(DB_URL, USER, PASS);
             PreparedStatement pstmt = conn.prepareStatement(sql)) {
            pstmt.setString(1, username);
            pstmt.setString(2, password);
            ResultSet rs = pstmt.executeQuery();
            return rs.next();
        } catch (SQLException e) {
            e.printStackTrace();
            return false;
        }
    }

    public static void addToAcceptedParticipants(String username) {
        String sql = "INSERT INTO acceptedparticipants SELECT * FROM participant_details WHERE username = ?";
        executeUpdate(sql, username);
    }

    public static void addToRejectedParticipants(String username) {
        String sql = "INSERT INTO rejectedparticipants SELECT * FROM participant_details WHERE username = ?";
        executeUpdate(sql, username);
    }

    private static void executeUpdate(String sql, String username) {
        try (Connection conn = DriverManager.getConnection(DB_URL, USER, PASS);
             PreparedStatement pstmt = conn.prepareStatement(sql)) {
            pstmt.setString(1, username);
            int affectedRows = pstmt.executeUpdate();
            if (affectedRows > 0) {
                System.out.println("Participant " + username + " processed successfully.");
            } else {
                System.out.println("No participant found with username: " + username);
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}

class FileUtil {
    private static final String PARTICIPANT_FILE = "participant_details.txt";

    public static void displayParticipantDetails() {
        try (BufferedReader reader = new BufferedReader(new FileReader(PARTICIPANT_FILE))) {
            String line;
            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }
        } catch (IOException e) {
            System.out.println("Error reading participant details: " + e.getMessage());
        }
    }
}