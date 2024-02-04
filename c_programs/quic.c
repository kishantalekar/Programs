#include<stdio.h>


void quick_sort(int arr[10],int first,int last){

    if(first < last){

        int pivot = first;
        int i = first;
        int j = last;

        while(i < j){

            while(arr[i] <= arr[pivot] && i < last){
                ++i;
            }
            while(arr[j] > arr[pivot])
                j--;

            if(i < j){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[j];
        arr[j] = arr[pivot];
        arr[pivot] = temp;

        quick_sort(arr, first, j - 1);
        quick_sort(arr, j + 1, last);
    }
}

int main(){
    int n, arr[10];

    printf("enter the no fo elements : ");
    scanf("%d", &n);

    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }

    quick_sort(arr, 0, n - 1);

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}