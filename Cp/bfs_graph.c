#include <stdio.h>
int main() {
    int graph[4][4] = {
        {0, 1, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 0, 0},
        {0, 1, 0, 0}
    };
    int visited[4] = {0};
    int queue[4];
    int front = 0, rear = 0;
    int i, current;
    queue[rear++] = 0;
    visited[0] = 1;
    printf("BFS: ");
    while (front < rear) {
        current = queue[front++];
        printf("%d ", current + 1);
        for (i = 0; i < 4; i++) {
            if (graph[current][i] == 1 && visited[i] == 0) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
    return 0;
}

/*Output:
BFS: 1 2 3 4
*/