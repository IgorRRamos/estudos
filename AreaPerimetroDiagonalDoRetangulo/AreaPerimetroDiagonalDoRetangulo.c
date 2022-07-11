#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    double base, height, area, perimeter, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    
    printf("Altura do retangulo: ");
    scanf("%lf", &height);

    area = base * height;
    perimeter = (2 * base) + (2 * height);
    diagonal = sqrt((pow(base, 2)) + pow(height, 2));

    printf("AREA = %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", perimeter);
    printf("DIAGONAL = %.4lf\n", diagonal);

    return 0;
}