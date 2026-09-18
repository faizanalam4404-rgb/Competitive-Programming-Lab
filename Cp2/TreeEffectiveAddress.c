#include <stdio.h>

int main() {
    int base, index, size;

    printf("Enter base address: ");
    scanf("%d", &base);

    printf("Enter node index: ");
    scanf("%d", &index);

    printf("Enter size of each node: ");
    scanf("%d", &size);

    int address = base + (index * size);

    printf("Effective Address = %d\n", address);

    return 0;
}