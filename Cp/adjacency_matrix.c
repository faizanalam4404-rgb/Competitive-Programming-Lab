#include <stdio.h>
int main() {
    int graph[4][4] = {
        {0, 1, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 0, 0},
        {0, 1, 0, 0}
    };
    int i, j;
    printf("Adjacency Matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*Output:
Adjacency Matrix:
0 1 1 0
1 0 1 1
1 1 0 0
0 1 0 0
*/