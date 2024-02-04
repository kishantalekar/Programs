#include<stdio.h>

void printMatrix(int graph[100][100],int vertices){

    printf("adjacency matrix \n");
    for (int i = 0; i < vertices; i++){
        for (int j = 0; j < vertices; j++){
            printf("%d", graph[i][j]);
        }
        printf("\n");
    }

    int in, out;

    for (int i = 0; i < vertices; i++){

        in = out = 0;
        for (int j = 0; j < vertices; j++){
            if(graph[i][j])
                out++;
            if(graph[j][i])
                in++;

        }
        printf("\nvertex %d : in-degree = %d,out-degree = %d", i, in, out);
    }
}

int main(){

    int edges, vertices;
    int graph[100][100];

    printf("enter the vertices and edges : ");
    scanf("%d%d", &vertices, &edges);

    printf("enter the edges :");
    for (int i = 0; i < edges; i++)
    {
        int vertex1, vertex2;

        scanf("%d%d", &vertex1, &vertex2);
        graph[vertex1][vertex2] = 1;
    }

    printMatrix(graph, vertices);
    return 0;
}