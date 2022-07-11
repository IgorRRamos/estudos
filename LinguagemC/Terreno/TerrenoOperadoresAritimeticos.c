#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    double width, length, area, price, squareMeterPrice;

    printf("Digiite a largura do terreno: ");
    scanf("%lf", &length);
    printf("Digiite a largura do terreno: ");
    scanf("%lf", &width);
    printf("Digiite a largura do terreno: ");
    scanf("%lf", &squareMeterPrice);

    area = length * width;
    price = area * squareMeterPrice;

    printf("Area do terreno = %.1lf\n", area);
    printf("Preco do terreno = %.1lf\n", price);
        return 0;
}