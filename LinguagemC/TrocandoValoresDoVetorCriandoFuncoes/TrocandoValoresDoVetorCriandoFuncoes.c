#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter(int vetor[], int tam); //Declaração do prototipo

int main() {
    int vet[10];

    for (int i = 0; i < 10; i++) { 
        scanf("%d", &vet[i]);
    }

    inverter(vet, 10); // sintaxe chmando a função trabalha com vetor!

    return 0;
}
void inverter(int vetor[], int tam) { 
    int vet[tam];
    for (int i = 0, j = 9; i < tam; i++, j--) { //For para ler crescente e decrescente!!
        vet[j] = vetor[i]; // invertendo os valores do vetor (verso)
    }

    for (size_t i = 0; i < tam; i++) {
        vetor[i] = vet [i];
        printf("%d  ", vetor[i]);  // invertendo os valores do vetor (reverso)
    }
}