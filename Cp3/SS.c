#include <stdio.h>

int main() {
    int n, temp, min;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}