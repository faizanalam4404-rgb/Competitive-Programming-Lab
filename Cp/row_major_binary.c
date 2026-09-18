#include <stdio.h>

void binary(int n) {
    int i;

    for (i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int i, j;

    printf("Row Major Order in Binary:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            binary(a[i][j]);
            printf(" ");
        }
    }

    return 0;
}

/*Output:
Row Major Order in Binary:00000001 00000010 00000011 00000100 00000101 00000110 
*/  