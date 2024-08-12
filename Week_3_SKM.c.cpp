#include <stdio.h>

// Function to sort an array in ascending order
void sortAscending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to sort an array in descending order
void sortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, i, choice;

    // Input: number of product prices
    printf("Enter the number of product prices: ");
    scanf("%d", &n);

    int prices[n];

    // Input: product prices
    printf("Enter the product prices:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    // Ask user for sorting order
    printf("Enter 1 to sort in ascending order or 2 for descending order: ");
    scanf("%d", &choice);

    // Sort the prices based on user's choice
    if (choice == 1) {
        sortAscending(prices, n);
    } else if (choice == 2) {
        sortDescending(prices, n);
    } else {
        printf("Invalid choice! Exiting program.\n");
        return 1;
    }

    // Output: sorted product prices
    printf("Sorted Product Prices:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", prices[i]);
    }

    return 0;
}

