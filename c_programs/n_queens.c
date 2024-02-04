#include<stdio.h>
int board[100][100],N;

int isAttacked(int i, int j)
{
    int k, l;

    for (k = 0; k < N; k++){
        if(board[i][k] == 1 || board[k][j] == 1){
            return 1;
        }
    }

    for (k = 0; k < N; k++){

        for (l = 0; l < N; l++){

            if((k+l) == (i+j) || (k-l) == (i - j)){

                if(board[k][l] == 1){
                    return l;
                }
            }
        }
    }
        return 0;
}

int nQueens(n){

    if(n == 0){
        return 1;
    }

    for (int i = 0; i < N; i++){

        for (int j = 0; j < N;j++){
            if(!isAttacked(i,j) && board[i][j] != 1){
                board[i][j] = 1;

                if(nQueens(n -1) == 1){
                    return 1;
                }
                board[i][j] = 0;
            }
        }
    }
    return 0;
}

int main(){
    printf("enter the no of queens : ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++){

        for (int j = 0; j < N; j++){
            board[i][j] = 0;
        }
    }

    nQueens(N);

        for (int i = 0; i < N; i++){

        for (int j = 0; j < N; j++){
            printf(" %d ", board[i][j]);
        }
        printf("\n");
        }
        return 0;
}