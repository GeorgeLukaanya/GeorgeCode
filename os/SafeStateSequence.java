import java.util.Scanner;

public class SafeStateSequence {

    // Function to print the Need matrix
    public static void printNeedMatrix(int numProcesses, int numResources, int[][] need) {
        System.out.println("\nNeed Matrix:");
        for (int i = 0; i < numProcesses; i++) {
            for (int j = 0; j < numResources; j++) {
                System.out.print(need[i][j] + " ");
            }
            System.out.println();
        }
    }

    // Function to check if the system is in a safe state
    public static boolean isSafeState(int[] available, int[][] max, int[][] allocation, int[][] need, int numProcesses, int numResources) {
        int[] work = new int[numResources];
        boolean[] finish = new boolean[numProcesses];
        int[] safeSequence = new int[numProcesses];
        int count = 0;

        // Initialize work array as a copy of available resources
        System.arraycopy(available, 0, work, 0, numResources);

        while (count < numProcesses) {
            boolean found = false;

            for (int p = 0; p < numProcesses; p++) {
                if (!finish[p]) {
                    boolean canAllocate = true;

                    for (int r = 0; r < numResources; r++) {
                        if (need[p][r] > work[r]) {
                            canAllocate = false;
                            break;
                        }
                    }

                    if (canAllocate) {
                        for (int r = 0; r < numResources; r++) {
                            work[r] += allocation[p][r];
                        }
                        safeSequence[count++] = p;
                        finish[p] = true;
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
        for (int i = 0; i < numProcesses; i++) {
            System.out.print("P" + safeSequence[i] + " ");
        }
        System.out.println();
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int numProcesses, numResources;
        int[][] allocation, max, need;
        int[] available;

        // User Input
        System.out.print("Enter the number of processes: ");
        numProcesses = scanner.nextInt();

        System.out.print("Enter the number of resources: ");
        numResources = scanner.nextInt();

        available = new int[numResources];
        max = new int[numProcesses][numResources];
        allocation = new int[numProcesses][numResources];
        need = new int[numProcesses][numResources];

        // Input Available Resources
        System.out.print("Enter the available resources: ");
        for (int i = 0; i < numResources; i++) {
            available[i] = scanner.nextInt();
        }

        // Input Max Matrix
        System.out.println("Enter the Maximum Resource Matrix:");
        for (int i = 0; i < numProcesses; i++) {
            for (int j = 0; j < numResources; j++) {
                max[i][j] = scanner.nextInt();
            }
        }

        // Input Allocation Matrix and calculate Need Matrix
        System.out.println("Enter the Allocation Matrix:");
        for (int i = 0; i < numProcesses; i++) {
            for (int j = 0; j < numResources; j++) {
                allocation[i][j] = scanner.nextInt();
                need[i][j] = max[i][j] - allocation[i][j];

                if (need[i][j] < 0) {
                    System.out.println("Error: Need matrix contains negative values! Check input.");
                    return;
                }
            }
        }

        // Print Need Matrix
        printNeedMatrix(numProcesses, numResources, need);

        // Check for safe state
        isSafeState(available, max, allocation, need, numProcesses, numResources);

        scanner.close();
    }
}
