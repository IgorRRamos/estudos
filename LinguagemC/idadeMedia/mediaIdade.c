#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int age, cont = 0, contAges = 0;
    float average;

    do {
        printf("DIGITE QUANTAS IDADES DESEJAR, DIGITE UM NUMERO NEGATIVO PARA SAIR:\n");
        scanf("%d", &age);
        if (age > 0) {
            contAges += age;
            cont++;
        }
    } while (age > 0);

    average = (float)contAges / cont;

    printf("MEDIA DE IDADES: %.2f\n", average);

    return 0;
}