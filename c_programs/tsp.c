#include<stdio.h>

int a[10][10], completed[10],n;
int cost = 0;
int least(int);
void takeInput()
{
    printf("enter the no of cities : ");
    scanf("%d", &n);

    printf("enter the cost matrix : ");
    for (int i = 0; i < n; i++){
        printf("enter the %d element in the row : ", i + 1);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        completed[i] = 0;
    }

    printf("printing the cost matrix : ");
    for (int i = 0; i < n; i++){

        for (int j = 0; j < n; j++){
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
}

void minCost(int ncity){
    int nc;

    completed[ncity] = 1;
    printf("%d-->", ncity + 1);

    nc = least(ncity);

    if(nc == 999){
        nc = 0;
        printf("%d", nc + 1);
        cost += a[ncity][nc];
        return;
    }
    minCost(nc);
}

int least(int c){
    int min = 999, ncity = 999, kmin;

    for (int i = 0; i < n; i++){

        if(a[c][i] != 0 && completed[i] == 0){
            if(a[c][i] + a[c][i] < min){
                min = a[c][i] + a[c][i];
                kmin = a[c][i];
                ncity = i;
            }
        }
    }
    if(min != 999){
        cost += kmin;
    }
    return ncity;
}

int main(){
    takeInput();
    minCost(0);
    return 0;
}