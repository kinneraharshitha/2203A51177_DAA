#include <stdio.h>

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
    int n, i;

    // Input: number of tracking numbers
    printf("Enter the number of tracking numbers: ");
    scanf("%d", &n);

    int trackingNumbers[n];

    // Input: tracking numbers
    printf("Enter the tracking numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &trackingNumbers[i]);
    }

    // Sort the tracking numbers in descending order
    sortDescending(trackingNumbers, n);

    // Output: sorted tracking numbers
    printf("Sorted Tracking Numbers (Descending):\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", trackingNumbers[i]);
    }

    return 0;
}

