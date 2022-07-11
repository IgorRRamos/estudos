#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int number1, number2, number3, menor;

    printf("Primeiro valor: ");
    scanf("%d", &number1);

    printf("Segundo valor: ");
    scanf("%d", &number2);

    printf("terceiro valor: ");
    scanf("%d", &number3);

    if (number1 == number2 || number1 == number2 || number2 == number3) {
        printf("Apenas uma vez!!");
    } else if (number1 < number2 && number1 < number3) {
        menor = number1;
    } else if (number2 < number3) {
        menor = number2;
    } else {
        menor = number3;
    }
    printf("MENOR = %d", menor);

    return 0;
}