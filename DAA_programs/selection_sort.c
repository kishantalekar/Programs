#include<stdio.h>

void selection_sort(int arr[10],int n){
    int i, j, min;

    for (i = 0; i < n - 1; i++){
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main(){

    int n ;

    printf("Enter the no. of elements in the array : ");

    scanf("%d", &n);

    int arr[n];
    printf("enter %d elements in the array : ", n);

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, n);
    printf("elements after sorting are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
        return 0;
}