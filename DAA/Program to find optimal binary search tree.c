#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int sum(int freq[], int i, int j) {
    int s = 0;
    for (int k = i; k <= j; k++) {
        s += freq[k];
    }
    return s;
}

int optimalBSTCost(int freq[], int n) {
    int cost[n][n];

    for (int i = 0; i < n; i++)
        cost[i][i] = freq[i];

    for (int L = 2; L <= n; L++) {
        for (int i = 0; i <= n - L + 1; i++) {
            int j = i + L - 1;
            cost[i][j] = INT_MAX;

            for (int r = i; r <= j; r++) {
                int c = ((r > i) ? cost[i][r - 1] : 0) + 
                        ((r < j) ? cost[r + 1][j] : 0) +
                        sum(freq, i, j);

                if (c < cost[i][j])
                    cost[i][j] = c;
            }
        }
    }

    return cost[0][n - 1];
}

int main() {
    int n;
    printf("Enter the number of keys: ");
    scanf("%d", &n);

    int *freq = malloc(n * sizeof(int));
    printf("Enter frequencies:\n");
    for (int i = 0; i < n; i++) scanf("%d", &freq[i]);

    printf("Optimal BST cost: %d\n", optimalBSTCost(freq, n));
    free(freq);
    return 0;
}
