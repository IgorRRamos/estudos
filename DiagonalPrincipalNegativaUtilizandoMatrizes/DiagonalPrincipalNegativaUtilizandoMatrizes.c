#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int negative[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d , %d]: ", i, j);
            scanf("%d", &negative[i][j]);
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");

    for (int i = 0; i < n; i++) {
        printf("%d  ", negative[i][i]);
    }

    int x;
    x = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (negative[i][j] < 0) {
                x++;
            }
        }
    }

    printf("\nNumeros negativos: %d\n", x);

    return 0;
}