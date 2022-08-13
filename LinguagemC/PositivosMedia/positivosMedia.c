#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float numero[6], media, contPositivos;
    int cont = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%f", &numero[i]);
    }
    for (int i = 0; i < 6; i++) {
        if (numero[i] > 0) {
            cont++;
            contPositivos += numero[i];
        }
    }
    media = contPositivos / cont;

    printf("%d valores positivos\n", cont);
    printf("%.1f\n", media);

    return 0;
}