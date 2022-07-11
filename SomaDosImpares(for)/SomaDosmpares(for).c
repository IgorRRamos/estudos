#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int x, y, soma, troca;

    soma = 0;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &x, &y);

    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }
    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }
    printf("SOMA DOS IMPARES = %d", soma);
    return 0;
}