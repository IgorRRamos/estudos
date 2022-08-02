#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int tam = 0;
    
    char palavras[50];
    
    printf("Digite algo: ");
    fgets(palavras, 50, stdin);

    char *pA = &palavras;
    
    while (*pA != '\0'){
        tam++;
        pA++;
    }
    printf("Tamanho: %d\n", tam-1);


    return 0;
}