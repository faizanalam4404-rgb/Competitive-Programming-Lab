#include <stdio.h>

int main() {
    int n, x = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d IDs (1 to %d with one missing):\n", n - 1, n);

    for (int i = 1; i <= n; i++)
        x ^= i;

    for (int i = 1; i < n; i++) {
        int num;
        scanf("%d", &num);
        x ^= num;
    }

    printf("Missing ID = %d\n", x);

    return 0;
}