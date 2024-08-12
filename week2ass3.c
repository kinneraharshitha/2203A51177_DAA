#include <stdio.h>

// Function to perform binary search on sorted salary array
int binarySearchSalary(int salaries[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (salaries[mid] == target) {
            return mid; // Salary found at index mid
        }
        if (salaries[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Salary not found
}

int main() {
    // Sorted array of TCS employees' salaries
    int salaries[] = {3000, 4500, 5500, 6500, 7500, 8500, 9500, 11000};
    int size = sizeof(salaries) / sizeof(salaries[0]);
    int target = 6500;

    // Perform binary search
    int index = binarySearchSalary(salaries, size, target);

    if (index != -1) {
        printf("The salary of $%d is found at index %d.\n", target, index);
    } else {
        printf("The salary of $%d is not found in the array.\n", target);
    }

    return 0;
}

