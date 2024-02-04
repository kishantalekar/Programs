#include<stdio.h>

int jobSequence(int d[6],int j[6],int n ){

    d[0] = 0;
    j[0] = 0;

    int k = 1;
    int r;

    for (int i = 2; i <= n; i++){
        r = k;
        while (d[j[r]] > d[i] && d[j[r]] != r)
            r = r - 1;
        
        if(d[j[r]] <= d[i] && d[i] > r){

            for (int q = k; q >= r; q--){
                j[q + 1] = j[q];
            }

            j[r + 1] = i;
            k++;
        }
    }  
    return k; 
}

int main(){
    int d[6], j[6], p[6];
    printf("enter the deadlines : ");
    for (int i = 1; i <= 5; i++)
        scanf("%d", &d[i]);


    printf("enter the profits : ");
    for (int i = 1; i <= 5; i++)
        scanf("%d", &d[i]);


    for (int i = 1; i <= 5; i++)
        j[i] = i;

   int k = jobSequence(d, j, 5);

     for (int i = 1; i <= k; i++)
        printf("%d\n", j[i]);

     return 0;
}