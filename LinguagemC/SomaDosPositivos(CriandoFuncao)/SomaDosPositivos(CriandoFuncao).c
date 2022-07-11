#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculo(int n1, int n2); // Declarei os prototipos!

int main() {
    int x, y; // declarei minhas variaveis! 

    printf("Digite 2 numeros: \n");
    scanf("%d %d", &x, &y); // lendo dados digitados pelo usario!

    printf("Soma dos inteiros: %d", calculo(x, y));

    return 0;
}
int calculo(int n1, int n2){ // Declarei meus parametros
    int soma;   // Criação de variaveis para usar dentro da função! / A não ser que seja variavel global!
    soma = 0;

    for(int i = n1 + 1; i < n2; i++)
        soma += i;
    return soma;
}
