#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int m, n, sum;

    sum = 0;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);

    double mat[m][n];

    for (int i = 0; i < m; i++) {
        printf("Digite os elementos da %da. linha:\n", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            sum = sum + mat[i][j];
        }
    }
    
    printf("A soma de todos os valores da matriz = %d\n", sum);

    return 0;
}