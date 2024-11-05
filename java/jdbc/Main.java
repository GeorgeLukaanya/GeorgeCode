//Peter Wasswa Ssemakula

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;


class Main {
    public static void main(String[] args){
        //Database url, username and password
        String url = "jdbc:mysql://localhost:3306/jdbc_practice";
        String username = "root";
        String password = "";

        try (Connection connection = DriverManager.getConnection(url, username, password)){
            //Establish conncetion
            if(connection != null){
                System.out.println("Connected to database");
            }
            

            //Create statement object to execute static queries
            Statement statement = connection.createStatement();

            //Execite a query to retrieve data from users' table
            String query = "SELECT * FROM users";
            ResultSet result = statement.executeQuery(query);

            //Iterate through the result set and display the data
            while(result.next()){
                int id = result.getInt("id");
                String name = result.getString("name");
                String email = result.getString("email");

                System.out.println("ID: " + id + " Name: " + name + " Email: " + email);
            }

        } catch (SQLException e) {
            e.printStackTrace();
        } finally{
            try {
                if (connection != null){
                    connection.close();//closes connection
                    System.out.println("Connection closed");
                }
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
    }
}
