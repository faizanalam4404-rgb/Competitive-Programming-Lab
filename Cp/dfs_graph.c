#include <stdio.h>
int graph[4][4] = {
    {0, 1, 1, 0},
    {1, 0, 1, 1},
    {1, 1, 0, 0},
    {0, 1, 0, 0}
};
int visited[4] = {0};
void dfs(int vertex) {
    int i;
    visited[vertex] = 1;
    printf("%d ", vertex + 1);
    for (i = 0; i < 4; i++) {
        if (graph[vertex][i] == 1 && visited[i] == 0)
            dfs(i);
    }
}
int main() {
    printf("DFS: ");
    dfs(0);
    return 0;
}

/*Output:
DFS: 1 2 3 4
*/