#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int n;
    double average, sum;

    sum = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }
    printf("\n");
    printf("VALORES = ");

    for(int i = 0; i <  n; i++){
        printf("%.1lf  ", vet[i]);
    }
    for (int i = 0; i < n; i++){
        sum = sum + vet[i];
    }
    average = sum / n;
    printf("\n");
    printf("SOMA = %.2lf\n", sum);
    printf("MEDIA = %.2lf\n", average);

  
        return 0;
}