#include <stdio.h>

void sort_orders(int orders[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (orders[j] > orders[j + 1]) {
                temp = orders[j];
                orders[j] = orders[j + 1];
                orders[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;

    printf("Enter the number of orders: ");
    scanf("%d", &n);

    int orders[n];

    printf("Enter orders priority numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &orders[i]);
    }

    sort_orders(orders, n);

    printf("\nAfter sorting orders by priority:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", orders[i]);
    }
    printf("\n");

    return 0;
}


