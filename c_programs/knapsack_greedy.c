#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b){

    double ratioA = ((int *)a)[0] / (double)((int *)a)[1];
    double ratioB = ((int *)b)[0] / (double)((int *)b)[1];

    return ((ratioB > ratioA) - (ratioB < ratioA));
}

double knapsace(int items[10][2],int capacity,int n){

    int currentWeight = 0;
    double totalValue = 0;

    qsort(items, n, sizeof(items[0]), compare);

    for (int i = 0; i < n; i++){

        if(currentWeight+items[i][1] <= capacity){
            currentWeight += items[i][1];
            totalValue += items[i][0];
        }
        else
        {
            int remainingWeight = capacity - currentWeight;
            totalValue += (remainingWeight / items[i][1]) * items[i][0];
            break;
        }
    }
    return totalValue;
}

int main(){
    int n,capacity;
    int items[100][2];
    printf("enter the no of items : ");
    scanf("%d", &n);

    printf("enter the knapsack capactiy : ");
    scanf("%d", &capacity);
    printf("enter the profit and weights : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &items[i][0], &items[i][1]);
    }

    double result = knapsace(items, capacity, n);
    printf("maximum capacity : %.2f", result);

    return 0;
}