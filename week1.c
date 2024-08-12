#include <stdio.h>

// Function to sort the array
void sortTimes(int times[], int n, int ascending) {
    int i, j;  // Declare variables outside the loop
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if ((ascending && times[j] > times[j+1]) || (!ascending && times[j] < times[j+1])) {
                // Swap times[j] and times[j+1]
                int temp = times[j];
                times[j] = times[j+1];
                times[j+1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int times[], int n) {
    int i;  // Declare variable outside the loop
    for (i = 0; i < n; i++) {
        printf("%d ", times[i]);
    }
    printf("\n");
}

int main() {
    // Test Case 1
    int times1[] = {20, 15, 30, 42};
    int n1 = sizeof(times1) / sizeof(times1[0]);
    sortTimes(times1, n1, 1); // 1 for ascending order
    printf("Test Case 1 Output:\n");
    printArray(times1, n1);

    // Test Case 2
    int times2[] = {15, 69, 80, 14};
    int n2 = sizeof(times2) / sizeof(times2[0]);
    sortTimes(times2, n2, 0); // 0 for descending order
    printf("Test Case 2 Output:\n");
    printArray(times2, n2);

    return 0;  // Add return statement to indicate successful execution
}

