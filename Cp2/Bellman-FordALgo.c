#include <stdio.h>

struct Edge {
    int src, dest, weight;
};

int main() {
    int V, E;
    printf("Enter vertices and edges: ");
    scanf("%d %d", &V, &E);

    struct Edge edge[E];

    printf("Enter source destination weight:\n");
    for (int i = 0; i < E; i++)
        scanf("%d %d %d", &edge[i].src, &edge[i].dest, &edge[i].weight);

    int dist[V];
    for (int i = 0; i < V; i++)
        dist[i] = 9999;

    int source;
    printf("Enter source vertex: ");
    scanf("%d", &source);

    dist[source] = 0;

    for (int i = 1; i < V; i++) {
        for (int j = 0; j < E; j++) {
            int u = edge[j].src;
            int v = edge[j].dest;
            int w = edge[j].weight;

            if (dist[u] != 9999 && dist[u] + w < dist[v])
                dist[v] = dist[u] + w;
        }
    }

    printf("Shortest distances:\n");
    for (int i = 0; i < V; i++)
        printf("%d -> %d = %d\n", source, i, dist[i]);

    return 0;
}