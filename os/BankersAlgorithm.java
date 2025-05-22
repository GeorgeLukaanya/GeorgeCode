import java.util.Scanner;

public class BankersAlgorithm {
    private int processes, resources;
    private int[] available;
    private int[][] max, allocation, need;

    public BankersAlgorithm(int processes, int resources) {
        this.processes = processes;
        this.resources = resources;
        available = new int[resources];
        max = new int[processes][resources];
        allocation = new int[processes][resources];
        need = new int[processes][resources];
    }

    // Function to take user input
    public void inputValues(Scanner sc) {
        System.out.println("Enter the Available Resources\n" + //
                        "(In the format A B C):");
        for (int i = 0; i < resources; i++) {
            available[i] = sc.nextInt();
        }

        System.out.println("Enter the Maximum Resource Matrix\n" + //
                        "(In the format A B C for 5 processes):");
        for (int i = 0; i < processes; i++) {
            for (int j = 0; j < resources; j++) {
                max[i][j] = sc.nextInt();
            }
        }

        System.out.println("Enter the Allocation Matrix \n" + //
                        "(In the format A B C for 5 processes) :");
        for (int i = 0; i < processes; i++) {
            for (int j = 0; j < resources; j++) {
                allocation[i][j] = sc.nextInt();
                need[i][j] = max[i][j] - allocation[i][j];

                if (need[i][j] < 0) {
                    System.out.println("Error: Need matrix contains negative values! Check input.");
                    System.exit(1);
                }
            }
        }
    }

    // Function to print the matrices
    public void printMatrix(int[][] matrix, String title) {
        System.out.println("\n" + title + ":");
        for (int[] row : matrix) {
            for (int value : row) {
                System.out.print(value + " ");
            }
            System.out.println();
        }
    }

    // Function to check if the system is in a safe state
    public boolean isSafeState() {
        boolean[] finished = new boolean[processes];
        int[] safeSequence = new int[processes];
        int[] work = available.clone();
        int count = 0;

        while (count < processes) {
            boolean found = false;

            for (int i = 0; i < processes; i++) {
                if (!finished[i]) {
                    boolean canAllocate = true;

                    for (int j = 0; j < resources; j++) {
                        if (need[i][j] > work[j]) {
                            canAllocate = false;
                            break;
                        }
                    }

                    if (canAllocate) {
                        for (int j = 0; j < resources; j++) {
                            work[j] += allocation[i][j];
                        }
                        safeSequence[count++] = i;
                        finished[i] = true;
                        found = true;
                    }
                }
            }

            if (!found) {
                System.out.println("System is NOT in a safe state. Deadlock detected!");
                return false;
            }
        }

        System.out.println("\nSystem is in a SAFE state.");
        System.out.print("Safe sequence: ");
        for (int i = 0; i < processes; i++) {
            System.out.print("P" + safeSequence[i] + " ");
        }
        System.out.println();
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of processes: ");
        int processes = sc.nextInt();

        System.out.print("Enter the number of resource types: ");
        int resources = sc.nextInt();

        BankersAlgorithm bankers = new BankersAlgorithm(processes, resources);
        bankers.inputValues(sc);

        // Print Matrices for better understanding
        bankers.printMatrix(bankers.max, "Maximum Resource Matrix");
        bankers.printMatrix(bankers.allocation, "Allocation Matrix");
        bankers.printMatrix(bankers.need, "Need Matrix");

        // Check Safe State
        bankers.isSafeState();
    }
}
