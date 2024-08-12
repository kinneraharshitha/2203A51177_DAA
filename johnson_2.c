#include <stdio.h>

// Swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function for Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    printf("Enter the number of products: ");
    scanf("%d", &n);

    int productIDs[n];
    printf("Enter the product IDs:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &productIDs[i]);
    }

    quickSort(productIDs, 0, n - 1);

    printf("After Sorting Product IDs:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", productIDs[i]);
    }
    printf("\n");

    return 0;
}


