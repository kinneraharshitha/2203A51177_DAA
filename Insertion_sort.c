#include<stdio.h>
// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
	int i,key,j;
    for (i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
	int i,j;
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Asking user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements from the user
    printf("Enter the elements: \n");
    int i,j;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Displaying the unsorted array
    printf("Unsorted array: \n");
    printArray(arr, n);

    // Sorting the array using Insertion Sort
    insertionSort(arr, n);

    // Displaying the sorted array
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
