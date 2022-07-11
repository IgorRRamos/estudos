#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double fatorial(int num1); //Declarei meus prototipos
double divisao(int num2);

int main() {
    int num;

    printf("Digite um numero: "); // O programa leu os dados digitados pelo usuario
    scanf("%d", &num);

    printf("%.2lf", divisao(num));

    return 0;
}
double fatorial(int num1){  // Função criada para o fatorial!!
    double soma;
    soma = 1;
    for (int i = 1; i <= num1; i++){
        soma = soma * i;
    }
    return soma;
}

double divisao(int num2){  //Funcao criada para divisão do fatorial
    double soma;
    soma = 0;
    for (int i = 0; i <= num2; i++){
        soma += 1 / fatorial(i);
    }
    return soma;
}