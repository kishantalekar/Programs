#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int visited[MAX_SIZE];

void DFS(int graph[MAX_SIZE][MAX_SIZE], int vertex, int vertices) {
    printf("%d ", vertex);
    visited[vertex] = 1;

    for (int i = 0; i < vertices; ++i) {
        if (graph[vertex][i] && !visited[i]) {
            DFS(graph, i, vertices);
        }
    }
}

void BFS(int graph[MAX_SIZE][MAX_SIZE], int start, int vertices) {
    int queue[MAX_SIZE];
    int front = -1, rear = -1;
    int visited[MAX_SIZE] = {0};

    printf("%d ", start);
    visited[start] = 1;
    queue[++rear] = start;

    while (front != rear) {
        int current = queue[++front];

        for (int i = 0; i < vertices; ++i) {
            if (graph[current][i] && !visited[i]) {
                printf("%d ", i);
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }
}

int main() {
    int vertices, edges;
    printf("Enter the number of vertices and edges: ");
    scanf("%d %d", &vertices, &edges);

    int graph[MAX_SIZE][MAX_SIZE] = {0};

    printf("Enter the edges (vertex1 vertex2):\n");
    for (int i = 0; i < edges; ++i) {
        int vertex1, vertex2;
        scanf("%d %d", &vertex1, &vertex2);
        graph[vertex1][vertex2] = 1;
        graph[vertex2][vertex1] = 1;  // Assuming undirected graph
    }

    int startVertex;
    printf("Enter the starting vertex for traversal: ");
    scanf("%d", &startVertex);

    printf("DFS Traversal: ");
    DFS(graph, startVertex, vertices);

    // Reset visited array
    for (int i = 0; i < MAX_SIZE; ++i) {
        visited[i] = 0;
    }

    printf("\nBFS Traversal: ");
    BFS(graph, startVertex, vertices);

    return 0;
}