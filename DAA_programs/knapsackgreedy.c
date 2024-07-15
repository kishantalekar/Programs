#include<stdio.h>
#include<stdlib.h>

#define MAX_ITEMS 100
int compare(const void *a,const void *b){
    int rationA = ((int *)a)[0] / (double)((int *)a)[1];
    int rationb = ((int *)b)[0] / (double)((int *)b)[1];

    return (rationb > rationA) - (rationb < rationA);
}

double knapsackGreedy(int items[][2],int n,int capacity){
    qsort(items, n, sizeof(items[0]), compare);

    int currentWeight = 0;
    double totalValue = 0.0;

    for (int i = 0; i < n; i++){

        if(currentWeight +items[i][1] <= capacity){
            totalValue += items[i][0];
            currentWeight += items[i][1];
        }
        else
        {
            int remainingWeight = (capacity - currentWeight);
            totalValue += (remainingWeight / items[i][1]) * items[i][0];
            break;
        }
    }
    return totalValue;
}

int main(){
    int n,capacity;
    printf("enter the no.of items : ");
    scanf("%d", &n);

    int arr[n][2];

    printf("enter the profits and weights of the item \n");
    for (int i = 0; i < n; i++){
        printf("enter the profit for %d item : ", i + 1);
        scanf("%d", &arr[i][0]);
        printf("enter the weight  for %d item : ", i + 1);
        scanf("%d", &arr[i][1]);
    }

    printf("enter the capacity of the : ");
    scanf("%d", &capacity);

    double res = knapsackGreedy(arr, n, capacity);

    printf("maximum value in the knapsack using greedy approach : %.2f\n", res);

    return 0;
}