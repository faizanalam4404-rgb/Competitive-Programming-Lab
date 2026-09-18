#include <stdio.h>

int main() {
    int coins[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int amount;

    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("Coins Used:\n");

    for (int i = 0; i < 9; i++) {
        while (amount >= coins[i]) {
            printf("%d ", coins[i]);
            amount -= coins[i];
        }
    }

    return 0;
}