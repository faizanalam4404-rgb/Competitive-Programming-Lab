#include <stdio.h>

int main() {
    int n;
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[20][20];
    printf("Enter adjacency matrix:\n");

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    int source;
    printf("Enter source: ");
    scanf("%d", &source);

    int dist[20], visited[20] = {0};

    for (int i = 0; i < n; i++)
        dist[i] = 9999;

    dist[source] = 0;

    for (int count = 0; count < n - 1; count++) {
        int min = 9999, u;

        for (int i = 0; i < n; i++)
            if (!visited[i] && dist[i] < min) {
                min = dist[i];
                u = i;
            }

        visited[u] = 1;

        for (int v = 0; v < n; v++)
            if (!visited[v] && graph[u][v] &&
                dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    printf("Shortest distances:\n");
    for (int i = 0; i < n; i++)
        printf("%d -> %d = %d\n", source, i, dist[i]);

    return 0;
}