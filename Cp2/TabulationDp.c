#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int dp[n + 1];

    dp[0] = 1;

    for (int i = 1; i <= n; i++)
        dp[i] = dp[i - 1] * i;

    printf("Factorial = %d\n", dp[n]);

    return 0;
}