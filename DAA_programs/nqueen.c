#include<stdio.h>
int N;
int board[100][100];

int isAttacked(int row, int col)
{
    int i, j;
    for (i = 0; i < N; i++){
        if((board[row][i] ==1)||( board[i][col] == 1)){
            return 1;
        }
    }
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (((i+j) == (row+col)) ||( (i-j) == (row -col)))
                {
                    if(board[i][j] == 1){
                        return 1;
                    }
                }
            }
        }
        return 0;
}

int nQueens(int n){
    if(n == 0){
        return 1;

    }


    for (int i = 0; i < N; i++){
        for (int j = 0; j < N;j++){
            if((!isAttacked(i,j) )&&( board[i][j] != 1)){
                board[i][j] = 1;
                if (nQueens(n - 1) == 1)
                {
                    return 1;
                }
                board[i][j] = 0;
            }
        }
    }
    return 0;
}

int main(){
    printf("enter the number of queens : \n");
    scanf("%d", &N);

    for (int i = 0; i < N;i++){
        for (int j = 0; j < N; j++){
            board[i][j] = 0;
        }
    }

    nQueens(N);

      for (int i = 0; i < N;i++){
        for (int j = 0; j < N; j++){
            printf(" %d ", board[i][j]);
        }
        printf("\n");
      }

    return 0;
}