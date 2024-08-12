#include <stdio.h>

// Function to perform binary search
int binarySearchPrice(int prices[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (prices[mid] == target) {
            return mid; // Price found at index mid
        }
        if (prices[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Price not found
}

int main() {
    // Sorted array of product prices
    int prices[] = {15, 30, 45, 60, 75, 90, 105, 120};
    int size = sizeof(prices) / sizeof(prices[0]);
    int target = 75;

    // Perform binary search
    int index = binarySearchPrice(prices, size, target);

    if (index != -1) {
        printf("The price of $%d is found at index %d.\n", target, index);
    } else {
        printf("The price of $%d is not found in the array.\n", target);
    }

    return 0;
}

