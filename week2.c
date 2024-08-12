#include <stdio.h>

// Function to implement the quicksort algorithm
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);  // Recursively sort the left subarray
        quickSort(arr, pi + 1, high); // Recursively sort the right subarray
    }
}

// Partition function used by quickSort
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the rightmost element as pivot
    int i = (low - 1);
    int j;  // Declare variable outside the loop

    for (j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

// Function to print the array
void printArray(int arr[], int size) {
    int i;  // Declare variable outside the loop
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Test Case 1
    int productIDs1[] = {87, 67, 21, 59, 99, 46, 84, 32, 43, 12, 90, 23};
    int n1 = sizeof(productIDs1) / sizeof(productIDs1[0]);
    quickSort(productIDs1, 0, n1 - 1);
    printf("After Sorting Product IDs (Test Case 1):\n");
    printArray(productIDs1, n1);

    // Test Case 2
    int productIDs2[] = {64, 56, 21, 90, 32, 87, 59, 60, 43, 10, 29, 74};
    int n2 = sizeof(productIDs2) / sizeof(productIDs2[0]);
    quickSort(productIDs2, 0, n2 - 1);
    printf("After Sorting Product IDs (Test Case 2):\n");
    printArray(productIDs2, n2);

    return 0;
}

