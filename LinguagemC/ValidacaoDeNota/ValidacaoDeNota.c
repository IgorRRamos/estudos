#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float media = 0, nota1, nota2;

    do {
        scanf("%f", &nota1);

        if (nota1 < 0 || nota1 > 10) {
            printf("nota invalida\n");
        }

    } while (nota1 < 0 || nota1 > 10);

    do {
        scanf("%f", &nota2);

        if (nota2 < 0 || nota2 > 10) {
            printf("nota invalida\n");
        }

    } while (nota2 < 0 || nota2 > 10);

    media = (nota1 + nota2) / 2;
    printf("media = %.2lf\n", media);

    return 0;
}