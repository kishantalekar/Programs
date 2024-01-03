#include <stdio.h>

#define MAX 10  // Maximum number of vertices

void printMatrix(int graph[MAX][MAX], int n) {
    int in, out;
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < n; i++, printf("\n"))
        for (int j = 0; j < n; j++)
            printf("%d ", graph[i][j]);

    printf("\nVertex Degrees:\n");
    for (int i = 0; i < n; i++) {
        in = out = 0;
        for (int j = 0; j < n; j++) {
            if (graph[i][j]) out++;
            if (graph[j][i]) in++;
        }
        printf("Vertex %d: In-Degree=%d, Out-Degree=%d\n", i, in, out);
    }
}

int main() {
    int n, e, u, v;
    int graph[MAX][MAX] = {0};

    printf("Enter number of vertices and edges: ");
    scanf("%d %d", &n, &e);

    printf("Enter edges (u v): \n");
    for (int i = 0; i < e; i++) {
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
    }

    printMatrix(graph, n);
    return 0;
}
