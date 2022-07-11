#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int vet[3], menor;

    for (int i = 0; i < 3; i++) {
        printf("%d VALOR: ", i + 1);
        scanf("%d", &vet[i]);
    }
    menor = vet[0];
    for (int i = 0; i < 3; i++) {
        if (vet[i] < menor) {
            menor = vet[i];
        }
    }
    printf("O MENOR E: %d", menor);

    return 0;
}