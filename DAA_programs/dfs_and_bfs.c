#include<stdio.h>

#define MAX_SIZE 10

int visited[MAX_SIZE];

void dfs(int graph[MAX_SIZE][MAX_SIZE],int vertex,int vertices){
    printf("%d ", vertex);
    visited[vertex] = 1;

    for (int i = 0; i < vertices; ++i){
        if(graph[vertex][i] && !visited[i]){
            dfs(graph, i, vertices);
        }
    }
}

void bfs(int graph[MAX_SIZE][MAX_SIZE],int vertex,int vertices){

    int queue[MAX_SIZE];
    int rear = -1, front = -1;
    int visited[MAX_SIZE] = {0};
    queue[++rear] = vertex;
    visited[vertex] = 1;
    printf("%d ", vertex);

    while(front != rear){

        int current = queue[++front];
        for (int i = 0; i < vertices; ++i){
            if(graph[current][i] && !visited[i]){
                printf("%d ", i);
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }
}

int main(){
    int edges, vertices;
    printf("enter the edges and vertices : ");
    scanf("%d%d", &edges, &vertices);
    int graph[MAX_SIZE][MAX_SIZE] = {0};

    printf("enter the edges (vertex1 and vertex2)");
    for (int i = 0; i < edges; i++){
        int vertex1, vertex2;
        scanf("%d%d", &vertex1, &vertex2);
        graph[vertex1][vertex2] = 1;
        graph[vertex2][vertex1] = 1;

    }
    int startVertex;
    printf("enter the start vertex : ");
    scanf("%d", &startVertex);
    printf("dfs : ");

    dfs(graph, startVertex, vertices);
    for (int i = 0; i < MAX_SIZE; i++){
        visited[i] = 0;
    }
    printf("\nbfs : ");
    bfs(graph, startVertex, vertices);
    return 0;
}