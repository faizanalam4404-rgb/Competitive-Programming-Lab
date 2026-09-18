#include <stdio.h>

int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int i, j;

    printf("Column Major Order: ");

    for (j = 0; j < 3; j++) {
        for (i = 0; i < 2; i++) {
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}

/*Output:
Column Major Order: 1 4 2 5 3 6
*/