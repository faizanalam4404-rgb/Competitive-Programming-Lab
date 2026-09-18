#include <stdio.h>

int graph[20][20], visited[20], queue[20];
int front=0, rear=0;

void bfs(int start, int n){
    queue[rear++]=start;
    visited[start]=1;

    while(front<rear){
        int v=queue[front++];
        printf("%d ",v);

        for(int i=0;i<n;i++){
            if(graph[v][i] && !visited[i]){
                visited[i]=1;
                queue[rear++]=i;
            }
        }
    }
}

int main(){
    int n;

    printf("Enter number of vertices: ");
    scanf("%d",&n);

    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    int start;
    printf("Enter starting vertex: ");
    scanf("%d",&start);

    printf("BFS Traversal: ");
    bfs(start,n);

    return 0;
}