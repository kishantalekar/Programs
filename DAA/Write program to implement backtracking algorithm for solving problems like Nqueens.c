#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Number of queens
int N;

// Chessboard
int board[100][100];

// Function to check if a cell is attacked or not
int is_attacked(int i, int j) {
    int k, l;
    // Checking if there is a queen in row or column
    for (k = 0; k < N; k++) {
        if ((board[i][k] == 1) || (board[k][j] == 1))
            return 1;
    }
    // Checking for diagonals
    for (k = 0; k < N; k++) {
        for (l = 0; l < N; l++) {
            if (((k + l) == (i + j)) || ((k - l) == (i - j))) {
                if (board[k][l] == 1)
                    return 1;
            }
        }
    }
    return 0;
}

// Function to place N queens on the chessboard
int N_queen(int n) {
    int i, j;
    // If all queens are placed, return true
    if (n == 0)
        return 1;
    // Try all rows in the current column
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            // Check if we can place a queen here
            // Queen will not be placed if the place is being attacked
            // or already occupied
            if ((!is_attacked(i, j)) && (board[i][j] != 1)) {
                board[i][j] = 1;
                // Recursion
                // Whether we can put the next queen with this arrangement or not
                if (N_queen(n - 1) == 1) {
                    return 1;
                }
                board[i][j] = 0;
            }
        }
    }
    return 0;
}

int main() {
    // Taking the value of N from the user
    printf("Enter the number of queens\n"); // This line is modified to ask the number of queens from the user
    scanf("%d", &N); // This line is modified to read the number of queens from the user

    int i, j;
    // Setting all elements to 0
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            board[i][j] = 0;
        }
    }
    // Calling the function
    N_queen(N);
    // Printing the matrix
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d\t", board[i][j]);
        printf("\n");
    }
}
