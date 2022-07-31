#include <stdio.h>

int main() {
    int a = 40;
    int *ponteiro1;
    int **ponteiro2;

    ponteiro1 = &a;
    ponteiro2 = &ponteiro1;

    printf("Endereco primeiro ponteiro: %p\n", &ponteiro1);
    printf("Endereco segundo ponteiro: %p\n", &ponteiro2);
    printf("valor primeiro ponteiro: %d\n", *ponteiro1);
    printf("valor segundo ponteiro: %d\n", **ponteiro2);

    return 0;
}