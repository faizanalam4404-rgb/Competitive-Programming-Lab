#include <stdio.h>

int main() {
    int base, row, col, i, j, w;

    printf("Enter base address: ");
    scanf("%d", &base);

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter element size: ");
    scanf("%d", &w);

    printf("Enter row and column index: ");
    scanf("%d %d", &i, &j);

    int address = base + ((i * col) + j) * w;

    printf("Effective Address = %d\n", address);

    return 0;
}