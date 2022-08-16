#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float media, nota1, nota2;
    int resp;

    while(resp != 2){
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

    do{
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &resp);
    }while(resp < 0 || resp > 2);

    }

    return 0;
}