#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i = 0, nInicio, nFim, soma = 0, troca;

    scanf("%d %d", &nInicio, &nFim);

    if (nFim < nInicio) {
        troca = nInicio;
        nInicio = nFim;
        nFim = troca;
    }
    if (nInicio == 0 || nFim == 0) {
    } else {
        for (i = nInicio; i <= nFim; i++) {
            soma += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", soma);
    }

    return 0;
}