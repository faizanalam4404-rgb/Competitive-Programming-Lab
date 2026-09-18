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

    int selected[20] = {0};
    selected[0] = 1;

    int edge = 0, total = 0;

    printf("Edges in MST:\n");

    while (edge < n - 1) {
        int min = 9999, x = 0, y = 0;

        for (int i = 0; i < n; i++)
            if (selected[i])
                for (int j = 0; j < n; j++)
                    if (!selected[j] && graph[i][j] &&
                        graph[i][j] < min) {
                        min = graph[i][j];
                        x = i;
                        y = j;
                    }

        printf("%d - %d = %d\n", x, y, min);
        total += min;
        selected[y] = 1;
        edge++;
    }

    printf("Total Cost = %d\n", total);

    return 0;
}