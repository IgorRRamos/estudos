#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num, num2;
} numeros;

void crescente(int num1, int num2);

int main(int argc, char *argv[]) {
    numeros ver;
    int cont;

    do {
        scanf("%d %d", &ver.num, &ver.num2);
        crescente(ver.num, ver.num2);

    } while (ver.num != ver.num2);

    return 0;
}

void crescente(int num1, int num2) {
    if (num1 < num2) {
        printf("Crescente\n");
    } else if(num1 > num2) {
        printf("Decrescente\n");
    } else if(num1 == num2){
        
    }
}