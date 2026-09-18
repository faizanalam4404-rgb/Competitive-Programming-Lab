#include <stdio.h>

int main() {
    int n, e;

    printf("Enter vertices: ");
    scanf("%d",&n);

    printf("Enter edges: ");
    scanf("%d",&e);

    int adj[20][20]={0};

    printf("Enter edges (u v):\n");
    for(int i=0;i<e;i++){
        int u,v;
        scanf("%d%d",&u,&v);
        adj[u][v]=1;
        adj[v][u]=1;
    }

    printf("Adjacency List:\n");

    for(int i=0;i<n;i++){
        printf("%d -> ",i);
        for(int j=0;j<n;j++)
            if(adj[i][j])
                printf("%d ",j);
        printf("\n");
    }

    return 0;
}