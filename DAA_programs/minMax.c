#include<stdio.h>


void findMinMax(int arr[10],int start,int end,int *min,int *max){
    if(start == end){
        *min = *max = arr[start];
        return;
    }
    int mid = (start + end) / 2;

    int leftMin, leftMax, rightMin, rightMax;
    findMinMax(arr, start, mid, &leftMin, &leftMax);
    findMinMax(arr, mid + 1, end, &rightMin, &rightMax);

    *min = leftMin < rightMin ? leftMin : rightMin;
    *max = leftMax > rightMax ? leftMax : rightMax;

}
int main(){
    int n;
    printf("enter the no.of elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements in the array : ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int min, max;
    findMinMax(arr, 0, n - 1, &min, &max);
    printf("min element is : %d", min);
    printf("max element is : %d", max);
    return 0;
}