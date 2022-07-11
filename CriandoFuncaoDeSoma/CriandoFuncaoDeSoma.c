#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float soma(float a, float b);

int main() {
    float n1, n2;

    printf("Digite os numeros: \n");
    scanf("%f %f", &n1, &n2);

    printf("Resultado: %.2f", soma(n1, n2));

    return 0;
}

float soma(float a, float b) {
    return a + b;
}
