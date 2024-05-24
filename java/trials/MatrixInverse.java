import java.util.Scanner;

public class MatrixInverse {

    private static void printMatrix(double[][] matrix) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.print(matrix[i][j] + "\t");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Create a 2x2 matrix and take user input
        double[][] matrix = new double[2][2];
        System.out.println("Enter 4 numbers to form a 2x2 matrix:");

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                matrix[i][j] = scanner.nextDouble();
            }
        }

        System.out.println("Matrix:");
        printMatrix(matrix);

        // Calculate determinant
        double determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

        if (determinant == 0) {
            System.out.println("The matrix has no inverse (determinant is zero).");
        } else {
            double[][] inverse = new double[2][2];
            double inverseDet = 1 / determinant;

            // Compute the inverse matrix
            inverse[0][0] = inverseDet * matrix[1][1];
            inverse[0][1] = -inverseDet * matrix[0][1];
            inverse[1][0] = -inverseDet * matrix[1][0];
            inverse[1][1] = inverseDet * matrix[0][0];

            System.out.println("Inverse Matrix:");
            printMatrix(inverse);
        }

        scanner.close();
    } 
}
