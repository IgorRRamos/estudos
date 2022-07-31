#include <stdio.h>

int main() {
    int a = 2;
    int *pA = &a;

    printf("Endereco da variavel: %p\n", &pA);
    printf("Valor da variavel: %d\n", *pA);

    return 0;
}