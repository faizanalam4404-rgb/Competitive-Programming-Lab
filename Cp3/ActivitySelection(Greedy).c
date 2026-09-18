#include <stdio.h>

int main() {
    int start[] = {1, 3, 0, 5, 8, 5};
    int finish[] = {2, 4, 6, 7, 9, 9};
    int n = 6;

    printf("Selected Activities:\n");

    int i = 0;
    printf("%d ", i);

    for (int j = 1; j < n; j++) {
        if (start[j] >= finish[i]) {
            printf("%d ", j);
            i = j;
        }
    }

    return 0;
}