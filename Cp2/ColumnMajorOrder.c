#include <stdio.h>

int main() {
    int base,w,row,i,j;

    printf("Base Address: ");
    scanf("%d",&base);

    printf("Size of each element: ");
    scanf("%d",&w);

    printf("Number of rows: ");
    scanf("%d",&row);

    printf("Row and Column index: ");
    scanf("%d%d",&i,&j);

    int address=base + w*(j*row+i);

    printf("Effective Address = %d\n",address);

    return 0;
}