#include<stdio.h>
int visited[10];
void dfs(int graph[100][100], int start, int vertices)
{

    printf("%d", start);
    visited[start] = 1;

    for (int i = 0; i < vertices; i++){
        if(graph[start][i] && !visited[i]){
            dfs(graph, i, vertices);
        }
    }
}
void bfs(int graph[100][100],int start,int vertices){
    int queue[100];

    int front = -1, rear = -1;

    int visited[10] = {0};

    printf("%d", start);
    visited[start] = 1;
    queue[++rear] = start;

    while (front != rear)  
    {
        int current = queue[++front];
        for (int i = 0; i < vertices; i++){
            if(graph[current][i] && !visited[i]){
                printf("%d", i);
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}
int main(){
    int edges, vertices;
    printf("enter the no of vertices and edges : ");
    scanf("%d%d", &vertices, &edges);
    int graph[100][100];
    printf("enter the edges (vertex1,vertex2)");
    for (int i = 0; i < edges; i++){

        int vertex1, vertex2;
        scanf("%d%d", &vertex1, &vertex2);
        graph[vertex1][vertex2] = 1;
        graph[vertex2][vertex1] = 1;
    }
    int startVertex;
    printf("enter the start vertex : ");
    scanf("%d", &startVertex);

    dfs(graph, startVertex, vertices);

    bfs(graph, startVertex, vertices);
    return 0;
}