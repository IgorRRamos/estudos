#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num1, num2;
} coordenadas;

void pertence(int num1, int num2);

int main(int argc, char *argv[]) {
    coordenadas quadrante;

    while (quadrante.num1 != 0 && quadrante.num2 != 0) {
        scanf("%d %d", &quadrante.num1, &quadrante.num2);

        pertence(quadrante.num1, quadrante.num2);
    }

    return 0;
}

void pertence(int num1, int num2) {
    if (num1 > 0 && num2 > 0) {
        printf("primeiro\n");
    } else if (num2 > 0 && num1 < 0) {
        printf("segundo\n");
    } else if (num1 < 0 && num2 < 0) {
        printf("terceiro\n");
    } else if (num1 > 0 && num2 < 0) {
        printf("quarto\n");
    } else {
    }
}