#include<stdio.h>

#define MAX 50
int profit[MAX], weights[MAX], items;

int max(int a,int b){

    return a > b ? a : b;
}

int knapsac(int i ,int cap){

    if(i == items ){
        return weights[i] > cap ? 0 : profit[i];
    }
    if(weights[i] > cap){
        return knapsac(i + 1, cap);
    }

    return max(knapsac(i + 1, cap), knapsac(i + 1, cap - weights[i]) + profit[i]);
}

int main(){
    int capacity;
    printf("enter the no of items : ");
    scanf("%d", &items);

    printf("enter the profits : ");
    for (int i = 1; i <= items; i++){

        scanf("%d", &profit[i]);
    }

    printf("enter the weights : ");
    for (int i = 1; i <= items; i++){
        scanf("%d", &weights[i]);
    }

    printf("enter the knapsack capacity : ");
    scanf("%d", &capacity);

   int result =  knapsac(1, capacity);
   printf("%d",result);
   return 0;
}
