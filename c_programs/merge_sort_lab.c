#include<stdio.h>


void merge(int arr[10],int low,int mid,int high){
    int i = low;
    int j = mid + 1;
    int k = low;
    int c[10];

    while (i <= mid && j <= high)
    {
        if(arr[i] < arr[j]){
            c[k++] = arr[i++];
        }
        else
        {
            c[k++] = arr[j++];
        }
    }

    while (i<= mid)
    {
        /* code */
      c[k++] = arr[i++];
    }   
     while (j<= high)
    {
        /* code */
      c[k++] = arr[j++];
    }

    for (int i = low; i <=high ; i++){
        arr[i] = c[i];
    }
}
void merge_sort(int arr[10],int low,int high){

    if(low < high){

        int mid = (low + high) / 2;

        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}


int main(){
    int n, arr[10];

    printf("enter the no fo elements : ");
    scanf("%d", &n);

    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }

    merge_sort(arr, 0, n - 1);

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}