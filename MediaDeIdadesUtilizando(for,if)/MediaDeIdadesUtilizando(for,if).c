#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int sum, cont, age;
    double average;

    sum = 0;
    cont = 0;

    printf("Digite a idade: \n");
    scanf("%d", &age);

    while (age >= 0) {
        sum = sum + age;
        cont = cont + 1;
        scanf("%d", &age);
    }
    if (cont <= 0) {
        printf("Impossivel calcular");
    } else {
        average = (double) average / cont;
        printf("MEDIA = %.2lf\n", average);
    }
    return 0;
}