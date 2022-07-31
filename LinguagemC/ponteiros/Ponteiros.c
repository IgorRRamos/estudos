#include <stdio.h>

int main() {
    int *x, valor, y;
    valor = 35;
    x = &valor;
    y = *x;

    printf("Endereco da variavel: %p\n", &x);
    printf("Valor da variavel apontada pelo ponteiro: %d\n", *x);
    printf("Endereco da variavel: %d\n", y);

    return 0;
}