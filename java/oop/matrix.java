public class matrix {
    static double[][] enterMatrix(int element00, int element01, int element10, int element11) {
        double A[][] = {{element00, element01}, {element10, element11}};
        return A;
    }

    static double determinantOfMatrix(double x[][]) {
        return (x[0][0] * x[1][1]) - (x[0][1] * x[1][0]);
    }

    static double[][] adjoint(double y[][]) {
        double adj[][] = {{y[1][1], -y[0][1]}, {-y[1][0], y[0][0]}};
        return adj;
    }

    static double[][] inverse(double u[][], double det) {
        if (det != 0) {
            double inverse[][] = {
                    {(1 / det) * u[0][0], (1 / det) * u[0][1]},
                    {(1 / det) * u[1][0], (1 / det) * u[1][1]}
            };
            return inverse;
        } else {
            System.out.println("Inverse does not exist as determinant is zero.");
            return null;
        }
    }

    public static void main(String[] args) {
        Scanner scanObj = new Scanner(System.in);
        System.out.println("Enter your matrix in the form: element00 element01 element10 element11");
        System.out.println("Enter element00");
        int element00 = scanObj.nextInt();
        System.out.println("Enter element01");
        int element01 = scanObj.nextInt();
        System.out.println("Enter element10");
        int element10 = scanObj.nextInt();
        System.out.println("Enter element11");
        int element11 = scanObj.nextInt();

        double A[][] = enterMatrix(element00, element01, element10, element11);
        double detA = determinantOfMatrix(A);
        double adjA[][] = adjoint(A);
        double inverseA[][] = inverse(A, detA);

        System.out.println("This program calculates the inverse of a 2x2 matrix");
        System.out.println("Matrix A = " + Arrays.deepToString(A));
        System.out.println("Determinant of A = " + detA);
        System.out.println("Adjoint of A = " + Arrays.deepToString(adjA));
        
        if (inverseA != null) {
            System.out.println("Inverse of A = " + Arrays.deepToString(inverseA));
        }
    }
}
