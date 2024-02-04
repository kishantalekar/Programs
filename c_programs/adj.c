#include<stdio.h>


void inputGraph(int graph[100][100],int edges,int vertices){

    for (int i = 0; i < vertices; i++){
        for (int j = 0; j < vertices; j++){
            graph[i][j] = 0;
        }
    }

    printf("enter the edges for vertex1 and vertex2");
    for (int i = 0; i < edges; i++){
        int vertex1, vertex2;

        scanf("%d%d", &vertex1, &vertex2);
        graph[vertex1][vertex2] = 1;
        graph[vertex2][vertex1] = 1;
    }
}

void displayGraph(int graph[100][100],int edges,int vertices){

    printf("Adjacency matrix : ");

    for (int i = 0; i < vertices; i++){
        printf("%d", i);
    }
    printf("\n");

    for (int i = 0; i < vertices; i++){

        printf("%d", i);
        for (int j = 0; j < vertices; j++){
            printf("%d", graph[i][j]);
        }
    }
}

int main(){
    int edges, vertices;
    printf("enter the edges and vertices : ");
    scanf("%d%d", &edges, &vertices);
    int graph[100][100];
    inputGraph(graph, edges, vertices);
    displayGraph(graph, edges, vertices);
    return 0;
}