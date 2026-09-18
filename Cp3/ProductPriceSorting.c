#include <stdio.h>

int main() {
    int n, temp;

    printf("Enter number of products: ");
    scanf("%d", &n);

    int price[n];

    printf("Enter prices:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &price[i]);

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (price[i] > price[j]) {
                temp = price[i];
                price[i] = price[j];
                price[j] = temp;
            }

    printf("Sorted Prices:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", price[i]);

    return 0;
}