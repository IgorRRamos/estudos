#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int idade(int dia1, int dia2, int mes1, int mes2, int ano1, int ano2); 
int meses(int calculoDeMeses);
int dias(int calculoDeDias);
//Aqui estamos declarando o prototipo das funções!!!!


int main() {
    int dia1, dia2, mes1, mes2, ano1, ano2; // Desclarei minhas variaveis

    printf("Digite o dia do nascimento: "); // Atribuindo valores lendo valores digitados pelo usario
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);

    printf("Digite a data atual: ");        // Atribuindo valores lendo valores digitados pelo usario
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    int idadeEmAnos = idade(dia1, dia2, mes1, mes2, ano1, ano2); // Aqui eu coloquei os parametros da função idade dentro de uma viariavel!!!

    printf("Idade: %d\n", idadeEmAnos);
    printf("Meses: %d\n", meses(idadeEmAnos));
    printf("Dias: %d\n", dias(idadeEmAnos));
    return 0;
}

int idade(int dia1, int dia2, int mes1, int mes2, int ano1, int ano2) { // parametros para utilizar na funcao! 
    int idadeEmAnos;

    if (mes2 < mes1) { 
        idadeEmAnos = ano2 - ano1 - 1;

    } else if (mes2 >= mes1) {
        if (dia1 < dia2) {
            idadeEmAnos = ano2 - ano1 - 1;
        } else {
            idadeEmAnos = ano2 - ano1; // Condição para calculo da idade em anos!!!
        }
    }

    return idadeEmAnos;
}

int meses(int calculoDeMeses){ 

    return  12 * calculoDeMeses; // Essa função esta expressando 12 * idadeEmAnos!!!!
}

int dias(int calculoDeDias){
    return 365 * calculoDeDias; // Essa função esta expressando 365 * idadeEmAnos!!!!
}