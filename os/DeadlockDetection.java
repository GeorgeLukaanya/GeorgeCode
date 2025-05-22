import java.util.Random;
import java.util.Scanner;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class DeadlockDetection {

    private static final Lock lock1 = new ReentrantLock();
    private static final Lock lock2 = new ReentrantLock();
    private static int maxRetries = 10; // Default retry limit

    // Function to simulate random sleep time
    private static void sleepRandomTime() {
        try {
            Thread.sleep(new Random().nextInt(100)); // Sleep for 0-100 milliseconds
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
    }

    // Task function to try to acquire both locks
    private static void task(Lock firstLock, Lock secondLock, String taskName) {
        int retries = 0;
        while (retries < maxRetries) {
            if (firstLock.tryLock()) {
                System.out.println(taskName + " acquired " + (firstLock == lock1 ? "Lock1" : "Lock2") + ".");
                if (secondLock.tryLock()) {
                    System.out.println(taskName + " acquired both locks: Executing " + taskName + "...");
                    secondLock.unlock();
                    firstLock.unlock();
                    return;
                } else {
                    firstLock.unlock();
                    System.out.println(taskName + " released " + (firstLock == lock1 ? "Lock1" : "Lock2") + " as " + (secondLock == lock1 ? "Lock1" : "Lock2") + " was unavailable.");
                }
            }
            System.out.println(taskName + " retrying... Attempt " + (++retries) + "/" + maxRetries);
            sleepRandomTime();
        }
        System.out.println(taskName + " failed to acquire locks after " + maxRetries + " attempts. Exiting.");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the maximum number of retry attempts for each task (default is 10): ");
        maxRetries = scanner.nextInt();

        Thread t1 = new Thread(() -> task(lock1, lock2, "Task 1"));
        Thread t2 = new Thread(() -> task(lock2, lock1, "Task 2"));

        t1.start();
        t2.start();

        try {
            t1.join();
            t2.join();
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }

        System.out.println("\nDeadlock check:");
        System.out.println("If both tasks fail to acquire both locks after retrying " + maxRetries + " times, a deadlock is likely.");

        System.out.println("\nBoth tasks completed (or exited after reaching retry limit).");
    }
}