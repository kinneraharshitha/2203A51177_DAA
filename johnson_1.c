
#include <stdio.h>

void sort_packages(int n, int times[], int order) {
    int i, j, temp;

    if (order == 1) { // Ascending order
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                if (times[j] > times[j + 1]) {
                    temp = times[j];
                    times[j] = times[j + 1];
                    times[j + 1] = temp;
                }
            }
        }
    } else { // Descending order
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                if (times[j] < times[j + 1]) {
                    temp = times[j];
                    times[j] = times[j + 1];
                    times[j + 1] = temp;
                }
            }
        }
    }

    // Print the sorted times
    for (i = 0; i < n; i++) {
        printf("%d\n", times[i]);
    }
}
int main() {
    int n, i, order;

    printf("Enter the number of packages: ");
    scanf("%d", &n);

    int times[n];
    printf("Enter time to reach destination for each package:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &times[i]);
    }

    printf("Enter 1 for ascending order, 2 for descending order: ");
    scanf("%d", &order);

    sort_packages(n, times, order);

    return 0;
}




