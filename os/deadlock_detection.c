#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>

pthread_mutex_t lock1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t lock2 = PTHREAD_MUTEX_INITIALIZER;

int max_retries = 10; // Default retry limit

// Function to simulate random sleep time
void sleepRandomTime() {
    usleep((rand() % 100) * 1000); // Sleep for 0-100 milliseconds
}

// Task function to try to acquire both locks
void* task(void* arg) {
    int retries = 0;
    pthread_mutex_t *first_lock = (pthread_mutex_t *)arg;
    pthread_mutex_t *second_lock = (first_lock == &lock1) ? &lock2 : &lock1;
    char *task_name = (first_lock == &lock1) ? "Task 1" : "Task 2";

    while (retries < max_retries) {
        if (pthread_mutex_trylock(first_lock) == 0) {
            printf("%s acquired %s.\n", task_name, (first_lock == &lock1) ? "Lock1" : "Lock2");
            if (pthread_mutex_trylock(second_lock) == 0) {
                printf("%s acquired both locks: Executing %s...\n", task_name, task_name);
                pthread_mutex_unlock(second_lock);
                pthread_mutex_unlock(first_lock);
                return NULL;
            } else {
                pthread_mutex_unlock(first_lock);
                printf("%s released %s as %s was unavailable.\n", task_name, (first_lock == &lock1) ? "Lock1" : "Lock2", (second_lock == &lock1) ? "Lock1" : "Lock2");
            }
        }
        printf("%s retrying... Attempt %d/%d\n", task_name, ++retries, max_retries);
        sleepRandomTime();
    }
    printf("%s failed to acquire locks after %d attempts. Exiting.\n", task_name, max_retries);
    return NULL;
}

// Function to simulate a deadlock check
void deadlockCheck(pthread_t t1, pthread_t t2) {
    // Monitor if tasks failed to acquire locks after max retries
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    printf("\nDeadlock check:\n");
    printf("If both tasks fail to acquire both locks after retrying %d times, a deadlock is likely.\n", max_retries);
}

int main() {
    srand(time(NULL)); // Seed random generator

    printf("Enter the maximum number of retry attempts for each task (default is 10): ");
    scanf("%d", &max_retries);

    pthread_t t1, t2;

    // Create threads
    if (pthread_create(&t1, NULL, task, &lock1) != 0) {
        perror("Failed to create thread 1");
        return 1;
    }
    if (pthread_create(&t2, NULL, task, &lock2) != 0) {
        perror("Failed to create thread 2");
        return 1;
    }

    // Perform deadlock check after both threads finish
    deadlockCheck(t1, t2);

    printf("\nBoth tasks completed (or exited after reaching retry limit).\n");

    return 0;
}