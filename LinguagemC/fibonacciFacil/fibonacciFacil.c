#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num, proximo, anterior = 0, atual = 1;

    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {

        if(i == num){
            printf("%d\n", anterior);

        }else{

            printf("%d ", anterior);
            proximo = anterior + atual;
            anterior = atual;
            atual = proximo;

        }
    }

    return 0;
}