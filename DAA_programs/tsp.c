#include<stdio.h>

int arr[10][10], n, completed[10], cost = 0;

int least(int c);
void takeInput()
{
    printf("Enter the no .of villages or city : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
        completed[i] = 0;
    }
    printf("cost matrix : ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }

    }
}

void mincost(int city){

    int nctiy;
    completed[city] = 1;
    printf("%d-->", city + 1);

    nctiy = least(city);

    if(nctiy == 999){
        nctiy = 0;
        printf("%d-->",nctiy+1);
        cost += arr[city][nctiy];
        return;
    }
    mincost(nctiy);
}

int least(int c){
    int min = 999, kmin, nc=999, i;

    for ( i = 0; i < n; i++)
    {
        if(arr[c][i] != 0 && completed[i]==0){
            if(arr[c][i]*2 < min){
                min = arr[c][i] * 2;
                kmin = arr[c][i];
                nc = i;
            }
        }
    }
    if(min != 999){
        cost += kmin;
    }
    return nc;
}

int main(){
    takeInput();

    printf("path : ");

    mincost(0);

    printf("The maximun cost : %d", cost);
    return 0;
}