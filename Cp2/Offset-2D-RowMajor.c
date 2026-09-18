#include <stdio.h>

int main() {
    int base, w, col, i, j;

    printf("Base Address: ");
    scanf("%d", &base);
    printf("Size of each element: ");
    scanf("%d", &w);
    printf("Number of columns: ");
    scanf("%d", &col);
    printf("Row and Column index: ");
    scanf("%d %d", &i, &j);

    int offset = (i * col + j) * w;
    printf("Offset = %d\n", offset);

    return 0;
}