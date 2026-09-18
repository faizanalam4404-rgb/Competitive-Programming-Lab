#include <stdio.h>
int main() {
    int graph[4][4] = {
        {0, 1, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 0, 0},
        {0, 1, 0, 0}
    };
    int i, j;
    printf("Adjacency List:\n");
    for (i = 0; i < 4; i++) {
        printf("%d -> ", i + 1);

        for (j = 0; j < 4; j++) {
            if (graph[i][j] == 1)
                printf("%d ", j + 1);
        }
        printf("\n");
    }
    return 0;
}

/*Output:
Adjacency List:
1 -> 2 3
2 -> 1 3 4
3 -> 1 2
4 -> 2
*/