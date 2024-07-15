#include<stdio.h>

#define MAX 50
int weights[MAX], profits[MAX], n,m;

int max(int a,int b){
    return a > b ? a : b;
}

int knapsack(int i ,int m){
    if(i == n){
        return weights[n] > m ? 0 : profits[n];
    }
    if(weights[i] > m){
        return knapsack(i + 1, m);
    }
    return max(knapsack(i + 1, m), knapsack(i + 1,  m - weights[i]) + profits[i]);
}
int main(){
    printf("enter the no. of items : ");
    scanf("%d", &n);
    printf("enter the weights : ");
    for (int i = 1; i <= n; i++){
        scanf("%d", &weights[i]);
    }
    printf("Enter the profits : ");
    for (int i = 1; i <= n; i++){
        scanf("%d", &profits[i]);
    }

    printf("enter the capacity of the knapsack : ");
    scanf("%d", &m);

    int res = knapsack(1, m);

    printf("optimal soluation %d", res);

    return 0;
}