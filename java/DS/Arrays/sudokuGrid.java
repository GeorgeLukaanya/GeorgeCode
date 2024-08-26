public class sudokuGrid {

    // Function to check if a number can be placed in a specific cell
    public static boolean canPlaceNumber(int[][] sudokuGrid, int row, int col, int num) {
        // Check the row constraint
        for (int i = 0; i < 9; i++) {
            if (sudokuGrid[row][i] == num) {
                return false;  // Number already exists in this row
            }
        }

        // Check the column constraint
        for (int i = 0; i < 9; i++) {
            if (sudokuGrid[i][col] == num) {
                return false;  // Number already exists in this column
            }
        }

        // Check the sub-grid constraint
        int subGridRowStart = (row / 3) * 3;
        int subGridColStart = (col / 3) * 3;
        for (int i = subGridRowStart; i < subGridRowStart + 3; i++) {
            for (int j = subGridColStart; j < subGridColStart + 3; j++) {
                if (sudokuGrid[i][j] == num) {
                    return false;  // Number already exists in this 3x3 sub-grid
                }
            }
        }

        // If the number passes all checks, it can be placed in the cell
        return true;
    }

    public static void main(String[] args) {
        // Example Sudoku grid (0 represents empty cells)
        int[][] sudokuGrid = {
            {5, 3, 0, 0, 7, 0, 0, 0, 0},
            {6, 0, 0, 1, 9, 5, 0, 0, 0},
            {0, 9, 8, 0, 0, 0, 0, 6, 0},
            {8, 0, 0, 0, 6, 0, 0, 0, 3},
            {4, 0, 0, 8, 0, 3, 0, 0, 1},
            {7, 0, 0, 0, 2, 0, 0, 0, 6},
            {0, 6, 0, 0, 0, 0, 2, 8, 0},
            {0, 0, 0, 4, 1, 9, 0, 0, 5},
            {0, 0, 0, 0, 8, 0, 0, 7, 9}
        };

        // Test placing the number 9 at position (0, 2)
        if (canPlaceNumber(sudokuGrid, 0, 2, 9)) {
            System.out.println("Number can be placed.");
        } else {
            System.out.println("Number cannot be placed.");
        }
    }
}
