#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int numeros[5], par = 0, impar = 0, positivo = 0, negativo = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &numeros[i]);
    }
    for(int i = 0; i < 5; i++){
        if(numeros[i] % 2 == 0){
            par++;
        }
        if(numeros[i] % 2 != 0){
            impar++;
        }
    }

    for(int i = 0; i < 5; i++){
        if(numeros[i] > 0){
            positivo++;
        }
        if(numeros[i] < 0){
            negativo++;
        }
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);



    return 0;
}