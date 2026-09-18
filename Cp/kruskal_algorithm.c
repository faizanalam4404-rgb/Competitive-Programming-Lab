#include <stdio.h>
struct Edge {
    int source;
    int destination;
    int weight;
};
int parent[10];
int find(int vertex) {
    while (parent[vertex] != vertex)
        vertex = parent[vertex];

    return vertex;
}
void unionSet(int a, int b) {
    parent[find(a)] = find(b);
}
int main() {
    struct Edge edges[] = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };
    int n = 4;
    int e = 5;
    int i, j;
    int total = 0;
    for (i = 0; i < n; i++)
        parent[i] = i;

    /* Sort edges by weight */
    for (i = 0; i < e - 1; i++) {
        for (j = 0; j < e - i - 1; j++) {
            if (edges[j].weight > edges[j + 1].weight) {
                struct Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
    printf("Edges in MST:\n");
    for (i = 0; i < e; i++) {
        int a = find(edges[i].source);
        int b = find(edges[i].destination);

        if (a != b) {
            printf("%d - %d = %d\n",
                   edges[i].source + 1,
                   edges[i].destination + 1,
                   edges[i].weight);

            total += edges[i].weight;
            unionSet(a, b);
        }
    }
    printf("Minimum Cost = %d", total);
    return 0;
}

/*Output:
Edges in MST:
3 - 4 = 4
1 - 4 = 5
1 - 2 = 10
Minimum Cost = 19
*/