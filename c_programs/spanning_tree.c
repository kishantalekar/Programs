#include<stdio.h>

int main(){
    int n, cost[10][10],ne =1;
    int visited[10] = {0};
    int minCost = 0;
    printf("enter the no of nodes : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){

        for (int j = 1; j <= n; j++){

            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0){
                cost[i][j] = 999;
            }
        }
    }

    visited[1] = 1;

    while(ne < n){

        int min = 999, u, v, a, b;

        for (int i = 1; i <= n; i++){

            for (int j = 1; j <= n;j++){

                if(cost[i][j] < min && visited[i]!= 0){
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }

            if(visited[u] == 0 || visited[v] == 0){
                printf("edge %d:(%d,%d) cost : %d", ne++, u, v, min);
                minCost += min;
                visited[b] = 1;
            }
            cost[a][b] = 999;
            cost[b][a] = 999;
        }
    }
    printf("\nminCost : %d\n",minCost);

}